#include<iostream.h>
#include<conio.h>
void init(int=1,char []="abc",char []="BCA");
void main()
{
	int id;
	char name[10],course[10];
	clrscr();
	cout<<"\nEnter The Id :";
	cin>>id;
	cout<<"Enter The Name :";
	cin>>name;
	cout<<"Enter The Course:";
	cin>>course;
	cout<<"\n\n\nPassing Parameters...!\n";
	init(id,name,course);
	cout<<"\n\n\nWithout passing parameters...!\n\n";
	init();
	getch() ;
}

void init(int id,char name[],char course[])
{
cout<<"\nID is: "<<id;
cout<<"\nNAME is: "<<name;
cout<<"\nCOURSE is:"<<course;
}
