#include "Observer.h"

Subject* Observer::getSubject() const
{
	return S;
}

Observer::Observer(Subject* s) : S(s) {
	getSubject()->insert(this);
}

Observer::~Observer()
{
	getSubject()->remove(this);
}
