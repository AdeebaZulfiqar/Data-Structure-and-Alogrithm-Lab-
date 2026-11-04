#include <iostream>
using namespace std;

struct Student
{
	string name;
	string Roll_Num;
	int marks;
		
	void input()
	{
		cout<<"\nEnter name: ";
		cin>>name;
		cout<<"\nEnter marks of a student: ";
		cin>>marks;
		cout<<"\nEnter rollNo of a student: ";
		cin>>Roll_Num;
	}
	void calculate()
	{
		if(marks>=50)
		{
			cout<<"\nStudent is Pass!";
		}
		else 
		{
			cout<<"\nStudent is fail!";
		}
	}
	};
	int main()
	{
		Student s1;
		s1.input();
		s1.calculate();
		return 0;
	}
