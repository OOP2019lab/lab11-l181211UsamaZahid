#include "Student.h"

//Constructor
Student::Student(string fname, string lname, int age, float cgpa) :Person(fname, lname, age)
{
	this->cgpa = cgpa;
	cout << "Student() called\n";
}

//Deconstructor
Student::~Student()
{
	cout << "~Student() called\n";
}

//Getters
string Student::getfypname() const
{
	return fyp_name;
}
float Student::getcgpa() const
{
	return cgpa;
}

//Setters
void Student::setfypname(const string fypname)
{
	fyp_name = fypname;
}
void Student::setcgpa(const float cgpa)
{
	this->cgpa = cgpa;
}

//Print Function
void Student::printStudent() const
{
	cout << getfirstname() << " " << getlastname() << " is  " << age << " years old, his cgpa is " << cgpa << endl;

}