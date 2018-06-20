#include<iostream.h>
#include<conio.h>
class distance
{
	private:
	float feet;
	float inch;
	public: void input()
	{
		cout<<"\nEnter the value for Feet...";
		cin>>feet;
		cout<<"\nEnter the value for Inch...";
		cin>>inch;
	}

	public: void display()
	{
		cout<<"\nValue of Feet is :"<<feet;
		cout<<"\nValue of inch is :"<<inch;
	}
	};

void main()
{
	clrscr();
	distance obj1;
	obj1.input();
	obj1.display();
	getch();
}