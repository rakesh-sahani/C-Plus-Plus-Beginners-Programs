#include<iostream.h>
#include<conio.h>
class student
{
	int roll;
	char name[20],co[20];
	public:
	void get()
	{
		cout<<"Enter the Roll_No. :";
		cin>>roll;
		cout<<"Enter the Name :";
		cin>>name;
		cout<<"Enter the Course:";
		cin>>co;
	}
};

class test : public student
{
	public:
	int sub1,sub2,sub3;
	void input()
	{
		cout<<"Enter the Marks of Subject 1 :";
		cin>>sub1;
		cout<<"Enter the Marks of Subject 2:";
		cin>>sub2;
		cout<<"Enter the Marks of Subject 3:";
		cin>>sub3;
	}
};

class result : public test
{
	int total;
	public:
	void display()
	{
		total=sub1+sub2+sub3;
		cout<<"Total Marks of the Given Subjects is : "<<total;
	}
};

void main()
{
	clrscr();
	result obj;
	obj.get();
	obj.input();
	obj.display();
	getch();
}
