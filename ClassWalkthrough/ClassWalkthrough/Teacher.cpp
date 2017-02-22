#include "Teacher.h"

using namespace std;

std::string Teacher::getName()
{
	return _name;
}
Teacher::Teacher()
{
}

Teacher::Teacher(string name)
{
	_name = name;
}


Teacher::~Teacher()
{
}

