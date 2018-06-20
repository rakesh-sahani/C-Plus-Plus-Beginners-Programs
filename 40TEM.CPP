#include<iostream.h>
#include<conio.h>
template <class t>
void swap(t &a,t &b)
{
	t temp;
	temp=a;
	a=b;
	b=temp;
}
void main()
{
	int i=10,j=20;
	double m=5.5,n=6.7;
	char ch='x',ch1='y';
	clrscr();
	cout<<"The Numbers are :" <<"\n"<<i<<"\n"<<j<<"\n";
	swap(i,j);
	cout<<"The Double are :" <<"\n"<<m<<"\n"<<n<<"\n";
	swap(m,n);
	cout<<"The Characters are :" <<"\n"<<ch<<"\n"<<ch1<<"\n\n";
	swap(ch,ch1);
	cout<<"The Numbers After Swapping :"<<"\n"<<i<<"\n"<<j<<"\n";
	cout<<"The Double After Swapping :"t<<"\n"<<m<<"\n"<<n;
	cout<<"\n"<<"The Characters After Swapping :"<<"\n"<<ch<<"\n"<<ch1;
	getch();
}
