/*
  ==============================================================================

    OutputManagerUI.h
    Created: 19 Apr 2019 8:54:51pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "../OutputManager.h"

class OutputManagerUI :
	public BaseManagerShapeShifterUI<OutputManager, Output, BaseItemUI<Output>>
{
public:
	OutputManagerUI(const String &name);
	~OutputManagerUI();

	static OutputManagerUI * create(const String &name) { return new OutputManagerUI(name); }
};