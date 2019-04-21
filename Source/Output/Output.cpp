/*
  ==============================================================================

    Output.cpp
    Created: 19 Apr 2019 8:26:15pm
    Author:  bkupe

  ==============================================================================
*/

#include "Output.h"
#include "Pattern/Pattern.h"

Output::Output() :
	BaseItem("Output")
{
	sender.connect("0.0.0.0", 1024);

	remoteHost = addStringParameter("Remote Host", "IP address to send to", "127.0.0.1");
	remotePort = addIntParameter("Remote Port", "Port to send to", 8888);
}

Output::~Output()
{
}

void Output::sendPatternData(int groupID, Pattern * p)
{
	if (!enabled->boolValue()) return;

	if (p == nullptr)
	{
		LOGWARNING("Pattern null !");
		return;
	}

	LOG("Send output ");
	OSCMessage m("/pattern");
	
	m.addInt32(groupID);
	m.addInt32(p->page);
	m.addInt32(p->mode);
	
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
}
