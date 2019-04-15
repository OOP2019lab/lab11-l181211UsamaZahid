#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string first_name;
	string last_name;

protected:
	int age;

public:
	Person(string, string, int);
	~Person();
	
	//Getters
	string getfirstname() const;
	string getlastname() const;
	int getage() const;

	//Setters
	void setfirstname(const string);
	void setlastname(const string);
	void setage(const int);

	//Print Function
	void printInformation() const;
};