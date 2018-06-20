#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[10],rev[10];
	int i,l=0,j,k;
	clrscr();
	printf("Enter the string....\n\t\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("\n\nThe length is...%d\n\n\n",l);
	for(j=l-1,k=0;j>=0;j--,k++)
	{
		rev[k]=str[j];
	}
	rev[k]='\0';
	puts(rev);
	getch();
}
