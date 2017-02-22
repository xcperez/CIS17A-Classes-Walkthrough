#include "Student.h"
#include <string>

using namespace std;

Student::Student()
{

	_name = "null";

}

std::string Student::getName()
{
	return _name;
}
Student::Student(string name)
{
	_name = name;
}


Student::~Student()
{
}
