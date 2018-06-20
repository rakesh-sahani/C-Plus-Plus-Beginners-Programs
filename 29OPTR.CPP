#include<iostream.h>
#include<conio.h>
class cmplx
{
	public:
	int rl;
	int imgn;
	public:
	cmplx() { }
	public:
	cmplx(int r, int i)
	{
		rl=r;
		imgn=i;
	}
	public:
	void show()
	{
		cout<<"\nReal Number is :"<<rl;
		cout<<"\nImaginary Number is :"<<imgn;
	}
	cmplx operator - (cmplx c);
};

cmplx cmplx :: operator - (cmplx c)
{
	rl=rl-c.rl;
	imgn=imgn-c.imgn;
	return *this;
}

void main()
{
	clrscr();
	cmplx c1(7,9),c2(5,3);
	c1=c1-c2;
	c1.show();
	getch();
}
