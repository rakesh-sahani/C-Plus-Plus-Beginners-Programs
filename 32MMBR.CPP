#include<iostream.h>
#include<conio.h>
class house
{
	private:
	int len,breadth;
	protected:
	int no_of_door,no_of_win;
	public:
	house()	{}
	house(int l,int b)
	{
		len=l;
		breadth=b;
	}

	void cal_area()
	{
		cout<<"\nEnter the Value of Length :";
		cin>>len;
		cout<<"Enter the Value of Breadth :";
		cin>>breadth;
		cout<<"Area is :"<<len*breadth;
	}
};

class door : private house
{
	int door_cost;
	public:
	door(int d_cost)
	{
		door_cost=d_cost;
	}

	void input_door()
	{
		cout<<"\n\nEnter the Number of Doors :";
		cin>>no_of_door;
	}
	void cal_door_cost()
	{
	cout<<"Enter the Cost of a Single door :";
	cin>>door_cost;
	cout<<"Total Cost of Doors :"<<no_of_door*door_cost;
	}
};

class win: private house
{
	int win_cost;
	public:
	win(int w_cost)
	{
		win_cost=w_cost;
	}
	void input_window()
	{
		cout<<"\n\nEnter the Number of Windows :";
		cin>>no_of_win;
		cout<<"Enter the Cost of a Single Windows :";
		cin>>win_cost;
	}

	void cal_win_cost()
	{
		cout<<"Total Cost of Window :"<<no_of_win*win_cost;
	}
};
void main()
{
	clrscr();
	house h(200,100);
	h.cal_area() ;
	door d(1000);
	d.input_door();
	d.cal_door_cost();
	win w(2000);
	w.input_window();
	w.cal_win_cost();
	getch();
}
