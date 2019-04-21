/*
  ==============================================================================

    PatternLayerPanel.h
    Created: 20 Apr 2019 10:57:27am
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class PatternLayer;

class PatternLayerPanel :
	public SequenceLayerPanel
{
public:
	PatternLayerPanel(PatternLayer * patternLayer);
	~PatternLayerPanel();

	PatternLayer * patternLayer;

	ScopedPointer<IntStepperUI> groupUI;

	void resizedInternalContent(Rectangle<int> &r) override;

};