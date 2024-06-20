/*
 * Resistor.h
 *
 *  Created on: 11-Jun-2024
 *      Author: acer
 */

#ifndef RESISTOR_H_
#define RESISTOR_H_
#include <iostream>
#include <memory>

class Resistor
{
	std::string name;
public:
	typedef std::shared_ptr<Resistor> ResistorPtr;
	Resistor(std::string name);
	std::string getName() const;
	virtual float nominalValue() const = 0;
	virtual float minimumValue() const = 0;
	virtual float maximumValue() const = 0;
	virtual std::string toString() const;
	friend std::ostream& operator<<(std::ostream& os, Resistor& resistor);
	virtual ~Resistor();
};

#endif /* RESISTOR_H_ */
