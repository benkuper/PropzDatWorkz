/*
  ==============================================================================

    Pattern.cpp
    Created: 19 Apr 2019 12:30:57pm
    Author:  bkupe

  ==============================================================================
*/

#include "Pattern.h"

Pattern::Pattern(String name, int page, int mode) : 
	ControllableContainer(name),
	page(page),
	mode(mode)
{
	hueOffset = addFloatParameter("Hue Offset", "The Hue Offset", 0, 0, 1);
	saturation = addFloatParameter("Saturation", "The Saturation", 1, 0, 1);
	brightness = addFloatParameter("Brightness", "The Brightness", 1, 0, 1);
	speed = addFloatParameter("Speed", "The Speed", .5f, 0, 1);
	density = addFloatParameter("Density", "The Density", .5f, 0, 1);

	lfo1 = addFloatParameter("LFO 1", "", 0, 0, 1);
	lfo2 = addFloatParameter("LFO 2", "", 0, 0, 1);
	lfo3 = addFloatParameter("LFO 3", "", 0, 0, 1);
	lfo4 = addFloatParameter("LFO 4", "", 0, 0, 1);
}

Pattern::~Pattern()
{
}

Pattern * Pattern::getEmptyPattern()
{
	Pattern * p = new Pattern("empty", 0, 3);
	p->lfo1->setValue(.31f);
	return p;
}
