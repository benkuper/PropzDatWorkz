/*
  ==============================================================================

    PatternUI.cpp
    Created: 19 Apr 2019 12:31:06pm
    Author:  bkupe

  ==============================================================================
*/

#include "PatternUI.h"

const Identifier PatternUI::dragAndDropId = "Pattern";

PatternUI::PatternUI(Pattern * pattern) :
	pattern(pattern)
{
	String s = pattern->niceName.toLowerCase().replace(" ", "_") + "_png";
	int dataSize = 0;
	
	img = ImageCache::getFromMemory(BinaryData::getNamedResource(s.getCharPointer(), dataSize), dataSize);

	setRepaintsOnMouseActivity(true);

	setSize(40, 40);
}

PatternUI::~PatternUI()
{
}

void PatternUI::paint(Graphics & g)
{
	g.setColour(BG_COLOR.brighter(.1f));
	g.fillRoundedRectangle(getLocalBounds().toFloat(), 2);

	g.drawImage(img, getLocalBounds().toFloat(), RectanglePlacement::centred);

	if (isMouseOver())
	{
		g.setColour(BG_COLOR.darker().withAlpha(.2f));
		g.fillRoundedRectangle(getLocalBounds().toFloat(), 2);
		g.setColour(TEXT_COLOR);
		g.drawFittedText(pattern->niceName, getLocalBounds(), Justification::centred, 2);
	}
	
}

void PatternUI::mouseDrag(const MouseEvent & e)
{
	if (!isDragAndDropActive() && e.getDistanceFromDragStart() > 20)
	{
		var desc(new DynamicObject());
		desc.getDynamicObject()->setProperty("type", dragAndDropId.toString());
		startDragging(desc, this, Image(), true);
	}
}