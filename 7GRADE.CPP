#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c,sum=0;
	double avg,per;
	clrscr();
	cout<<"Enter A....\n";
	cin>>a;
	cout<<"\nEnter B....\n";
	cin>>b;
	cout<<"\nEnter c...\n";
	cin>>c;
	sum=a+b+c;
	per=(sum*100)/300;
	cout<<"\n\nsum of three numbers is.."<<sum;
	cout<<"\n\nAverage is...."<<per;
	if(per>50 && per<60)
		cout<<"\n\nGrade is D";
	else if(per>60 && per<70)
		cout<<"\n\nGrade is C";
	else if(per>70 && per<85)
		cout<<"\n\nGrade is B";
	else if(per>85)
		cout<<"\n\nGrade is A";
	getch();
}
