#include "Subject.h"

void Subject::notify() {
	for (std::list<Observer*>::iterator i = L.begin(); i != L.end(); ++i) 
	{
		(*i)->update();
	}
}

void Subject::insert(Observer* s)
{
	L.push_front(s);
}

void Subject::remove(Observer* s)
{
	L.remove(s);
}
