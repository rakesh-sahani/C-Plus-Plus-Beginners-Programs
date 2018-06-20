#include<iostream.h>
#include<string.h>
#include<conio.h>
class string
{
	int len;
	char str[20];
	public:
	string(char s[],int l)
	{
		strcpy(str,s);
		len=l;
	}
	void operator==(string);
};

void string :: operator==(string obj)
{
	int i,j,f;
	f=0;
	if(len==obj.len)
	{
		for(i=0,j=0;i<len;i++,j++)
		{
			if(str[i]!=obj.str[j])
			{
				f=1;
				break;
			}
		}
		if(f==0)
			cout<<"\nEnterd Strings are Equal.";
		else
			cout<<"\nEnterd Strings are Different!!";
	}
	else
		cout<<"\n\nEnter the Strings Correctlly..!!";
};

void main()
{
	int l1,l2;
	char s1[20],s2[20];
	clrscr();
	cout<<"\nEnter the First String :";
	cin>>s1;
	cout<<"Enter the Second String :";
	cin>>s2;
	l1=strlen(s1);
	l2=strlen(s2);
	string ob1(s1,l1),ob2(s2,l2);
	ob1==ob2;
	getch();
}
