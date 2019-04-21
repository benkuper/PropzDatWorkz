/*
  ==============================================================================

    PatternLayerTimeline.h
    Created: 19 Apr 2019 1:05:36pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "PatternClipManagerUI.h"

class PatternLayer;

class PatternLayerTimeline :
	public SequenceLayerTimeline
{
public:
	PatternLayerTimeline(PatternLayer * layer);
	~PatternLayerTimeline();

	PatternLayer * blockLayer;
	PatternClipManagerUI managerUI;

	void resized() override;
	void updateContent() override;

};