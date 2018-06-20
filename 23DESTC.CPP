#include<iostream.h>
#include<conio.h>
class account
{
	private:
	int acc_no;
	int acc_bal;
	public:	account() //by default constructor.
		{
			cout<<"\n\nDefault Constructor.\n\n";
			cout<<"Enter Account Number :";
			cin>>acc_no;
			cout<<"\nEnter Account Balance :";
			cin>>acc_bal;
		}
	public:	account(int a,float b) //parameterised constructor.
		{
			cout<<"\n\nConstructor with parameter.\n\n";
			cout<<"Enter Account Number :";
			cin>>a;
			cout<<"\nEnter Account Balance :";
			cin>>b;
		}
	public:	void display()
		{
			cout<<"\n\nAccount no is :"<<acc_no;
			cout<<"\nAccount Balance is:"<<acc_bal;
		}
};

void main()
{
	clrscr();
	account a1;
	a1.display();
	getch();
}