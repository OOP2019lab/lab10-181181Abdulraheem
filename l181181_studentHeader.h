#ifndef STUDEN_H
#define STUDEN_H

#include <iostream>
#include <string>
#include "cour.h"
using namespace std;

class course;


class student
{
	friend course;
	string username;
	string name;
	void task2addcourse(course*);
	string roll_no;
	course *subject[2];
	int stcrs;       //no of courses student carried

public:
	student();
	student(string n,string rno);
	void addcourse(course*);
	void print();
	friend ostream& operator << (ostream&, student);
	void dropcourse(course *);
	~student();
};

#endif STUDEN_H