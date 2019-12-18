/*
  ==============================================================================

    SerialOutput.h
    Created: 18 Dec 2019 4:25:30pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "../Output.h"
#include "Serial/SerialDeviceParameter.h"

class SerialOutput :
	public Output,
	public SerialDevice::SerialDeviceListener
{
public:
	SerialOutput();
	~SerialOutput();


	SerialDeviceParameter* deviceParam;
	BoolParameter* isConnected;
	SerialDevice* port;
	String lastOpenedPortID;

	virtual void setCurrentPort(SerialDevice *port);

	void onContainerParameterChangedInternal(Parameter* p) override;

	void sendPatternDataInternal(int groupID, Pattern* p) override;

	void serialDataReceived(const var& data) override;

	String getTypeString() const override { return "Serial"; }
	static SerialOutput* create(var params) { return new SerialOutput(); }
};