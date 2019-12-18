/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a JUCE application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "MainComponent.h"
#include "PDWEngine.h"

//==============================================================================
class PropzDatWorkzApplication :
	public OrganicApplication
{
public:
	//==============================================================================
	PropzDatWorkzApplication() : OrganicApplication("BenTo") {}

	//==============================================================================
	void initialiseInternal(const String& commandLine) override
	{
		AppUpdater::getInstance()->setURLs(URL("http://benjamin.kuperberg.fr/pdw/update.json"), "http://benjamin.kuperberg.fr/pdw/download/", "Bento");
		engine.reset(new PDWEngine());
		mainComponent.reset(new MainComponent());
	}
};

//==============================================================================
// This macro generates the main() routine that launches the app.
START_JUCE_APPLICATION(PropzDatWorkzApplication)
