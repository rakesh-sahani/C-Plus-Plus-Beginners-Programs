#include<iostream.h>
#include<conio.h>
class A
{
	int *p;
	int size;
	public:A(int s)
	{
		size=s;
	p=new int[size];
	}
	public: void input()
	{
		cout<<"Enter the elements of Array :\n";
		for(int i=0;i<size;i++)
		{
			cin>>p[i];
		}
	}
	public: void display()
	{
		for(int i=0;i<size;i++)
		{
			cout<<"\n"<<p[i];
		}
		delete p;
		cout<<"\n\nMemory deleted.";
		for(i=0;i<size;i++)
		{
			cout<<"\n"<<p[i];
		}
	}
};

void main()
{
	clrscr();
	int size;
	cout<<"Enter the size:";
	cin>>size;
	A o(size);
	o.input();
	o.display();
	getch();
}
