#include<iostream.h>
#include<conio.h>
class dim;
class shape
{
	int area;
	public:
	friend void area(shape &s,dim &d);
	void output();
};

class dim
{
	int l,b;
	public:
	friend void area(shape &s,dim &d);
	void input();
};

void dim::input()
{
	cout<<"\nEnter the Length : ";
	cin>>l;
	cout<<"\nEnter the Breadth : ";
	cin>>b;
}

void area(shape &s,dim &d)
{
	s.area=d.l*d.b;
}

void shape::output()
{
	cout<<"\nThe calculated Area is : "<<area;
}

void main()
{
	dim d;
	shape s;
	clrscr();
	d.input();
	area(s,d);
	s.output();
	getch();
}