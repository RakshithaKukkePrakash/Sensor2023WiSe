/*
 * Resistor.cpp
 *
 *  Created on: 11-Jun-2024
 *      Author: acer
 */

#include "Resistor.h"
using namespace std;

Resistor::Resistor(std::string name): name(name)
{
}

std::string Resistor::getName() const
{
	return this->name;
}

std::string Resistor::toString() const
{
	return this->name + "=" + std::to_string(nominalValue()) + " Ohm";
}

std::ostream& operator<<(std::ostream& os, Resistor& resistor){
	os << resistor.toString();
	return os;
}
Resistor::~Resistor()
{
}

