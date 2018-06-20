#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,j,k=1;
	clrscr();
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i+j>=3)
			{
				cout<<k;
				k++;
			}
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	getch();
}
