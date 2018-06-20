#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s1=0,s2=0,c1=0,c2=0,l,a[20];
	clrscr();
	printf("Enter the limit...:");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
		{
			if((a[i]%2)==0)
			{
				c1++;
				s1=s1+a[i];
			}
			else
			{
				c2++;
				s2=s2+a[i];
			}
		}

	printf("count of even nos are..%d and sum is....%d",c1,s1);
	printf("\n\ncount of odd nos are..%d and sum is....%d",c2,s2);
	getch();
}
