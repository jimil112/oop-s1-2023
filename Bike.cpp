#include "Bike.h"

Bike::Bike() : brand(""), code(0) {}

Bike::Bike(std::string brandName, int brandCode)
    : brand(brandName), code(brandCode) {}

std::string Bike::getBrand() { return brand; }

int Bike:: getCode() {return code; }

Bike::~Bike() {}
