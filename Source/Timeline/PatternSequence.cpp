/*
  ==============================================================================

	PatternSequence.cpp
	Created: 19 Apr 2019 12:32:01pm
	Author:  bkupe

  ==============================================================================
*/

#include "PatternSequence.h"
#include "Audio/AudioManager.h"
#include "Timeline/layers/PatternLayer/PatternLayer.h"

PatternSequence::PatternSequence(var params)
{
	setAudioDeviceManager(&AudioManager::getInstance()->am);
	DBG("Here" << AudioManager::getInstance()->niceName);
	layerManager->addBaseManagerListener(this);

	layerFactory.defs.add(SequenceLayerManager::LayerDefinition::createDef("", "Patterns", PatternLayer::create, this));
	layerFactory.defs.add(SequenceLayerManager::LayerDefinition::createDef("", "Audio", AudioLayer::create, this));
	layerManager->managerFactory = &layerFactory;
}

PatternSequence::~PatternSequence()
{
}

void PatternSequence::itemAdded(SequenceLayer * s)
{
	AudioLayer * al = dynamic_cast<AudioLayer *>(s);
	if (al != nullptr)
	{
		al->setAudioProcessorGraph(&AudioManager::getInstance()->graph, AUDIO_OUTPUT_GRAPH_ID);
	}

}
