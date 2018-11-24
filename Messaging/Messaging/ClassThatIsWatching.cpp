#include "pch.h"
#include "ClassThatIsWatching.h"


ClassThatIsWatching::ClassThatIsWatching()
{
}


ClassThatIsWatching::~ClassThatIsWatching()
{
}


void ClassThatIsWatching::DoSomthingWhenTold()
{
	std::cout << "DONE";
}

void ClassThatIsWatching::OnNotify()
{
	DoSomthingWhenTold();
}
