/*
  ==============================================================================

    PDWEngine.h
    Created: 19 Apr 2019 12:24:06pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class PDWEngine :
	public Engine,
	public OSCRemoteControl::RemoteControlListener
{
public:
	PDWEngine();
	~PDWEngine();	

	Factory<Sequence> sequenceFactory;

	void clearInternal() override;

	void processMessage(const OSCMessage &m) override;

	var getJSONData() override;
	void loadJSONDataInternalEngine(var data, ProgressTask * loadingTask) override;

};