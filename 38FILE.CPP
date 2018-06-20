#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
void main()
{
	char name[20];
	int marks;
	clrscr();
	cout<<"Enter The Information :"<<"\n";
	cout <<"Name : "<<"\t";
	cin>>name;
	cout<<"Marks: "<<"\t";
	cin>>marks;
	cout<<"\n";
	ofstream out("A.txt", ios::out/ios::trunc);
	cout<<"Display The Contents of a file: A.txt"<<"\n";
	out<<name<<" ";
	cout<<"Name is :"<<"\t"<<name<<"\n";
	out<<marks;
	cout<<"Marks is: "<<"\t"<<marks;
	out.close();
	getch();
}
