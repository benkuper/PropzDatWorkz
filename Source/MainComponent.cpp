/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "Pattern/ui/PatternManagerGridUI.h"
#include "Output/ui/OutputManagerUI.h"

MainComponent::MainComponent()
{
}

MainComponent::~MainComponent()
{
}

void MainComponent::init()
{
	ShapeShifterFactory::getInstance()->defs.add(new ShapeShifterDefinition("Pattern Library", &PatternManagerGridUI::create));
	ShapeShifterFactory::getInstance()->defs.add(new ShapeShifterDefinition(SequenceManager::getInstance()->niceName, &SequenceManagerUI::create));
	ShapeShifterFactory::getInstance()->defs.add(new ShapeShifterDefinition("Sequence Editor", &TimeMachineView::create));
	ShapeShifterFactory::getInstance()->defs.add(new ShapeShifterDefinition("Outputs", &OutputManagerUI::create));

	ShapeShifterManager::getInstance()->setDefaultFileData(BinaryData::default_pdwlayout);
	ShapeShifterManager::getInstance()->setLayoutInformations("pdwlayout", "PDW/layouts");

	OrganicMainContentComponent::init();
}