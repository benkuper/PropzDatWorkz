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
	logOutput = addBoolParameter("Log Output", "If checked, it will output the data sent to the bridge", false);
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
	sendPatternDataInternal(groupID, p);
}
