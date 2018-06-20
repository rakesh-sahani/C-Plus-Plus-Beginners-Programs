#include<iostream.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	cout<<"Enter the year...";
	cin>>year;
	if(year%4==0)
		cout<<"\n\nIt is a leap year...";
	else
		cout<<"\n\nIt is not a leap year..";
	getch();
}
