/*
 * VoltageSource.cpp
 *
 *  Created on: 10 Feb 2026
 *      Author: mateo
 */

#include "VoltageSource.h"

VoltageSource::VoltageSource(std::string name, double voltage) : name(name), voltage(voltage) {
}

double VoltageSource::getVoltage() const {
	return voltage;
}

void VoltageSource::stamp() {
}
