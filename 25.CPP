#include<iostream.h>
#include<conio.h>
class student
{
	private:
	int roll_no;
	char name[20];
	public:
	void display()
	{
		cout<<"Enter the name :";
		cin>>name;
		cout<<"Enter the roll_no :";
		cin>>roll_no;
		cout<<"\nName = "<<name;
		cout<<"\nRoll_no = "<<roll_no<<"\n\n";
	}
};

void main()
{
	clrscr();
	student *std=new student[5];
	int i;
	for(i=0;i<5;i++)
	{
		std[i].display();
	}
	getch();
}