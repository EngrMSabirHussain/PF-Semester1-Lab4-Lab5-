/*
problem set 2
Q5:   Write a C++ program to find sum of first and last digit of a number.
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,l,sum;
	cout<<"Enter any number = ";
	cin>>n1;
	l=n1%10;
	while(n1>9)
	{
		n1=n1/10;
	}
	cout<<"First Number is "<<n1<<endl;
	cout<<"Last Number is "<<l<<endl;
	sum=l+n1;
	cout<<"Sum of First & Last Number = "<<sum;
	getch();
	return 0;
}
