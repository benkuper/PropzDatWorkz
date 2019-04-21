/*
  ==============================================================================

    PatternLibrary.h
    Created: 19 Apr 2019 12:24:26pm
    Author:  bkupe

  ==============================================================================
*/

#pragma once

#include "Pattern.h"

class PatternLibrary :
	public ControllableContainer
{
public:
	juce_DeclareSingleton(PatternLibrary, true)

	PatternLibrary();
	~PatternLibrary();

	OwnedArray<Pattern> patterns;

	IntParameter * thumbSize;

	static ControllableContainer * showPatternsAndGet();
};