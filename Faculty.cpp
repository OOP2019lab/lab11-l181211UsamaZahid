#include "Faculty.h"

//Constructor
Faculty::Faculty(string fname, string lname, int age, int ccount, int num) : Person(fname, lname, age)
{
	course_count = ccount;
	extnum = num;
	cout << "Faculty() called\n";
}

//Deconstructor
Faculty::~Faculty()
{
	cout << "~Faculty() called\n";
}

//Getters
int Faculty::getcoursecount() const
{
	return course_count;
}
int Faculty::getextnum() const
{
	return extnum;
}

//Setters
void Faculty::setcoursecount(const int ccount)
{
	course_count = ccount;
}
void Faculty::setextnum(const int num)
{
	extnum = num;
}

//Print Function
void Faculty::printFaculty() const
{
	cout << "Faculty Member name: " << getfirstname() << " " << getlastname() << ", Age: " << age << ", Number of courses: " << course_count << ", Ext. " << extnum << endl;
}