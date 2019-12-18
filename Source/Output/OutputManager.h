/*
  ==============================================================================

    OutputManager.h
    Created: 19 Apr 2019 8:26:00pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "Output.h"

class Pattern;

class OutputManager :
	public BaseManager<Output>
{
public:

	juce_DeclareSingleton(OutputManager, true)
	OutputManager();
	~OutputManager();

	Factory<Output> factory;

	void sendPatternData(int groupID, Pattern * p);
};