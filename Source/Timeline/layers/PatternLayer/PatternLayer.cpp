/*
  ==============================================================================

    PatternLayer.cpp
    Created: 19 Apr 2019 12:32:40pm
    Author:  bkupe

  ==============================================================================
*/

#include "PatternLayer.h"
#include "ui/PatternLayerTimeline.h"
#include "ui/PatternLayerPanel.h"
#include "Output/OutputManager.h"

PatternLayer::PatternLayer(Sequence * s, var) :
	SequenceLayer(s, "Pattern Layer"),
	patternClipManager(this),
	currentClip(nullptr)
{
	groupID = addIntParameter("Group ID", "The ID of the group to target", 1, 1, 60000); 

	Colour col = Colours::white;

	if (groupID->intValue() >= 1 || groupID->intValue() <= 5)
	{
		const Colour colors[5]{ Colours::orange, Colours::green, Colours::aqua, Colours::blue, Colours::purple };
		col = colors[groupID->intValue() - 1];
	}
	color->setColor(col);
	
	addChildControllableContainer(&patternClipManager);
}

PatternLayer::~PatternLayer()
{
}


void PatternLayer::sequenceCurrentTimeChanged(Sequence * s, float prevTime, bool evaluateSkippedData)
{
	SequenceLayer::sequenceCurrentTimeChanged(s, prevTime, evaluateSkippedData);

	LayerBlock * b = patternClipManager.getBlockAtTime(s->currentTime->floatValue());

	if (b != currentClip)
	{
		if (!currentClipRef.wasObjectDeleted() && currentClip != nullptr)
		{
			currentClip->isActive->setValue(false);
		}

		currentClip = dynamic_cast<PatternClip *>(b);
		
		if (currentClip != nullptr)
		{
			currentClipRef = currentClip;
			currentClip->isActive->setValue(true);
		}
		else
		{
			std::unique_ptr<Pattern> emptyPattern(Pattern::getEmptyPattern());
			OutputManager::getInstance()->sendPatternData(groupID->intValue(), emptyPattern.get());
		}
	}
}

void PatternLayer::onContainerParameterChangedInternal(Parameter * p)
{
	SequenceLayer::onContainerParameterChangedInternal(p);

	if (p == groupID)
	{
		Colour col = Colours::white;
		
		if (groupID->intValue() >= 1 || groupID->intValue() <= 5)
		{
			const Colour colors[5]{ Colours::orange, Colours::green, Colours::aqua, Colours::blue, Colours::purple };
			col = colors[(groupID->intValue() - 1)%5];
		}
		color->setColor(col);
	}
}

var PatternLayer::getJSONData()
{
	var data = SequenceLayer::getJSONData();
	data.getDynamicObject()->setProperty("clips", patternClipManager.getJSONData());
	return data;
}

void PatternLayer::loadJSONDataInternal(var data)
{
	SequenceLayer::loadJSONDataInternal(data);
	patternClipManager.loadJSONData(data.getProperty("clips", var()));
}

SequenceLayerTimeline * PatternLayer::getTimelineUI()
{
	return new PatternLayerTimeline(this);
}

SequenceLayerPanel * PatternLayer::getPanel()
{
	return new PatternLayerPanel(this);
}