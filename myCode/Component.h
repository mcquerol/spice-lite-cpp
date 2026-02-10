/*
 * Component.h
 *
 *  Created on: 2 Feb 2026
 *      Author: mateo
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <string>
#include <vector>

class Component {

protected:
	std::string name;
	int nodePos;
	int nodeNeg;

public:
	Component(std::string name, int nodePos = 0, int nodeNeg = 0);
	std::string getName() const;
	int getNodePos() const;
	int getNodeNeg() const;

	virtual ~Component();
};

#endif /* COMPONENT_H_ */
