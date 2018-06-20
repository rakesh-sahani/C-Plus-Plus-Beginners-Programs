#include<conio.h>
#include<iostream.h>
class shape
{
	public :
	virtual void draw() = 0;
};
class circle:public shape
{
	public :
	void draw()
	{
		cout<<"\n"<<"Area Of a Circle"<<"\n";
	}
};
class triangle:public shape
{
	public :
	void draw()
	{
		cout<<"\n"<<"Area Of a triangle"<<"\n";
	}
};
class Square:public shape
{
	public :
	void draw()
	{
		cout<<"\n"<<"Area Of a Square"<<"\n";
	}
};

void main()
{
	clrscr();
	circle c;
	triangle t;
	Square s;
	c.draw();
	t.draw();
	s.draw();
	getch();
}
