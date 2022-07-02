/*
problem set 2
Q2:   Write a C++ program to print multiplication table of any
number.
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,i=1;
	cout<<"Enter any Table Number = ";
	cin>>n1;
	while(i<=10)
	{
		cout<<n1<<" * "<<i<<" = "<<n1*i<<endl;
		i++;
	}
	getch();
	return 0;
}
