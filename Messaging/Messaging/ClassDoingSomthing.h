#pragma once
#include <iostream>
#include "Subject.h"
class ClassDoingSomthing : public Subject {

private:
	int m_iSomeVariable;

public:

	ClassDoingSomthing();

	~ClassDoingSomthing();

	void DoingSomthing();


};