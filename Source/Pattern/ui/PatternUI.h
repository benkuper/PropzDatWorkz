/*
  ==============================================================================

    PatternUI.h
    Created: 19 Apr 2019 12:31:06pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once
#include "../Pattern.h"

class PatternUI :
	public Component,
	public DragAndDropContainer
{
public:
	PatternUI(Pattern * pattern);
	~PatternUI();

	static const Identifier dragAndDropId;

	Pattern * pattern;

	Image img;

	void paint(Graphics &g) override;

	void mouseDrag(const MouseEvent &e) override;
};