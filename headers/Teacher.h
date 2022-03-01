/*
 * Teacher.h
 *
 *  Created on: Mar 1, 2022
 *      Author: cyaa
 */

#ifndef TEACHER_H_
#define TEACHER_H_

#include <iostream>
#include <map>
#include <vector>
#include <SubjectType.hpp>

typedef std::map<SubjectType,std::vector<std::string>> SCHEDULE_LIST;

class Teacher{
private:
	std::map<std::string,SCHEDULE_LIST> _classes;
public:
	// Add a new class
	void add(std::string classSymbol);
	// Add a new subject
	void add(std::string classSymbol, SubjectType subjectType);
	// Add a new schedule
	void add(std::string classSymbol, SubjectType subjectType, std::string date);
};


#endif /* TEACHER_H_ */
