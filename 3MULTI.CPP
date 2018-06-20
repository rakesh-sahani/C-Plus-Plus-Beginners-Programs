#include<stdio.h>
#include<conio.h>
void main()
{
	int i,m,n,sum=0;
	clrscr();
	printf("Enter the two no. M and N to be Multiplied...:\n");
	scanf("%d\n%d",&m,&n);
	printf("%d*%d\n",m,n);
	i=0;
	while(i!=n)
	{
		sum=sum+m;
		i++;
	}
	printf("The value is : %d",sum);
	getch();
}
