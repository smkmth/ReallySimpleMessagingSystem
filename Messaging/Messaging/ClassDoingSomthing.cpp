#include "pch.h"
#include "ClassDoingSomthing.h"


ClassDoingSomthing::ClassDoingSomthing() {

	m_iSomeVariable = 20;

}

ClassDoingSomthing::~ClassDoingSomthing() {


}



void ClassDoingSomthing::DoingSomthing() {
	int iIterator = 0;
	while (iIterator < m_iSomeVariable) {
		iIterator++;
		std::cout << iIterator;
	}
	Notify("Done");


}