#include "Car.h"
#include <iostream>

// predefine
using std::cout;
using std::endl;

// :: this is scope resolution operator, basically say this method belong to the class before the operator
Car::Car()
{
	cout << "A New Car Is Made!" << endl;
}