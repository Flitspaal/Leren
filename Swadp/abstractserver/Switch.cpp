#include "Switch.h"

Switch::~Switch()
{
}

void Switch::press()
{
	if (L->isOn()) { L->turnOff(); }
	else { L->turnOn(); }
}
