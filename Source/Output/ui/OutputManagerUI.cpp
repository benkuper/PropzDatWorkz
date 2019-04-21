/*
  ==============================================================================

    OutputManagerUI.cpp
    Created: 19 Apr 2019 8:54:51pm
    Author:  bkupe

  ==============================================================================
*/

#include "OutputManagerUI.h"

OutputManagerUI::OutputManagerUI(const String & name) :
	BaseManagerShapeShifterUI(name, OutputManager::getInstance())
{
}

OutputManagerUI::~OutputManagerUI()
{
}
