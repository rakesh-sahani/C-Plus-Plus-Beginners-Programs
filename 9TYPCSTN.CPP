#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
void main()
{
	double a,b;
	int ch, sum,dif,mult,div;
	clrscr();
	cout<<"Enter the value of a: \n";
	cin>>a;
	cout<<"Enter the value of b: \n";
	cin>>b;
	cout<< "\n Choices are: \n 1. Add\n 2.Subtract\n 3.Multiplication\n 4.Division\n 5.Exit";
	cout<<"\nEnter the choice of user: \n";
	cin>>ch;
	switch(ch)
	{
	case 1: sum=a+b;
		cout<<"The Sum is: \t"<<sum;
		break ;
	case 2: dif=a-b;
		cout<<"The Difference is : \t"<<dif;
		break;
	case 3: mult=a*b;
		cout<<"The Multiplication result is: \t"<<mult;
		break;
	case 4: div=a/b;
		cout<<"The Division result is: \t"<<div;
		break;
	case 5: exit(1);
		break;
	default: cout<<"Entered Wrong Choice";
	}
	getch();
}
