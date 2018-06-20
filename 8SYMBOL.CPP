#include<iostream.h>
#include<conio.h>
void main()
{
	char n;
	clrscr();
	cout<<"Enter the character.....";
	cin>>n;
	if(n>='a' && n<='z')
		cout<<"\n\nEntered value is a character";
	else if(n>='0' && n<='9')
		cout<<"\n\nEntered character is a digit";
	else
		cout<<"\n\nEntered character is a symbol";
	getch();
}
