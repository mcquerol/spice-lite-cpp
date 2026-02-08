/*
 * Component.cpp
 *
 *  Created on: 2 Feb 2026
 *      Author: mateo
 */

#include "Component.h"

Component::Component(std::string name) {
	// TODO Auto-generated constructor stub
	this->name = name;
}

Component::~Component() {
	// TODO Auto-generated destructor stub
}

std::string Component::getName() const {
	return this->name;
}

std::vector<int> Component::getNodes() const {
	return this->nodes;
}

