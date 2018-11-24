#pragma once
#define MAXOBSERVERS 10

class Observer;

class Subject
{
private:
	Observer* m_objaObservers[MAXOBSERVERS];
	int m_iNumOfObservers = 0;
protected:
	void Notify(const char* event );

public:
	void AddObserver( Observer* objObserver );

	void RemoveObserver( Observer* objObserver );



};

