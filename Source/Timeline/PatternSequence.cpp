/*
  ==============================================================================

	PatternSequence.cpp
	Created: 19 Apr 2019 12:32:01pm
	Author:  bkupe

  ==============================================================================
*/

#include "PatternSequence.h"
#include "Audio/AudioManager.h"

PatternSequence::PatternSequence(var params)
{
	setAudioDeviceManager(&AudioManager::getInstance()->am);
	DBG("Here" << AudioManager::getInstance()->niceName);
	layerManager->addBaseManagerListener(this);
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
