/*
  ==============================================================================

    PatternSequence.h
    Created: 19 Apr 2019 12:32:01pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class PatternSequence :
	public Sequence,
	public SequenceLayerManager::ManagerListener
{
public:
	PatternSequence(var params = var());
	~PatternSequence();

	Factory<SequenceLayer> layerFactory;

	void itemAdded(SequenceLayer * s) override;
	
	String getTypeString() const override { return "Patterns"; }
	static PatternSequence * create(var params) { return new PatternSequence(params); }
};
