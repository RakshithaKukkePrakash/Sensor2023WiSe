/*
 * ResistorConnection.cpp
 *
 *  Created on: 11-Jun-2024
 *      Author: acer
 */

#include "ResistorConnection.h"

ResistorConnection::ResistorConnection(std::string name): Resistor(name)
{
}

char ResistorConnection::separator() const
{
	return ',';
}

std::string ResistorConnection::getName() const
{
    std::string resList = Resistor::getName() + "[";
    for (auto it = resistors.begin(); it != resistors.end(); ++it) {
        if (it != resistors.begin()) {
            resList += separator();
        }
        resList += it->get()->toString();
    }
    resList += "]";
    return resList;
}

ResistorConnection& ResistorConnection::operator +=(
		const std::shared_ptr<Resistor> &resistor)
{
	resistors.emplace_back(resistor);
	return *this;

}

ResistorConnection::~ResistorConnection()
{
}

