/*
 * Student.h
 *
 *  Created on: Mar 1, 2022
 *      Author: cyaa
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include "Grades.h"
#include "SubjectType.hpp"
#include "GradeResult.hpp"

class Student {
private:
	Grades _grades;
	std::string _name;
	std::string _class;
public:
	Student(std::string name,std::string classSymbol);
	std::string getName();
	std::string getClass();
	void setClass(std::string classSymbol);
	void addSubject(SubjectType subjectType);
	void addGrade(SubjectType subjectType,GradeResult gradeResult );
};


#endif /* STUDENT_H_ */
