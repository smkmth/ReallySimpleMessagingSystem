#include "pch.h"
#include "Subject.h"
#include "Observer.h"

void Subject::Notify( const char * event )
{
	for (int i = 0; i < m_iNumOfObservers; i++) {
		m_objaObservers[i]->OnNotify();
	}

}

void Subject::AddObserver( Observer * objObserver )
{
	m_objaObservers[m_iNumOfObservers] = objObserver;
	m_iNumOfObservers++;
	
}

void Subject::RemoveObserver( Observer * objObserver )
{
	m_objaObservers[m_iNumOfObservers] = nullptr;
	m_iNumOfObservers--;

}
