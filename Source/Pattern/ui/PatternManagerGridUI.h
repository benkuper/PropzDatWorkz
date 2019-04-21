/*
  ==============================================================================

    PatternManagerGridUI.h
    Created: 19 Apr 2019 12:31:16pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "../PatternLibrary.h"
#include "PatternUI.h"

class PatternManagerGridUI :
	public ShapeShifterContentComponent
{
public:
	PatternManagerGridUI(StringRef name);
	~PatternManagerGridUI();

	Viewport viewport;
	Component container;
	
	const int gap = 2;
	const int headerHeight = 16;
	const int headerGap = 4;

	ScopedPointer<IntSliderUI> iconSizeUI; 
	OwnedArray<PatternUI> patternUIs;

	void resized() override;

	static PatternManagerGridUI * create(const String &name) { return new PatternManagerGridUI(name); }
};