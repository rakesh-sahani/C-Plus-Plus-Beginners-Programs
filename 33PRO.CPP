#include<iostream.h>
#include<conio.h>
class product
{
	protected:
	char * prod_name;
};

class sales
{
	protected:
	int q_s_1,q_s_2;
};

class company : private product, private sales
{
	public:
	void input()
	{
		prod_name=new char[20];
		cout<<"\nEnter the Product Name :";
		cin>>prod_name;
		cout<<"\nEnter the Quater Sale 1 :";
		cin>>q_s_1;
		cout<<"\nEnter the Quater Sale 2 :";
		cin>>q_s_2;
	}

	void display()
	{
		cout<<"\n\nProduct Name is :"<<prod_name;
		cout<<"\nSum of Sales of Quater 1 and Quater 2: "<<q_s_1+q_s_2;
	}
};

void main()
{
	clrscr();
	company c;
	c.input();
	c.display();
	getch();
}
