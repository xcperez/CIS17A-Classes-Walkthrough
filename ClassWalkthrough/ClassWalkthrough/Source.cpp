#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include <iostream>

using namespace std;

int main()
{
	Teacher james = Teacher("James");
	Course cis17 = Course("CIS17A", "Programming C++: Objects", james);
	Student bob = Student("Bob");
	Student jane = Student("Jane");

	cis17.enrollStudent(bob, 0);
	cis17.enrollStudent(jane, 1);

	getchar();
	return 0;
}