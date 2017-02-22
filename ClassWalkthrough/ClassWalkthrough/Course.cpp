#include "Course.h"
#include <string>
using namespace std;

Course::Course(string name, string description, Teacher teacher)
{
	_name = name;
	_description = description;
	_teacher = teacher;
}


Course::~Course()
{
}

bool Course::enrollStudent(Student newStudent, int position)
{
	if (position <= 9 && _student[position].getName() == "null") {

		_student[position] = newStudent;
		return true;

	}
	return false;
	
}