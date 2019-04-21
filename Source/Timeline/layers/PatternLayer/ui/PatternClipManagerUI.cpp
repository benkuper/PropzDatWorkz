/*
  ==============================================================================

    PatternClipManagerUI.cpp
    Created: 19 Apr 2019 1:05:21pm
    Author:  bkupe

  ==============================================================================
*/

#include "PatternClipManagerUI.h"
#include "../PatternClipManager.h"
#include "PatternLayerTimeline.h"
#include "PatternClipUI.h"
#include "Pattern/ui/PatternUI.h"

PatternClipManagerUI::PatternClipManagerUI(PatternLayerTimeline * _timeline, PatternClipManager * manager) :
	LayerBlockManagerUI(_timeline, manager),
	clipManager(manager),
	timeline(_timeline),
	dropClipX(-1)
{
	addExistingItems();
}

PatternClipManagerUI::~PatternClipManagerUI()
{
}

void PatternClipManagerUI::paint(Graphics & g)
{
	LayerBlockManagerUI::paint(g);
	if (dropClipX >= 0)
	{
		g.fillAll(BLUE_COLOR.withAlpha(.3f));
		g.setColour(HIGHLIGHT_COLOR);
		g.drawLine(dropClipX, 0, dropClipX, getHeight(), 4);
	}
}

LayerBlockUI * PatternClipManagerUI::createUIForItem(LayerBlock * item)
{
	return new PatternClipUI((PatternClip *)item);
}

bool PatternClipManagerUI::isInterestedInDragSource(const SourceDetails & source)
{
	return source.description.getProperty("type", "") == PatternUI::dragAndDropId.toString();
}

void PatternClipManagerUI::itemDragEnter(const SourceDetails & source)
{
	dropClipX = source.localPosition.x;
	repaint();
}

void PatternClipManagerUI::itemDragExit(const SourceDetails & source)
{
	dropClipX = -1;
	repaint();
}

void PatternClipManagerUI::itemDragMove(const SourceDetails & source)
{
	dropClipX = source.localPosition.x;
	repaint();
}

void PatternClipManagerUI::itemDropped(const SourceDetails & source)
{
	dropClipX = -1;

	PatternUI * patternUI = dynamic_cast<PatternUI *>(source.sourceComponent.get());
	PatternClip * clip = (PatternClip *)manager->addBlockAt(timeline->getTimeForX(source.localPosition.x));
	if (patternUI == nullptr || clip == nullptr) return;

	/*
	bool shift = KeyPress::isKeyCurrentlyDown(16);
	if (shift)
	{
		PopupMenu m;
		m.addItem(-1, "Default");
		m.addSeparator();
		int index = 1;
		for (auto &p : patternUI->item->presetManager.items) m.addItem(index++, p->niceName);
		int result = m.show();
		if (result >= 1) provider = patternUI->item->presetManager.items[result - 1];
	}
	*/

	clip->sourcePattern->setValueFromTarget(patternUI->pattern);
	
}
