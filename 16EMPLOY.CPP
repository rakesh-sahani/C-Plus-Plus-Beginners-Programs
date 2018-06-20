#include<iostream.h>
#include<conio.h>
struct employee
{
	int empno;
	float empcom;
	void display()
	{
		cout<<"\nEmployee Number ="<<empno;
		cout<<"\nEmployee Compensation ="<<empcom;
	}
};

void main()
{
	clrscr();
	employee e1,e2,e3;
	cout<<"\nEnter The Employee 1 :";
	cin>>e1.empno;
	cout<<"Enter The Employee Compensation :";
	cin>>e1.empcom;
	cout<<"\n\nEnter The Employee Number 2 :";
	cin>>e2.empno;
	cout<<"Enter The Employee Compensation :";
	cin>>e2.empcom;
	cout<<"\nEnter The Employee Number 3 :";
	cin>>e3.empno;
	cout<<"Enter The Employee Compensation :";
	cin>>e3.empcom;
	cout<<"\n\n\n";
	e1.display();
	e2.display();
	e3.display();
	getch();
}
