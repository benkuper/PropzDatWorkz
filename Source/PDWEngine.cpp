/*
  ==============================================================================

    PDWEngine.cpp
    Created: 19 Apr 2019 12:24:06pm
    Author:  bkupe

  ==============================================================================
*/

#include "PDWEngine.h"
#include "Pattern/PatternLibrary.h"
#include "Timeline/layers/PatternLayer/PatternLayer.h"
#include "Output/OutputManager.h"
#include "Audio/AudioManager.h"
#include "Timeline/PatternSequence.h"
#include "Serial/SerialManager.h"

PDWEngine::PDWEngine() :
	Engine("PropzDatWorkz", ".pdw")
{
	Engine::mainEngine = this;

	addChildControllableContainer(PatternLibrary::getInstance());
	addChildControllableContainer(SequenceManager::getInstance());
	addChildControllableContainer(OutputManager::getInstance());

	ProjectSettings::getInstance()->addChildControllableContainer(AudioManager::getInstance());

	sequenceFactory.defs.add(Factory<Sequence>::Definition::createDef("", "Patterns", &PatternSequence::create));
	SequenceManager::getInstance()->managerFactory = &sequenceFactory;


	//Communication
	OSCRemoteControl::getInstance()->addRemoteControlListener(this);
	//BentoWebServer::getInstance(); //init

}

PDWEngine::~PDWEngine()
{
	PatternLibrary::deleteInstance();
	SequenceManager::deleteInstance();
	OutputManager::deleteInstance();
	AudioManager::deleteInstance();
	SerialManager::deleteInstance();

	//BentoWebServer::deleteInstance();
}

void PDWEngine::clearInternal()
{
	SequenceManager::getInstance()->clear();
	OutputManager::getInstance()->clear();
}


void PDWEngine::processMessage(const OSCMessage & m)
{
	/*
	StringArray aList;
	aList.addTokens(m.getAddressPattern().toString(), "/", "\"");

	if (aList.size() < 2) return;

	if (aList[1] == "model")
	{
		String modelName = OSCHelpers::getStringArg(m[0]);
		LightBlockModel * lm = LightBlockModelLibrary::getInstance()->getModelWithName(modelName);

		if (lm != nullptr)
		{
			if (aList[2] == "assign")
			{
				if (m.size() >= 2)
				{
					int id = OSCHelpers::getIntArg(m[1]);

					LightBlockModelPreset * mp = nullptr;
					if (m.size() >= 3)
					{
						String presetName = OSCHelpers::getStringArg(m[2]);
						mp = lm->presetManager.getItemWithName(presetName);
					}

					LightBlockColorProvider * providerToAssign = mp != nullptr ? mp : (LightBlockColorProvider *)lm;
					if (id == -1)
					{
						for (auto & p : PropManager::getInstance()->items)  p->activeProvider->setValueFromTarget(providerToAssign);
					}
					else
					{
						Prop * p = PropManager::getInstance()->getPropWithId(id);
						if (p != nullptr) p->activeProvider->setValueFromTarget(providerToAssign);
					}

				}


			}
		}

	}
	else if (aList[1] == "prop")
	{
		int id = OSCHelpers::getIntArg(m[0]);
		//Prop * p = PropManager::getInstance()->getPropWithId(id);

		if (aList[2] == "enable")
		{
			bool active = OSCHelpers::getIntArg(m[1]) > 0;

			if (id == -1)
			{
				for (auto & p : PropManager::getInstance()->items)  p->enabled->setValue(active);
			}
			else
			{
				Prop * p = PropManager::getInstance()->getPropWithId(id);
				if (p != nullptr) p->enabled->setValue(active);
			}

		}
	}
	*/
}


var PDWEngine::getJSONData()
{
	var data = Engine::getJSONData();

	var sequenceData = SequenceManager::getInstance()->getJSONData();
	if (!sequenceData.isVoid() && sequenceData.getDynamicObject()->getProperties().size() > 0) data.getDynamicObject()->setProperty("sequences", sequenceData);
	var outputData = OutputManager::getInstance()->getJSONData();
	if (!outputData.isVoid() && outputData.getDynamicObject()->getProperties().size() > 0) data.getDynamicObject()->setProperty("outputs", outputData);

	return data;
}

void PDWEngine::loadJSONDataInternalEngine(var data, ProgressTask * loadingTask)
{
	//ProgressTask * projectTask = loadingTask->addTask("Project"
	ProgressTask * sequenceTask = loadingTask->addTask("Sequences");
	ProgressTask * outputsTask = loadingTask->addTask("Outputs");


	sequenceTask->start();
	SequenceManager::getInstance()->loadJSONData(data.getProperty("sequences", var()));
	sequenceTask->setProgress(1);
	sequenceTask->end();

	outputsTask->start();
	OutputManager::getInstance()->loadJSONData(data.getProperty("outputs", var()));
	outputsTask->setProgress(1);
	outputsTask->end();
}
