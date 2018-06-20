#include<iostream.h>
#include<conio.h>
int sum(int);
void main()
{
	int a,result;
	clrscr();
	cout<<"Enter the number...";
	cin>>a;
	cout<<"\n\n";
	result=sum(a);
	cout<<"The Sum of the Digit is.."<<result;
	getch();
}

int sum(int a)
{
	int r;
	if(a<=9)
		return a;
	else
		r=a%10;
		return(r+sum(a/10));

}
