/*
  ==============================================================================

    OutputManager.cpp
    Created: 19 Apr 2019 8:26:00pm
    Author:  bkupe

  ==============================================================================
*/

#include "OutputManager.h"
 
juce_ImplementSingleton(OutputManager)

OutputManager::OutputManager() :
	BaseManager("Outputs")
  {
  }

OutputManager::~OutputManager()
{
}

void OutputManager::sendPatternData(int groupID, Pattern * p)
{
	for (auto &o : items) o->sendPatternData(groupID, p);
}
