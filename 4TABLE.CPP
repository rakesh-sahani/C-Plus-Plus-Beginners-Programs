#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,table;
	clrscr();
	printf("Enter the number......");
	scanf("%d",&n);
	printf("\nThe table is.....");
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("\n%d*%d=%d",n,i,table);
	}
	getch();
}

