/*
  ==============================================================================

    PatternClipUI.h
    Created: 19 Apr 2019 12:32:59pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "../PatternClip.h"

class PatternClipUI :
	public LayerBlockUI
{
public:
	PatternClipUI(PatternClip * clip);
	~PatternClipUI();

	bool isDraggingModel;

	PatternClip * clip;
	Image img;

	void paint(Graphics &g) override;
	void paintOverChildren(Graphics &g) override;

	Rectangle<int> getDragBounds() override;

	void controllableFeedbackUpdateInternal(Controllable *) override;

	bool isInterestedInDragSource(const SourceDetails &source) override;
	void itemDragEnter(const SourceDetails &source) override;
	void itemDragExit(const SourceDetails &source) override;
	void itemDragMove(const SourceDetails &source) override;
	void itemDropped(const SourceDetails &source) override;
};
