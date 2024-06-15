#pragma once
#include "Subject.h"

class Observer
{
private:
	Subject* S;
protected:
	Subject getSubject() const;
public:
	Observer(Subject* s);
	virtual ~Observer();
	virtual void update() = 0;
};

