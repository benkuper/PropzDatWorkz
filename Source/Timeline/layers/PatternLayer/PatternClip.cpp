/*
  ==============================================================================

    PatternClip.cpp
    Created: 19 Apr 2019 12:32:46pm
    Author:  bkupe

  ==============================================================================
*/

#include "PatternClip.h"
#include "Pattern/PatternLibrary.h"
#include "Output/OutputManager.h"
#include "PatternLayer.h"
#include "Pattern/Pattern.h"

PatternClip::PatternClip(PatternLayer * layer, float _time) :
	LayerBlock("PatternClip", _time),
	layer(layer)
{
	itemDataType = "PatternClip";

	sourcePattern = addTargetParameter("Active Block", "The current active block for this prop");
	sourcePattern->targetType = TargetParameter::CONTAINER;
	sourcePattern->customGetTargetContainerFunc = &PatternLibrary::showPatternsAndGet;
}

PatternClip::~PatternClip()
{
	//setBlockFromProvider(nullptr);
}

void PatternClip::setPatternFromSource(Pattern * source)
{
	if (currentPattern == nullptr && source == nullptr) return;

	//if (source != nullptr && currentPattern != nullptr && currentPattern->provider == provider) return;

	if (currentPattern != nullptr)
	{
		removeChildControllableContainer(currentPattern.get());
		//currentPattern->removeLightBlockListener(this);
		currentPattern = nullptr;
	}

	if (source != nullptr)
	{
		//if (provider != nullptr) currentPattern = new LightBlock(provider);
		currentPattern.reset(new Pattern(source->niceName, source->page, source->mode));

		if (currentPattern != nullptr)
		{
			addChildControllableContainer(currentPattern.get());
			//currentPattern->addLightBlockListener(this);
		}
	}
	
}

void PatternClip::sendPatternData()
{
	OutputManager::getInstance()->sendPatternData(layer->groupID->intValue(),  layer->groupIsPublic->boolValue(), currentPattern.get());
	parametersChanged = false;
}

void PatternClip::setCoreLength(float value, bool stretch, bool stickToCoreEnd)
{
	LayerBlock::setCoreLength(value, stretch, stickToCoreEnd);

	/*
	if (currentPattern != nullptr)
	{
		Array<WeakReference<Parameter>> params = currentPattern->paramsContainer.getAllParameters();
		for (auto & pa : params)
		{
			if (pa->controlMode == Parameter::AUTOMATION) pa->automation->automation.setLength(coreLength->floatValue(), stretch, stickToCoreEnd);
		}
	}
	*/
}

void PatternClip::onContainerParameterChangedInternal(Parameter * p)
{
	LayerBlock::onContainerParameterChangedInternal(p);
	if (!layer->enabled->boolValue()) return;
	if (p == isActive)
	{
		if (isActive->boolValue())
		{
			if (currentPattern != nullptr)
			{
				sendPatternData();
				startTimerHz(20);
			}
		}
		else
		{
			stopTimer();
		}
		
	}else if (p == sourcePattern)
	{
		setPatternFromSource(dynamic_cast<Pattern *>(sourcePattern->targetContainer.get()));
		parametersChanged = true;
	}
}

void PatternClip::onControllableFeedbackUpdateInternal(ControllableContainer * cc, Controllable * c)
{
	LayerBlock::onControllableFeedbackUpdateInternal(cc, c);
	Pattern * p = c->getParentAs<Pattern>();
	if (p != nullptr && isActive->boolValue())
	{
		parametersChanged = true;
	}
}

var PatternClip::getJSONData()
{
	var data = LayerBlock::getJSONData();
	if (currentPattern != nullptr) data.getDynamicObject()->setProperty("patternData", currentPattern->getJSONData());
	return data;
}

void PatternClip::loadJSONDataInternal(var data)
{
	LayerBlock::loadJSONDataInternal(data);
	if (currentPattern != nullptr)
	{
		currentPattern->loadJSONData(data.getProperty("patternData", var()));
		/*
		Array<WeakReference<Parameter>> params = currentPattern->paramsContainer.getAllParameters();

		for (auto & pa : params)
		{
			if (pa->controlMode == Parameter::AUTOMATION)
			{
				pa->automation->automation.allowKeysOutside = true;
			}
		}
		*/
	}

}

void PatternClip::timerCallback()
{
	if (parametersChanged)
	{
		sendPatternData();
	}
}
