/*
  ==============================================================================

    Output.h
    Created: 19 Apr 2019 8:26:15pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class Pattern;

class Output :
	public BaseItem
{
public:
	Output(const String &name = "Output");
	virtual ~Output();

	BoolParameter* logIncoming;
	BoolParameter* logOutgoing;
	Trigger* syncTrigger;
	Trigger* stopSyncTrigger;
	Trigger* resetSyncTrigger;


	virtual void onContainerTriggerTriggered(Trigger* t) override;

	virtual void sendSync() {}
	virtual void sendStopSync() {}
	virtual void sendResetSync() {}
	virtual void sendPatternData(int groupID, bool publicGroup, Pattern* p);
	virtual void sendPatternDataInternal(int groupID, bool publicGroup, Pattern* p) {}
};