#include "Person.h"

//Constructor
Person::Person(string fname, string lname, int age)
{
	first_name = fname;
	last_name = lname;
	this->age = age;
	cout << "Person() called\n";
}

//Deconstructor
Person::~Person()
{
	cout << "~Person() called\n";
}

//Getters
int Person::getage() const
{
	return age;
}
string Person::getfirstname() const
{
	return first_name;
}
string Person::getlastname() const
{
	return last_name;
}

//Setters
void Person::setfirstname(const string fname)
{
	first_name = fname;
}
void Person::setlastname(const string lname)
{
	last_name = lname;
}
void Person::setage(const int age)
{
	this->age = age;
}

//Print Function
void Person::printInformation() const
{
	cout << first_name << " " << last_name << " is " << age << " years old\n";
}