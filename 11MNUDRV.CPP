#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int ch;
	clrscr();
	cout<<"Enter the case to be executed...\n1.\tEligibility criteria for voting\n2.\tEnter ten numbers and give their sum\n3.\tExit\n Enter THe Choice\n";
	cin>>ch;
	switch(ch)
	{
		case 1:int age;
			cout<<"\n\nEnter the age....";
			cin>>age;
			if(age>=18)
				cout<<"\n\nEligible for voting";
			else
				cout<<"\n\nNot eligible for voting";
			break;
		case 2:int i,n,s1=0,s2=0,c1=0,c2=0,l,a[20];
			cout<<"\nEnter the 10 numbers...:\n";
			for(i=0;i<10;i++)
			{
				cin>>a[i];
			}
			for(i=0;i<10;i++)
			{
				if((a[i]%2)==0)
				{
					c1++;
					s1=s1+a[i];
				}
				else
				{
					c2++;
					s2=s2+a[i];
				}
			}
			cout<<"\nsum of even numbers is....";
			cout<<s1;
			cout<<"\n\nsum of odd numbers is....";
			cout<<s2;
			break;
		case 3:exit(0);
		       break;
		default:
			cout<<"You entered the wrong case..";
		}
	getch();

}
