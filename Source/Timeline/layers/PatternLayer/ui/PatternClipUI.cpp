/*
  ==============================================================================

    PatternClipUI.cpp
    Created: 19 Apr 2019 12:32:59pm
    Author:  bkupe

  ==============================================================================
*/

#include "PatternClipUI.h"
#include "Pattern/ui/PatternUI.h"

PatternClipUI::PatternClipUI(PatternClip * _clip) :
	LayerBlockUI(_clip),
	clip(_clip),
	isDraggingModel(false)
{
	bgColor = BG_COLOR.brighter().withAlpha(.5f);

	if (clip->currentPattern != nullptr)
	{
		String s = clip->currentPattern->niceName.toLowerCase().replace(" ", "_") + "_png";
		int dataSize = 0;

		img = ImageCache::getFromMemory(BinaryData::getNamedResource(s.getCharPointer(), dataSize), dataSize);
	}
}

PatternClipUI::~PatternClipUI()
{

}

void PatternClipUI::paint(Graphics & g)
{
	LayerBlockUI::paint(g);

	if (clip->currentPattern != nullptr)
	{
		g.setColour(Colours::black);
		g.fillRoundedRectangle(getLocalBounds().toFloat(), 2);

		g.setTiledImageFill(img, 0, 0, clip->currentPattern->brightness->floatValue());
		g.fillRoundedRectangle(getLocalBounds().toFloat(), 2);

		if (isMouseOver() || img.getWidth() == 0)
		{
			g.setColour(TEXT_COLOR);
			g.drawFittedText(clip->currentPattern->niceName, getLocalBounds(), Justification::centred, 2);
		}
	}
}

void PatternClipUI::paintOverChildren(Graphics & g)
{
	LayerBlockUI::paintOverChildren(g);
	if (isDraggingModel) g.fillAll(BLUE_COLOR.withAlpha(.3f));
}


Rectangle<int> PatternClipUI::getDragBounds()
{
	return LayerBlockUI::getLocalBounds();
}

void PatternClipUI::controllableFeedbackUpdateInternal(Controllable * c)
{
	LayerBlockUI::controllableFeedbackUpdateInternal(c);

	if (c == clip->sourcePattern)
	{
		if (clip->currentPattern != nullptr)
		{
			String s = clip->currentPattern->niceName.toLowerCase().replace(" ", "_") + "_png";
			int dataSize = 0;

			img = ImageCache::getFromMemory(BinaryData::getNamedResource(s.getCharPointer(), dataSize), dataSize);
		}
	}
}

bool PatternClipUI::isInterestedInDragSource(const SourceDetails & source)
{
	return source.description.getProperty("type", "") == PatternUI::dragAndDropId.toString();
}

void PatternClipUI::itemDragEnter(const SourceDetails & source)
{
	isDraggingModel = true;
	repaint();
}

void PatternClipUI::itemDragExit(const SourceDetails & source)
{
	isDraggingModel = false;
	repaint();
}

void PatternClipUI::itemDragMove(const SourceDetails & source)
{

}

void PatternClipUI::itemDropped(const SourceDetails & source)
{
	isDraggingModel = false;

	PatternUI * patternUI = dynamic_cast<PatternUI *>(source.sourceComponent.get());

	if (patternUI != nullptr)
	{
		
		/*
		bool shift = KeyPress::isKeyCurrentlyDown(16);
		if (shift)
		{
			PopupMenu m;
			m.addItem(-1, "Default");
			m.addSeparator();
			int index = 1;
			for (auto &p : patternUI->presetManager.items) m.addItem(index++, p->niceName);
			int result = m.show();
			if (result >= 1) provider = modelUI->item->presetManager.items[result - 1];
		}
		*/

		clip->sourcePattern->setValueFromTarget(patternUI->pattern, true);
	}

	repaint();
	
}