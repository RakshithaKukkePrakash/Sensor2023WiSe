/*
 * ParallelResistorConnection.cpp
 *
 *  Created on: 12-Jun-2024
 *      Author: acer
 */

#include "ParallelResistorConnection.h"


ParallelResistorConnection::ParallelResistorConnection(std::string name):
ResistorConnection(name)
{
}

char ParallelResistorConnection::separator() const
{
	return '|';
}

float ParallelResistorConnection::nominalValue() const
{
	float parRes, parResNum, parResDenom;
	for(auto res= resistors.begin(); res != resistors.end();res++){
		parResNum *=res->get()->nominalValue();
		parResDenom += res->get()->nominalValue();
	}
	parRes = parResNum/parResDenom;
	return parRes;
}

float ParallelResistorConnection::minimumValue() const
{
	float parRes, parResNum, parResDenom;
	for(auto res= resistors.begin(); res != resistors.end();res++){
		parResNum *=res->get()->minimumValue();
		parResDenom += res->get()->minimumValue();
	}
	parRes = parResNum/parResDenom;
	return parRes;
}

float ParallelResistorConnection::maximumValue() const
{
	float parRes, parResNum, parResDenom;
	for(auto res= resistors.begin(); res != resistors.end();res++){
		parResNum *=res->get()->maximumValue();
		parResDenom += res->get()->maximumValue();
	}
	parRes = parResNum/parResDenom;
	return parRes;
}

ParallelResistorConnection::~ParallelResistorConnection()
{
	// TODO Auto-generated destructor stub
}

