#include<stdio.h>
#include<conio.h>
#include<iostream.h>
struct distance
{
	float feet;
	float inches;
	void display()
	{

		cout<<"The Feet...:"<<feet;
		cout<<"\nThe Distance...:"<<inches;
	}
}d1,d2,d3;

void add()
{

	d3.feet=d1.feet+d2.feet;
	d3.inches=d1.inches+d2.inches;
}

void main()
{
	clrscr();
	cout<<"Enter The Feet for 1st...:";
	cin>>d1.feet;
	cout<<"Enter The Inches for the 1st....";
	cin>>d1.inches;
	cout<<"\nEnter the Feet for 2nd....";
	cin>>d2.feet;
	cout<<"Enter the inches for the 2nd....";
	cin>>d2.inches;
	cout<<"\nCorresponding Values....\n";
	add();
	d3.display();
	getch();
}

