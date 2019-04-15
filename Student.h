#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student: private Person
{
private:
	string fyp_name;
	float cgpa;

public:
	Student(string, string, int, float);
	~Student();

	//Getters
	string getfypname() const;
	float getcgpa() const;

	//Setters
	void setfypname(const string);
	void setcgpa(const float);

	//Print Function
	void printStudent() const;
};