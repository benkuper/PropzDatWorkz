/*
  ==============================================================================

    SerialOutput.cpp
    Created: 18 Dec 2019 4:25:30pm
    Author:  bkupe

  ==============================================================================
*/

#include "SerialOutput.h"
#include "Serial/SerialDevice.h"
#include "Pattern/Pattern.h"

SerialOutput::SerialOutput() :
	Output(getTypeString()),
	port(nullptr)
{
	deviceParam = new SerialDeviceParameter("Port", "The port to connect to", true);
	addParameter(deviceParam);
	deviceParam->openBaudRate = 115200;
	isConnected = addBoolParameter("Is Connected", "Is the device connected", false);
}

SerialOutput::~SerialOutput()
{
	setCurrentPort(nullptr);
}

void SerialOutput::setCurrentPort(SerialDevice* _port)
{
	if (port == _port) return;

	if (port != nullptr)
	{
		port->removeSerialDeviceListener(this);
	}

	port = _port;

	if (port != nullptr)
	{
		DBG(" > " << port->info->port);

		port->addSerialDeviceListener(this);
		if (enabled->boolValue()) port->open(115200);
		if (!port->isOpen())
		{
			NLOG(niceName, "Could not open port : " << port->info->port);
		}
		else
		{
			port->setMode(SerialDevice::PortMode::LINES);
		}

		lastOpenedPortID = port->info->deviceID;
	}

	isConnected->setValue(port != nullptr);

}

void SerialOutput::onContainerParameterChangedInternal(Parameter* p)
{
	Output::onContainerParameterChangedInternal(p);
	if (p == deviceParam)
	{
		setCurrentPort(deviceParam->currentDevice);
	}
}

void SerialOutput::sendSync()
{
	if (port == nullptr)
	{
		NLOGWARNING(niceName, "Port is null, not sending");
		return;
	}

	if (!port->isOpen())
	{
		NLOGWARNING(niceName, "Port is not open");
		return;
	}

	port->writeString("s\n");

}

void SerialOutput::sendPatternDataInternal(int groupID, bool publicGroup, Pattern* p)
{
	if (port == nullptr)
	{
		NLOGWARNING(niceName, "Port is null, not sending");
		return;
	}

	if (!port->isOpen())
	{
		NLOGWARNING(niceName, "Port is not open");
		return;
	}

	const uint8_t values[13]{
		groupID,
		p->page,
		p->mode,

		p->getActiveFlags(),

		(uint8_t)(p->hueOffset->floatValue() * 255),
		(uint8_t)(p->saturation->floatValue() * 255),
		(uint8_t)(p->brightness->floatValue() * 255),

		(uint8_t)(p->speed->floatValue() * 255),
		(uint8_t)(p->density->floatValue() * 255),

		(uint8_t)(p->lfo1->floatValue() * 255),
		(uint8_t)(p->lfo2->floatValue() * 255),
		(uint8_t)(p->lfo3->floatValue() * 255),
		(uint8_t)(p->lfo4->floatValue() * 255)
	};

	String message = publicGroup?"P":"p";
	for (int i = 0; i < 13; i++)
	{
		if (i > 0) message += ",";
		message += String(values[i]);
	}

	message += "\n";

	port->writeString(message);


	if (logOutgoing->boolValue())
	{
		NLOG(niceName, "Send " + message);
	}
}

void SerialOutput::portRemoved(SerialDevice* p)
{
	setCurrentPort(nullptr);
}

void SerialOutput::portClosed(SerialDevice* p)
{
	setCurrentPort(nullptr);
}

void SerialOutput::serialDataReceived(const var& data)
{
	if (logIncoming->boolValue())
	{
		LOG("Data received  : " << data.toString());
	}
}
