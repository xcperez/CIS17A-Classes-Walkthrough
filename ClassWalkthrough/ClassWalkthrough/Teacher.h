#pragma once
#include <string>
class Teacher
{
private:

	std::string _name;

public:
	Teacher();
	Teacher(std::string name);
	~Teacher();

	std::string getName();
};

