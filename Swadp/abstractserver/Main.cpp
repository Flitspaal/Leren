#include <iostream>
#include "Switch.h"
#include "Light.h"

int main() {
    Light d(true);
    Switch S(&d);
    S.press();
    std::cout << "Light is " << (d.isOn() ? "on" : "off") << std::endl;
    S.press();
    std::cout << "Light is " << (d.isOn() ? "on" : "off") << std::endl;
    return 0;
}