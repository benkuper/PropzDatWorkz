/*
  ==============================================================================

    PatternClip.h
    Created: 19 Apr 2019 12:32:46pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "Pattern/Pattern.h"

class PatternLayer;

class PatternClip :
	public LayerBlock,
	public Timer
{
public:
	PatternClip(PatternLayer * layer = nullptr, float time = 0);
	~PatternClip();

	PatternLayer * layer;
	std::unique_ptr<Pattern> currentPattern;
	bool parametersChanged;

	TargetParameter * sourcePattern;

	void setPatternFromSource(Pattern * source);

	void sendPatternData();

	void setCoreLength(float value, bool stretch = false, bool stickToCoreEnd = false) override;

	void onContainerParameterChangedInternal(Parameter * p) override;
	void onControllableFeedbackUpdateInternal(ControllableContainer * cc, Controllable * c) override;

	var getJSONData() override;
	void loadJSONDataInternal(var data) override;

	void timerCallback() override;

	String getTypeString() const override { return "PatternClip"; }
};