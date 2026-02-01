/*
 * Resistor.cpp
 *
 *  Created on: 26 Jan 2026
 *      Author: mateo
 */

#include "Resistor.h"

Resistor::Resistor(std::string& name, float resistance, float tolerance) {
	this->name = name;
	this->resistance = resistance;
	this->tolerance = tolerance;
}

Resistor Resistor::operator +(Resistor &other) {
	return this->resistance + other.getResistance();
}

Resistor Resistor::operator -(Resistor &other) {
	float total_resistance;
	total_resistance = this->resistance - other.getName();
	if(total_resistance < 0)
	{
		total_resistance = 0;
	}
	return total_resistance;
}

std::string& Resistor::getName() const {
	return this->name;
}

float& Resistor::getResistance() const {
	return this->resistance;
}

float& Resistor::getTolerance() const {
	return this->tolerance;
}
