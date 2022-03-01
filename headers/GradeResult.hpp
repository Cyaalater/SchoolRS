/*
 * GradeResult.hpp
 *
 *  Created on: Mar 1, 2022
 *      Author: cyaa
 */

#ifndef GRADERESULT_HPP_
#define GRADERESULT_HPP_

#include <iostream>

#include "TestType.hpp"

struct GradeResult {
	int value;
	TestType TestType;
	double weight;
	std::string date;

};



#endif /* GRADERESULT_HPP_ */
