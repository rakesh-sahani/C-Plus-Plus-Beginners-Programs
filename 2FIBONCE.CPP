#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,i,l;
	clrscr();
	printf("Enter the limit...");
	scanf("%d",&l);
	printf("\n%d",a);
	printf("\n%d",b);
	for(i=0;i<l;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n%d",c);
	}
	getch();
}
