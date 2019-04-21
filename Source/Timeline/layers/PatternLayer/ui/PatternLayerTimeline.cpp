/*
  ==============================================================================

    PatternLayerTimeline.cpp
    Created: 19 Apr 2019 1:05:36pm
    Author:  bkupe

  ==============================================================================
*/

#include "PatternLayerTimeline.h"
#include "../PatternLayer.h"

PatternLayerTimeline::PatternLayerTimeline(PatternLayer * layer) :
	SequenceLayerTimeline(layer),
	managerUI(this, &layer->patternClipManager)
{
	addAndMakeVisible(managerUI);
}

PatternLayerTimeline::~PatternLayerTimeline()
{
}

void PatternLayerTimeline::resized()
{
	managerUI.setBounds(getLocalBounds());
}

void PatternLayerTimeline::updateContent()
{
	managerUI.updateContent();
}
