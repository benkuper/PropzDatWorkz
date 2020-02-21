/*
  ==============================================================================

    OSCOutput.h
    Created: 18 Dec 2019 4:25:26pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "../Output.h"

class OSCOutput :
	public Output
{
public:
	OSCOutput();
	~OSCOutput();

	OSCSender sender;
	StringParameter* remoteHost;
	IntParameter* remotePort;

	void sendSync() override;
	void sendStopSync() override;
	void sendResetSync() override;

	void sendPatternDataInternal(int groupID, bool publicGroup, Pattern* p) override;

	String getTypeString() const override { return "OSC"; }
	static OSCOutput* create(var params) { return new OSCOutput(); }
};