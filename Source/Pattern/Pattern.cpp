/*
  ==============================================================================

	Pattern.cpp
	Created: 19 Apr 2019 12:30:57pm
	Author:  bkupe

  ==============================================================================
*/

#include "Pattern.h"

#define FW_WITH_GLOBAL_ACTIVE 1

Pattern::Pattern(String name, int page, int mode) :
	ControllableContainer(name),
	page(page),
	mode(mode),
	lfoContainer("LFO Offsets")
{
	saveAndLoadRecursiveData = true;

#if FW_WITH_GLOBAL_ACTIVE
	globalActive = addBoolParameter("Global active", "Activates adjustements for this pattern", false);
#endif

	hueOffset = addFloatParameter("Hue Offset", "The Hue Offset", 0, 0, 1);
	saturation = addFloatParameter("Saturation", "The Saturation", 1, 0, 1);
	brightness = addFloatParameter("Brightness", "The Brightness", 1, 0, 1);
	speed = addFloatParameter("Speed", "The Speed", .5f, 0, 1);
	density = addFloatParameter("Density", "The Density", .5f, 0, 1);
	

#if !FW_WITH_GLOBAL_ACTIVE
	hueOffset->canBeDisabledByUser = true;
	saturation->canBeDisabledByUser = true;
	brightness->canBeDisabledByUser = true;
	speed->canBeDisabledByUser = true;
	density->canBeDisabledByUser = true;
#endif

	lfo1 = lfoContainer.addFloatParameter("LFO 1", "", 0, 0, 1);
	lfo2 = lfoContainer.addFloatParameter("LFO 2", "", 0, 0, 1);
	lfo3 = lfoContainer.addFloatParameter("LFO 3", "", 0, 0, 1);
	lfo4 = lfoContainer.addFloatParameter("LFO 4", "", 0, 0, 1);
	addChildControllableContainer(&lfoContainer);
	lfoContainer.enabled->setValue(false);
}

Pattern::~Pattern()
{
}

uint8 Pattern::getActiveFlags()
{
#if FW_WITH_GLOBAL_ACTIVE
	return (lfoContainer.enabled->boolValue() & 1) | ((globalActive->boolValue() & 1) << 1);
#else
	return ((hueOffset->enabled & 1)) | ((saturation->enabled & 1) << 1) | ((brightness->enabled & 1) << 2) | ((speed->enabled & 1) << 3) | ((density->enabled & 1) << 4) | ((lfoContainer.enabled->boolValue() & 1) << 5);
#endif
}

Pattern * Pattern::getEmptyPattern()
{
	Pattern * p = new Pattern("empty", 0, 3);
	p->globalActive->setValue(true);
	p->brightness->enabled = true;
	p->brightness->setValue(0);
	return p;
}
