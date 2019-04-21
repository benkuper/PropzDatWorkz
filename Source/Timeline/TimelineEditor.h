/*
  ==============================================================================

    TimelineEditor.h
    Created: 19 Apr 2019 12:56:27pm
    Author:  bkupe

  ==============================================================================
*/
#pragma once

#include "JuceHeader.h"

class TimelineEditor :
	public TimeMachineView,
	public EngineListener
{
public:
	TimelineEditor(const String &contentName = TimelineEditor::getTypeStringStatic());
	~TimelineEditor();

	void endLoadFile() override;
	
	static const String getTypeStringStatic()  { return "Timeline Editor"; }
	static TimelineEditor * create(const String &contentName) { return new TimelineEditor(contentName); }
};