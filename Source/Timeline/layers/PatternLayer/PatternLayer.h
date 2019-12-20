/*
  ==============================================================================

    PatternLayer.h
    Created: 19 Apr 2019 12:32:40pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once
#include "PatternClipManager.h"

class PatternLayer :
	public SequenceLayer
{
public:
	PatternLayer(Sequence * s, var);
	~PatternLayer();

	PatternClip * currentClip;
	WeakReference<Inspectable> currentClipRef;
	IntParameter * groupID;
	BoolParameter* groupIsPublic;
	
	PatternClipManager patternClipManager;

	void sequenceCurrentTimeChanged(Sequence * s, float prevTime, bool evaluateSkippedData) override;

	void onContainerParameterChangedInternal(Parameter * p) override;

	var getJSONData() override;
	void loadJSONDataInternal(var data) override;

	virtual SequenceLayerTimeline * getTimelineUI() override;
	virtual SequenceLayerPanel * getPanel() override;

	static PatternLayer * create(Sequence * sequence, var params) { return new PatternLayer(sequence, params); }
	virtual String getTypeString() const override { return "Patterns"; }

};