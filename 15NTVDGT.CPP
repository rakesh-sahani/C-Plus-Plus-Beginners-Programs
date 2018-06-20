#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,ar[20];
	clrscr;
	cout<<"Enter The Number ";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		cin>>ar[i];
		if(ar[i]<0)
		{
			cout<<ar[i];
			break;
		}
		else
		continue;
	}
	getch();
}