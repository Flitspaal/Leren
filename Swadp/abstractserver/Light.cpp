#include "Light.h"

bool Light::isOn() const
{
    return on;
}

void Light::turnOff()
{
    on = false;
}

void Light::turnOn()
{
    on = true;
}
