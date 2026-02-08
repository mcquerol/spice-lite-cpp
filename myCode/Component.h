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
	std::vector<int> nodes;

public:
	Component(std::string name);
	std::string getName() const;
	std::vector<int> getNodes() const;

	virtual ~Component();
};

#endif /* COMPONENT_H_ */
