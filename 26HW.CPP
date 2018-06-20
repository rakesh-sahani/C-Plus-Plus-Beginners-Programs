#include<iostream.h>
#include<conio.h>
#include<string.h>
class wife;
class husband
{
	private:
	char name[20];
	float salary;
	public:
	husband(char *n,float s)
	{
		strcpy(name,n);
		salary=s;
	}
	friend void addsalary(husband h,wife w);
};

class wife
{
	private:
	char name[20];
	float salary;
	public:
	wife(char *n,float s)
	{
		strcpy(name,n);
		salary=s;
	}
	friend void addsalary(husband h,wife w);
};

void addsalary(husband h,wife w)
{
	double sal;
	sal=h.salary+w.salary;
	cout<<"\nThe Name of Husband="<<h.name;
	cout<<"\nThe Salary of Husband="<<h.salary;
	cout<<"\n\nThe Name of Wife="<<w.name;
	cout<<"\nThe Salary of Wife"<<w.salary;
	cout<<"\n\nThe Total Salary="<<sal;
}

void main()
{
	float a,b;
	char x[10],y[10];
	clrscr();
	cout<<"Enter Husband's Name:";
	cin>>x;
	cout<<"Enter Husband's salary:";
	cin>>a;
	cout<<"\nEnter Wife's Name:";
	cin>>y;
	cout<<"Enter Wife's Salary:";
	cin>>b;
	husband h(x,a);
	wife w(y,b);
	addsalary(h,w);
	getch();
}