/*
 * Resistor.h
 *
 *  Created on: 26 Jan 2026
 *      Author: mateo
 */

#ifndef RESISTOR_H_
#define RESISTOR_H_

#include <string>
#include "Component.h"

class Resistor : Component{

private:

	std::string name;
	float resistance;
	float tolerance;

public:

	Resistor(std::string& name, float resistance = 1000, float tolerance = 0);
	Resistor operator+(Resistor& other);
	Resistor operator-(Resistor& other);
	std::string& getName() const;
	float getResistance() const;
	float getTolerance() const;
	float getConductance() const;

};

#endif /* RESISTOR_H_ */
