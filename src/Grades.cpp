/*
 * Grades.cpp
 *
 *  Created on: Mar 1, 2022
 *      Author: cyaa
 */

#include "Grades.h"
#include "SubjectType.hpp"
#include "GradeResult.hpp"
#include <vector>
#include <utility>

void Grades::addSubject(SubjectType subjectType)
{
	std::vector<GradeResult> gradeList;
	this->_subjects.insert(std::pair<SubjectType,std::vector<GradeResult>>(subjectType,gradeList));
}

void Grades::addGrade(SubjectType subjectType, GradeResult gradeResult)
{

	std::map<SubjectType,std::vector<GradeResult>>::iterator itr_grades;
	itr_grades = this->_subjects.find(subjectType);
	itr_grades->second.push_back(gradeResult);
}

std::vector<GradeResult> Grades::getGrades(SubjectType subjectType)
{
	return this->_subjects.at(subjectType);
}

