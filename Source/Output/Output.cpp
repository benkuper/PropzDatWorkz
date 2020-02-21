/*
  ==============================================================================

	Output.cpp
	Created: 19 Apr 2019 8:26:15pm
	Author:  bkupe

  ==============================================================================
*/

#include "Output.h"
#include "Pattern/Pattern.h"

Output::Output(const String &name) :
	BaseItem(name)
{
	logIncoming = addBoolParameter("Log Incoming", "If checked, it will show the data sent from the bridge", false);
	logOutgoing = addBoolParameter("Log Outgoing", "If checked, it will output the data sent to the bridge", false);
	syncTrigger = addTrigger("Sync", "Synchronize private groups");
	stopSyncTrigger = addTrigger("Stop Sync", "Stop Synchronizing private groups");
	resetSyncTrigger = addTrigger("Reset Sync", "Reset private groups");
}

Output::~Output()
{
}

void Output::onContainerTriggerTriggered(Trigger* t)
{
	if (t == syncTrigger) sendSync();
	if (t == stopSyncTrigger) sendStopSync();
	if (t == resetSyncTrigger) sendResetSync();
}

void Output::sendPatternData(int groupID, bool publicGroup, Pattern * p)
{
	if (!enabled->boolValue()) return;

	if (p == nullptr)
	{
		LOGWARNING("Pattern null !");
		return;
	}
	sendPatternDataInternal(groupID, publicGroup, p);
}
