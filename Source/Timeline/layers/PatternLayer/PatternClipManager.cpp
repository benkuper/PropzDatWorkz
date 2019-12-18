/*
  ==============================================================================

    PatternClipManager.cpp
    Created: 19 Apr 2019 1:05:54pm
    Author:  bkupe

  ==============================================================================
*/

#include "PatternClipManager.h"
#include "PatternLayer.h"

PatternClipManager::PatternClipManager(PatternLayer * layer) :
	LayerBlockManager(layer, "Patterns"),
	layer(layer)
{
	itemDataType = "PatternClip";
	blocksCanOverlap = false;
}


PatternClipManager::~PatternClipManager()
{
}

LayerBlock * PatternClipManager::createItem()
{
	return new PatternClip(layer);
}

void PatternClipManager::onControllableFeedbackUpdate(ControllableContainer * cc, Controllable * c)
{
	LayerBlockManager::onControllableFeedbackUpdate(cc, c);

	PatternClip * b = c->getParentAs<PatternClip>();
	if (b != nullptr)
	{
		if (c == b->time || c == b->coreLength || c == b->loopLength)
		{
			if (!blocksCanOverlap) return;
			//computeFadesForClip(b, true);
		}
	}
}