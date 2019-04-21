/*
  ==============================================================================

    PatternClipManager.h
    Created: 19 Apr 2019 1:05:54pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "PatternClip.h"


class PatternLayer;

class PatternClipManager :
	public LayerBlockManager
{
public:
	PatternClipManager(PatternLayer * layer);
	~PatternClipManager();

	PatternLayer * layer;
	LayerBlock * createItem() override;

	void onControllableFeedbackUpdate(ControllableContainer * cc, Controllable *c) override;
};