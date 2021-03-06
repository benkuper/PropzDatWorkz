/*
  ==============================================================================

    OSCOutput.cpp
    Created: 18 Dec 2019 4:25:26pm
    Author:  bkupe

  ==============================================================================
*/

#include "OSCOutput.h"
#include "Pattern/Pattern.h"

OSCOutput::OSCOutput() :
	Output(getTypeString())
{
	sender.connect("0.0.0.0", 1024);

	remoteHost = addStringParameter("Remote Host", "IP address to send to", "127.0.0.1");
	remotePort = addIntParameter("Remote Port", "Port to send to", 8888);
}

OSCOutput::~OSCOutput()
{
}

void OSCOutput::sendSync()
{
	OSCMessage m("/sync");
	if (logOutgoing->boolValue()) NLOG(niceName, "Send Sync");
	sender.sendToIPAddress(remoteHost->stringValue(), remotePort->intValue(), m);
}

void OSCOutput::sendStopSync()
{
	OSCMessage m("/stopSync");
	if (logOutgoing->boolValue()) NLOG(niceName, "Send Stop Sync");
	sender.sendToIPAddress(remoteHost->stringValue(), remotePort->intValue(), m);
}

void OSCOutput::sendResetSync()
{
	OSCMessage m("/resetSync");
	if (logOutgoing->boolValue()) NLOG(niceName, "Send Reset Sync"); 
	sender.sendToIPAddress(remoteHost->stringValue(), remotePort->intValue(), m);
}

void OSCOutput::sendPatternDataInternal(int groupID, bool publicGroup, Pattern* p)
{
	OSCMessage m("/pattern");

	m.addInt32(groupID);
	m.addInt32(publicGroup ? 1 : 0);
	m.addInt32(p->page);
	m.addInt32(p->mode);

	m.addInt32(p->getActiveFlags());

	m.addInt32(p->hueOffset->floatValue() * 255);
	m.addInt32(p->saturation->floatValue() * 255);
	m.addInt32(p->brightness->floatValue() * 255);

	m.addInt32(p->speed->floatValue() * 255);
	m.addInt32(p->density->floatValue() * 255);

	m.addInt32(p->lfo1->floatValue() * 255);
	m.addInt32(p->lfo2->floatValue() * 255);
	m.addInt32(p->lfo3->floatValue() * 255);
	m.addInt32(p->lfo4->floatValue() * 255);

	sender.sendToIPAddress(remoteHost->stringValue(), remotePort->intValue(), m);

	if (logOutgoing->boolValue())
	{
		String s = "Send " + m.getAddressPattern().toString() + " :";
		for (int i = 0; i < m.size(); i++)
		{
			s += "\n > " + String(i) + " : " + OSCHelpers::getStringArg(m[i]);
		}
		NLOG(niceName, s);
	}
}
