#include "cour.h"


course::course()
{
	course_name = "";
	course_number = "";
	
}

course::course(string name, string num)
{
	course_name = name;
	course_number = num;
	for (int i = 0; i < 4; i++)
	bachay[i] = nullptr;
	rgstu = 0;
}

void course::addstudent( student * stu)
{
	if (rgstu > 3)
		cout << "Course already has 4 students\n";
	else 
	{
		bachay[rgstu] = stu;
		rgstu++;
	}
}
void course::print()
{
	cout << "Course name: " << course_name << endl;
	cout << "Course number: " << course_number << endl;
	cout << "This course has " << rgstu << " student(s)\n";
	for (int i = 0; i < rgstu; i++)
	{
		cout << "Student " << i + 1 << endl;
		cout << *bachay[i] << endl;
	}
}
ostream& operator << (ostream& out, course other )
{
	out << "Course name = " << other.course_name << endl;
	out << "Course name = " << other.course_number << endl;
	return out;
}
void course::task2addstudent(student* stu)
{
	bool flag = true;
	for (int i = 0; i < rgstu; i++)
	{
		if (bachay[i] == stu)
		{
			cout << "Student has already been added\n";
			flag = false;
		}
	}
		if (rgstu < 3 && flag == true)
		{
			bachay[rgstu] = stu;
			rgstu++;
			stu[0].task2addcourse(this);
		}
}
void course::dropStudent(student* other)
{
	for (int i = 0; i < 4; i++)
	{
		if (bachay[i] == other)
		{
			bachay[i] = nullptr;
			rgstu--;
			break;
		}
	}
}

void course::task2addStudent(student *ptr)
{
	bool flag = true;
	for (int i = 0; i < 4 && flag; i++)
	{
		if (bachay[i] == nullptr)
		{

			bachay[i] = ptr;
			ptr->task2addcourse(this);
			flag = false;
		}
		else if (bachay[i] == ptr)
		{
			cout << "Student is already taking the course" << endl;
			flag = false;
		}
	}
	if (flag)
		cout << "Course has already 4 students" << endl;
}

course::~course()
{
	
}