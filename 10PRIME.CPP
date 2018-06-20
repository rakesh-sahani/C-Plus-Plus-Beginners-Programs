#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n,i,flag=0;
	clrscr();
	cout<<"Enter the number:";
	cin>>n;
	for(i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Number is Not Prime";
	}
	else
	{
		cout<<"Number is Prime ";
	}
	getch();
}
