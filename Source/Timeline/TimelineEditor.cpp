/*
  ==============================================================================

    TimelineEditor.cpp
    Created: 19 Apr 2019 12:56:27pm
    Author:  bkupe

  ==============================================================================
*/

#include "TimelineEditor.h"

TimelineEditor::TimelineEditor(const String &contentName) :
	TimeMachineView(contentName)
{
	//Engine::mainEngine->addEngineListener(this);
	//Sequence * s = InspectableSelectionManager::mainSelectionManager->getInspectableAs<Sequence>();
	//if (s != nullptr) setSequence(s);
}

TimelineEditor::~TimelineEditor()
{
	if (Engine::mainEngine != nullptr) Engine::mainEngine->removeEngineListener(this);
}

void TimelineEditor::endLoadFile()
{
	/*
	for (auto &i : LightBlockModelLibrary::getInstance()->timelineBlocks.items)
	{
		if (i->isBeingEdited)
		{
			setSequence(&((TimelineBlock *)i)->sequence);
			break;
		}
	}
	*/
}
