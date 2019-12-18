/*
  ==============================================================================

    Pattern.h
    Created: 19 Apr 2019 12:30:57pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class Pattern :
	public ControllableContainer
{
public:
	Pattern(String name, int page, int mode);
	~Pattern();

	int page;
	int mode;

	BoolParameter* globalActive;

	FloatParameter * hueOffset;
	FloatParameter * saturation;
	FloatParameter * brightness;
	FloatParameter * speed;
	FloatParameter * density;
	
	EnablingControllableContainer lfoContainer;
	FloatParameter * lfo1;
	FloatParameter * lfo2;
	FloatParameter * lfo3;
	FloatParameter * lfo4;

	uint8 getActiveFlags();

	static Pattern * getEmptyPattern();
};