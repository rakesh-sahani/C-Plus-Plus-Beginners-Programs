#include<iostream.h>
#include<conio.h>
class distance
{
	int inch,feet;
	public:
	distance() { }
	distance(int f, int i)
	{
		feet=f;
		inch=i;
	}
	distance operator > (distance);
	void display();
};

void distance :: display()
{
	cout<<"\n\nLarger distance is :";
	cout<<"\nFeet : "<<feet;
	cout<<"\nInch : "<<inch;
}

distance distance :: operator > (distance obj)
{
	distance temp;
	if(feet>=obj.feet)
	{
		temp.feet=feet;
		temp.inch=inch;
		return temp;
	}
	else
	{
		temp.feet=obj.feet;
		temp.inch=obj.inch;
		return temp;
	}
}

void main()
{
	int ft1,ft2,in1,in2;
	clrscr();
	cout<<"Enter the First Distance.\n";
	cout<<"Enter the Value for Feet :";
	cin>>ft1;
	cout<<"Enter the Value for Inches :";
	cin>>in1;
	cout<<"\n\nEnter Second Distance.";
	cout<<"\nEnter the Value for Feet :";
	cin>>ft2;
	cout<<"Enter the Value for Inche :";
	cin>>in2;
	distance ob1(ft1,in1), ob2(ft2,in2);
	ob1=ob1>ob2;
	ob1.display();
	getch();
}
