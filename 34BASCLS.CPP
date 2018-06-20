#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class player
{
	int exp;
	char name[20];
	char tos[20];
	public:
	void input()
	{
		cout<<"\nEnter The Name of the Player :";
		cin>>name;
		gets(name);
		cout<<"\nEnter the Type of Sport :";
		cin>>tos;
		gets(tos);
		cout<<"\nEnter The Experience :";
		cin>>exp;
	}
};

class zone : virtual public player
{
	protected:
	int rank_z;
	public:
	void input_rank_z()
	{
		cout<<"\n\nEnter the Rank of the Player in Zone level :";
		cin>>rank_z;
	}
};

class national : virtual public player
{
	protected:
	int rank_n;
	public:
	void input_rank_n()
	{
		cout<<"\nEnter the Rank of the Player in National Level :";
		cin>>rank_n;
	}
};

class international : public zone, public national
{
	public:
	void total_rank()
	{
		int total;
		total=rank_z+rank_n;
		total=total/2;
		if(total<5)
			cout<<"\n\n\nEligible for International Level.";
		else
			cout<<"\nNot Eligible for International Level.";
	}
};

void main()
{
	clrscr();
	international in;
	in.input();
	in.input_rank_z();
	in.input_rank_n();
	in.total_rank();
	getch();
}
