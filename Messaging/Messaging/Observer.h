#pragma once
class Observer
{
public:
	Observer();
	~Observer();
	virtual void OnNotify() =0;

};

