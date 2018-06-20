#include<iostream.h>
#include<conio.h>
void main()
{
	int first,second;
	clrscr();
	cout<<"Enter the two digit no. you want to get displayed...";
	cin>>first>>second;
	switch(first%10)
	{
		case 1: cout<<"\nTen";
			break;
		case 2: cout<<"\nTwenty";
			break;
		case 3: cout<<"\nThirty";
			break;
		case 4: cout<<"\nFourty";
			break;
		case 5: cout<<"\nFifty";
			break;
		case 6: cout<<"\nSixty";
			break;
		case 7: cout<<"\nSeventy";
			break;
		case 8: cout<<"\nEighty";
			break;
		case 9: cout<<"\nNinety";
			break;
		default:cout<<"\n\nEntered the wrong case..";
	}
	switch(second%10)
	{
		case 0:cout<<"\tZero";
		       break;
		case 1:cout<<"\tOne";
		       break;
		case 2:cout<<"\tTwo";
		       break;
		case 3:cout<<"\tThree";
		       break;
		case 4:cout<<"\tFour";
		       break;
		case 5:cout<<"\tFive";
		       break;
		case 6:cout<<"\tSix";
		       break;
		case 7:cout<<"\tSeven";
		       break;
		case 8:cout<<"\tEight";
		       break;
		case 9:cout<<"\tNine";
		       break;
		default:cout<<"\n\nEntered the wrong case..";
	}
	getch();
}
