/*
 * ResistorConnection.h
 *
 *  Created on: 11-Jun-2024
 *      Author: acer
 */

#ifndef RESISTORCONNECTION_H_
#define RESISTORCONNECTION_H_
#include <memory>
#include <iostream>
#include <list>
#include "Resistor.h"
class ResistorConnection:public Resistor
{

public:
	ResistorConnection(std::string name);
	char separator() const;
	std::string getName() const;
	ResistorConnection& operator+=(const std::shared_ptr<Resistor>& resistor);
	virtual ~ResistorConnection();
protected:
	std::list<std::shared_ptr<Resistor>> resistors;
};

#endif /* RESISTORCONNECTION_H_ */
