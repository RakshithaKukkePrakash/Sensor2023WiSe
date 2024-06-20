/*
 * ResistorPart.cpp
 *
 *  Created on: 11-Jun-2024
 *      Author: acer
 */

#include "ResistorPart.h"

ResistorPart::ResistorPart(std::string name, float value, float tolerance):Resistor(name),
value(value), tolerance(tolerance)
{
}

float ResistorPart::nominalValue() const
{
	return value;
}

float ResistorPart::minimumValue() const
{
	return value -(value * (tolerance/100));
}

float ResistorPart::maximumValue() const
{
	return value + (value * (tolerance/100));
}

ResistorPart::~ResistorPart()
{
}

