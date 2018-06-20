#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i;
	char c;
	clrscr();
	cout<<"Enter the limit....:";
	cin>>n;
	cout<<"\n\nEnter the character..:";
	cin>>c;
	for(i=0;i<n;i++)
	{
		cout<<c<<"\n";
	}
	getch();
}
