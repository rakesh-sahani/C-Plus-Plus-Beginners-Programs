#include<iostream.h>
#include<conio.h>
const int size=10;
template<class stack_type> class stack 
{ 
	stack_type stck[size];
	int tos;
	public:
		stack()
		{
			tos=0;
		}

	void push(stack_type ob);
	stack_type pop();
};

template<class stack_type> void stack<stack_type> :: push(stack_type ob)
{
	if(tos==size)
	{
		cout<"\nStack Overflow...!";
		return;
	}
	stck[tos]=ob;
	tos++;
}

template<class stack_type> stack_type stack<stack_type> :: pop()
{
	if (tos==0)
	{
		cout<<"\nStack is Empty...! ";
		return 0;
	}
	else
	{
		tos--;
		return stck[tos];
	}
}

void main()
{
	clrscr();
	stack<char> s1,s2;
	int i;
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	for(i=0;i<2;i++)
	{
		cout<<"\n Pop s1\t"<<s1.pop();
		cout<<"\n Pop s2\t"<<s2.pop();
	}
	getch();
}