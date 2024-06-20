/*
 * ParallelResistorConnection.h
 *
 *  Created on: 12-Jun-2024
 *      Author: acer
 */

#ifndef PARALLELRESISTORCONNECTION_H_
#define PARALLELRESISTORCONNECTION_H_
#include <iostream>
#include "ResistorConnection.h"
#include "ResistorPart.h"

class ParallelResistorConnection: public ResistorConnection
{
public:
	ParallelResistorConnection(std::string name);
	char separator() const;
	float nominalValue() const;
	float minimumValue() const;
	float maximumValue() const;
	virtual ~ParallelResistorConnection();
};

#endif /* PARALLELRESISTORCONNECTION_H_ */
