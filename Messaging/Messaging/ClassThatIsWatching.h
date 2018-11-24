#pragma once
#include <iostream>
#include "Observer.h"
class ClassThatIsWatching  : public Observer
{
public:
	ClassThatIsWatching();
	~ClassThatIsWatching();

	void DoSomthingWhenTold();
	void OnNotify() override;



};

