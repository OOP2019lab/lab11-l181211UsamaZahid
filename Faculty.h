#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Faculty : private Person
{
private:
	int course_count;
	int extnum;

public:
	Faculty(string, string, int, int, int);
	~Faculty();

	//Getters
	int getcoursecount() const;
	int getextnum() const;

	//Setters
	void setcoursecount(const int);
	void setextnum(const int);

	//Print Function
	void printFaculty() const;
};