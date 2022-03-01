/*
 * Student.cpp
 *
 *  Created on: Mar 1, 2022
 *      Author: cyaa
 */



#include "Student.h"
#include "SubjectType.hpp"
#include "GradeResult.hpp"
#include <iostream>

Student::Student(std::string name, std::string classSymbol){
	this->_name=name;
	this->_class=classSymbol;
}
std::string Student::getClass(){
	return this->_class;
}

std::string Student::getName(){
	return this->_name;
}

void Student::setClass(std::string classSymbol){
	this->_class = classSymbol;
}
void Student::addSubject(SubjectType subjectType){
	this->_grades.addSubject(subjectType);
}
void Student::addGrade(SubjectType subjectType, GradeResult gradeResult){
	this->_grades.addGrade(subjectType,gradeResult);
}
