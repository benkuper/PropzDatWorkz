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
	Output();
	~Output();

	OSCSender sender;
	StringParameter * remoteHost;
	IntParameter * remotePort;

	void sendPatternData(int groupID, Pattern * p);
};