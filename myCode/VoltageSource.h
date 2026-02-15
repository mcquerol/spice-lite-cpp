/*
 * VoltageSource.h
 *
 *  Created on: 10 Feb 2026
 *      Author: mateo
 */

#ifndef VOLTAGESOURCE_H_
#define VOLTAGESOURCE_H_

#include <string>
#include "Component.h"

class VoltageSource : Component{

private:
	double voltage;
public:
	VoltageSource(std::string name, double voltage);
	virtual ~VoltageSource();
	double getVoltage() const;
	void stamp();
};

#endif /* VOLTAGESOURCE_H_ */
