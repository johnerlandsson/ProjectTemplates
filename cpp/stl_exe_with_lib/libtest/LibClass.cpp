#include "LibClass.h"
#include <iostream>

LibClass::LibClass() {}

LibClass::~LibClass() {}

int LibClass::pubmeth() {
    std::cout << "LibClass::pubmeth" << std::endl;
    return 0;
}
