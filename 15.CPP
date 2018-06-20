#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],i,l;
	clrscr();
	cout<<"Enter the limit....";
	cin>>l;
	for(i=0;i<l;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			cout<<"\n\n"<<"Number is less than 0..";
			break;
		}
		else
		continue;
	}
	getch();
}
