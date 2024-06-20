/*
 * SerialResistorConnection.cpp
 *
 *  Created on: 12-Jun-2024
 *      Author: acer
 */

#include "SerialResistorConnection.h"


SerialResistorConnection::SerialResistorConnection(std::string name):
ResistorConnection(name)
{
}

char SerialResistorConnection::separator() const
{
	return '-';
}

float SerialResistorConnection::nominalValue() const
{
	float sRes;
	for(auto res= resistors.begin(); res != resistors.end();res++){
		sRes += res->get()->nominalValue();
	}
	return sRes;
}

float SerialResistorConnection::minimumValue() const
{
	float sRes;
	for(auto res= resistors.begin(); res != resistors.end();res++){
		sRes += res->get()->minimumValue();
	}
	return sRes;
}

float SerialResistorConnection::maximumValue() const
{
	float sRes;
	for(auto res= resistors.begin(); res != resistors.end();res++){
		sRes += res->get()->maximumValue();
	}
	return sRes;
}

SerialResistorConnection::~SerialResistorConnection()
{
	// TODO Auto-generated destructor stub
}

