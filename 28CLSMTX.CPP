#include<iostream.h>
#include<conio.h>
class matrix
{
	int row;
	int col;
	int **m;
	public:
	matrix(int r,int c);
	void input();
	void display();
};

void matrix::matrix(int r,int c)
{
	row=r;
	col=c;
	for(int i=0;i<row;i++)
	{
		*m=new int[row];
		*m++;
	}
}

void matrix::input()
{
	cout<<"\nEnter the Elements in the Matrix :\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>m[i][j];
		}
	}
}

void matrix::display()
{
	cout<<"\nElements of matrix are:"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<m[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void main()
{
	int x,y;
	clrscr();
	cout<<"\nEnter the Number of Rows:";
	cin>>x;
	cout<<"Enter the Number of Columns:";
	cin>>y;
	matrix a(x,y);
	a.input();
	a.display();
	getch();
}
