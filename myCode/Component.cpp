/*
 * Component.cpp
 *
 *  Created on: 2 Feb 2026
 *      Author: mateo
 */

#include "Component.h"

Component::Component(std::string name, int nodePos, int nodeNeg) : name(name), nodePos(nodePos), nodeNeg(nodeNeg) {
}

std::string Component::getName() const {
	return name;
}

int Component::getNodePos() const {
	return nodePos;
}

int Component::getNodeNeg() const {
	return nodePos;
}

Component::~Component() {
}
