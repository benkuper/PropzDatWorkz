/*
  ==============================================================================

	PatternManagerGridUI.cpp
	Created: 19 Apr 2019 12:31:16pm
	Author:  bkupe

  ==============================================================================
*/

#include "PatternManagerGridUI.h"
#include "../PatternLibrary.h"

PatternManagerGridUI::PatternManagerGridUI(StringRef name) :
	ShapeShifterContentComponent(name)
{
	iconSizeUI = PatternLibrary::getInstance()->thumbSize->createSlider();
	addAndMakeVisible(iconSizeUI); 
	
	viewport.setViewedComponent(&container, false);
	viewport.setScrollBarsShown(true, false);
	viewport.setScrollOnDragEnabled(false);
	viewport.setScrollBarThickness(10);
	addAndMakeVisible(viewport);

	for (auto & p : PatternLibrary::getInstance()->patterns)
	{
		PatternUI * pui = new PatternUI(p);
		patternUIs.add(pui);
		container.addAndMakeVisible(pui);
	}
}

PatternManagerGridUI::~PatternManagerGridUI()
{
}

void PatternManagerGridUI::resized()
{
	Rectangle<int> gr = getLocalBounds();
	Rectangle<int> hr = gr.removeFromTop(headerHeight);

	iconSizeUI->setBounds(hr.removeFromRight(100).reduced(2));

	gr.removeFromTop(headerGap);
	viewport.setBounds(gr);

	Rectangle<int> r = gr.withPosition(0, 0).reduced(2);
	if (r.getWidth() == 0) return;

	int thumbSize = PatternLibrary::getInstance()->thumbSize->intValue();

	int numThumbs = patternUIs.size();
	int numThumbPerLine = jmin(r.getWidth() / (thumbSize + gap), numThumbs);
	int numLines = ceil(numThumbs * 1.f / numThumbPerLine);

	r.setHeight(numLines * (thumbSize + gap) - gap);
	container.setSize(r.getWidth(), r.getHeight());

	int index = 0;
	int yIndex = 0;

	Rectangle<int> lr;

	for (auto &mui : patternUIs)
	{
		if (index % numThumbPerLine == 0)
		{

			int numThumbsInThisLine = jmin(numThumbs - index, numThumbPerLine);
			int lineWidth = numThumbsInThisLine * (thumbSize + gap) - gap;

			if (yIndex > 0) r.removeFromTop(gap);
			lr = r.removeFromTop(thumbSize);
			lr = lr.withSizeKeepingCentre(lineWidth, lr.getHeight());

			yIndex++;
		}

		mui->setBounds(lr.removeFromLeft(thumbSize));
		lr.removeFromLeft(gap);
		index++;
	}

	
}
