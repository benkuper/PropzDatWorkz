/*
  ==============================================================================

    PatternClipManagerUI.h
    Created: 19 Apr 2019 1:05:21pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class PatternLayerTimeline;
class PatternClipManager;

class PatternClipManagerUI :
	public LayerBlockManagerUI
{
public:
	PatternClipManagerUI(PatternLayerTimeline * timeline, PatternClipManager * manager);
	~PatternClipManagerUI();

	PatternClipManager * clipManager;
	PatternLayerTimeline * timeline;

	int dropClipX;

	void paint(Graphics &g) override;

	LayerBlockUI * createUIForItem(LayerBlock * item) override;

	bool isInterestedInDragSource(const SourceDetails &source) override;
	void itemDragEnter(const SourceDetails &source) override;
	void itemDragExit(const SourceDetails &source) override;
	void itemDragMove(const SourceDetails &source) override;
	void itemDropped(const SourceDetails &source) override;
};
