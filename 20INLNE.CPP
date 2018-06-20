#include<iostream.h>
#include<conio.h>
inline void greater(int,int);
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter the value of a...";
	cin>>a;
	cout<<"\n\n"<<"Enter the value of b...";
	cin>>b;
	cout<<"\n\n";
	greater(a,b);
	getch();
}

void greater(int a, int b)
{
	if(a>b)
		cout<<"A is greater than B";
	else
		cout<<"B is greater than A";
}
