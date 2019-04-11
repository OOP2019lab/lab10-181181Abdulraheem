#include <iostream>
#include <string>
using namespace std;
#include "studen.h"

#ifndef COUR_H
#define COUR_H



class student;
class course
{
	friend student;
	string course_name;
	string course_number;
	student *bachay[4];
	int rgstu;          //no of students attach belong to that course
	void addstudent( student* );
	void dropStudent( student*);
public:
	course();
	course(string, string);
	void print();
	void task2addstudent(student*);
	friend ostream& operator << (ostream&, course);
	void task2addStudent(student *);
	~course();
};

#endif COUR_H