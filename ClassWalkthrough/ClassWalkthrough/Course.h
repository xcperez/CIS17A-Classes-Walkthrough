#pragma once
#include <string>
#include "Student.h"
#include "Teacher.h"

class Course
{
private:
	std::string _name;
	std::string _description;
	Student _student[10];
	Teacher _teacher;
public:
	
	Course(std::string name, std::string description, Teacher teacher);
	~Course();

	bool enrollStudent(Student newStudent, int position);
	std::string getClassInfo();
};

