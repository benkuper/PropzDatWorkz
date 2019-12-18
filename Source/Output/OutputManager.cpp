/*
  ==============================================================================

    OutputManager.cpp
    Created: 19 Apr 2019 8:26:00pm
    Author:  bkupe

  ==============================================================================
*/

#include "OutputManager.h"
#include "OSC/OSCOutput.h"
#include "Serial/SerialOutput.h"
 
juce_ImplementSingleton(OutputManager)



OutputManager::OutputManager() :
	BaseManager("Outputs")
{
	factory.defs.add(FactorySimpleParametricDefinition<Output>::createDef("", "OSC", &OSCOutput::create));
	factory.defs.add(FactorySimpleParametricDefinition<Output>::createDef("", "Serial", &SerialOutput::create));

	managerFactory = &factory;
}

OutputManager::~OutputManager()
{
}

void OutputManager::sendPatternData(int groupID, Pattern * p)
{
	for (auto &o : items) o->sendPatternData(groupID, p);
}
