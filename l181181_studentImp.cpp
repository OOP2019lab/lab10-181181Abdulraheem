#include "studen.h"


student::student()
{
	name = "";
	username = "";
	roll_no = "";
	
}

student::student(string namee, string rn)
{
	name = namee;
	roll_no = rn;
	subject[0] = nullptr;
	subject[1] = nullptr;
	stcrs = 0;
}

void student::addcourse(course* cor)
{
	bool flag = true;
	for (int i = 0; i < stcrs; i++)
	{
		if (subject[i] == cor)
		{
			cout << "This course has already been added\n";
				flag = false;
		}
	}
	if (stcrs > 1)
		cout << "User already has 2 subjects\n";
	if (stcrs <= 1 && flag == true)
	{
		subject[stcrs] = cor;
		stcrs++;
		cor[0].addstudent(this);
	}
}
ostream& operator << (ostream& out, student other)
{
	out << "Name = " << other.name << endl;
	out << "Roll number = " << other.roll_no << endl;
	return out;
}


void student::print()
{
	cout << "The name of student is: " << name << endl;
	cout << "The roll no of student is: " << roll_no << endl;
	cout << "Student has " << stcrs << " courses\n";
	for (int i = 0; i < stcrs; i++)
	{
		cout << "Course " << i + 1 << "\n";
		cout << *subject[i] << endl;
	}
}

void student::task2addcourse(course* cor)
{
	if (stcrs > 1)
		cout << "Student already has 2 students\n";
	else
	{
		subject[stcrs] = cor;
		stcrs++;
	}
}

void student::dropcourse(course *other)
{
	bool flag = true;
	for (int i = 0; i < stcrs && flag; i++)
	{
		if (this->subject[i] == other)
		{
			subject[i] = nullptr;
			other->dropStudent(this);
			flag = false;
			stcrs--;
		}
	}

	if (flag)
		cout << "Course already not registered" << endl;
}
student::~student()
{
	
}