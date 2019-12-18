/*
  ==============================================================================

    PatternLibrary.cpp
    Created: 19 Apr 2019 12:24:26pm
    Author:  bkupe

  ==============================================================================
*/

#include "PatternLibrary.h"

juce_ImplementSingleton(PatternLibrary)

PatternLibrary::PatternLibrary() :
	ControllableContainer("Pattern Library")
{
	thumbSize = addIntParameter("Icon size", "Size of library icons", 70, 16, 120); 
	DBG("Thumb size " << thumbSize->intValue());

	patterns.add(new Pattern("Rainbow", 0, 0));
	patterns.add(new Pattern("Rainbow drops", 0, 1));
	patterns.add(new Pattern("Bold", 0, 2));
	patterns.add(new Pattern("Lantern", 0, 3));
	patterns.add(new Pattern("Fire", 0, 4));
	patterns.add(new Pattern("Water", 0, 5));
	patterns.add(new Pattern("Earth", 0, 6));
	patterns.add(new Pattern("Air", 0, 7));
	patterns.add(new Pattern("Spirit", 0, 8));
	patterns.add(new Pattern("Pulse", 0, 9));

	patterns.add(new Pattern("Candy", 1, 0));
	patterns.add(new Pattern("Petals", 1, 1));
	patterns.add(new Pattern("Love", 1, 2));
	patterns.add(new Pattern("Watermelon", 1, 3));
	patterns.add(new Pattern("Freedom", 1, 4));
	patterns.add(new Pattern("Microdots", 1, 5));
	patterns.add(new Pattern("Unicorns", 1, 6));
	patterns.add(new Pattern("Blue blazer", 1, 7));
	patterns.add(new Pattern("Solar flare", 1, 8));
	patterns.add(new Pattern("Strobe", 1, 9));

	patterns.add(new Pattern("Flamebow", 2, 0));
	patterns.add(new Pattern("Alicorn", 2, 1));
	patterns.add(new Pattern("Liquid sugar", 2, 2));
	patterns.add(new Pattern("Rainbow dash", 2, 3));
	patterns.add(new Pattern("Fireball", 2, 4));
	patterns.add(new Pattern("Froth", 2, 5));
	patterns.add(new Pattern("Jammin", 2, 6));
	patterns.add(new Pattern("Bolder", 2, 7));
	patterns.add(new Pattern("Sunset", 2, 8));
	patterns.add(new Pattern("Daybreak", 2, 9));

	for (int i = 0; i < 10; i++)
	{
		patterns.add(new Pattern("Favorite " + String(i + 1), 3, i));
	}

	for (int i = 0; i < 50; i++)
	{
		patterns.add(new Pattern("Bonus " + String(i + 1), 12, i));
	}

	for (auto &p : patterns) addChildControllableContainer(p);

}

PatternLibrary::~PatternLibrary()
{
}

ControllableContainer * PatternLibrary::showPatternsAndGet()
{
	PopupMenu menu;
	int index = 1;
	for (auto &p : PatternLibrary::getInstance()->patterns) menu.addItem(index, p->niceName);
	int result = menu.show();

	if (result > 0) return PatternLibrary::getInstance()->patterns[result - 1];
	return nullptr;
}
