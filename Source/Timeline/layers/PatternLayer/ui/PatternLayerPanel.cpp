/*
  ==============================================================================

    PatternLayerPanel.cpp
    Created: 20 Apr 2019 10:57:27am
    Author:  bkupe

  ==============================================================================
*/

#include "PatternLayerPanel.h"
#include "../PatternLayer.h"

PatternLayerPanel::PatternLayerPanel(PatternLayer * patternLayer) :
	SequenceLayerPanel(patternLayer),
	patternLayer(patternLayer)
{
	colorUI->setVisible(false);
	groupUI.reset(patternLayer->groupID->createStepper());
	addAndMakeVisible(groupUI.get());
}

PatternLayerPanel::~PatternLayerPanel()
{
}

void PatternLayerPanel::resizedInternalContent(Rectangle<int>& r)
{
	groupUI->setBounds(r.removeFromTop(20));
}
