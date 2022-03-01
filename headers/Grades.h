/*
 * Grades.h
 *
 *  Created on: Mar 1, 2022
 *      Author: cyaa
 */

#ifndef GRADES_H_
#define GRADES_H_

#include <iostream>
#include <map>
#include <vector>
#include "SubjectType.hpp"
#include "GradeResult.hpp"


class Grades{
private:
	std::map<SubjectType,std::vector<GradeResult>> _subjects;
public:
	void addSubject(SubjectType);
	void addGrade(SubjectType,GradeResult);
	std::vector<GradeResult> getGrades(SubjectType);
};


#endif /* GRADES_H_ */
