// lab  10.cpp : Defines the entry point for the console application.
//

#include "studen.h"
#include "cour.h"

int main()
{
	student* s1 = new student ( "Anum", "11-1351");
	student* s2 = new student( "sara", "12-6462");
	student* s3 = new student( "sana", "11-4531");
	student* s4 = new student( "Zara", "12-4342");
	student* s5 = new student( "Hira", "11-5940");

	course* c1 = new course("OOP", "cs102");
	course* c2 = new course("PF", "cs101");
	course* c3 = new course("AI", "cs365");

	s1->addcourse(c1);
	s1->addcourse(c2);
	s1->addcourse(c2);
	s1->addcourse(c3);
	s2->addcourse(c2);
	s3->addcourse(c2);
	s4->addcourse(c2);
	s5->addcourse(c2);

	cout << *s1 << endl;
	cout << *c1 << endl;
	cout << *c2 << endl;

	// task 2
	c1->task2addstudent(s5);
	s5->addcourse(c3);

	// task 3

	s5->dropcourse(c1);

	s4->dropcourse(c3);
	//c1->dropstudent(s1); not possible

	delete s1;
	delete s2;
	delete s3;
	delete s4;
	delete s5;

	delete c1;
	delete c2;
	delete c3;

	return 0;
}
