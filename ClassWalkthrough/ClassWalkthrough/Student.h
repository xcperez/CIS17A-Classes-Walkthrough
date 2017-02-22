#pragma once
#include <string>
class Student
{
private:

	std::string _name;
public:

	Student();

	std::string getName();
	Student(std::string name);
	~Student();
};

