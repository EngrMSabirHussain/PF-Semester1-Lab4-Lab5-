/*
problem set 2
Q3: Write a C++ program to count number of digits in a number.  
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,n,l=0;
	cout<<"Enter any number = ";
	cin>>n1;
	n=n1;
	while(n1!=0)
	{
		n1=n1/10;
		l++;
	}
	cout<<"Digits in "<<n<<" = "<<l;
	getch();
	return 0;
}

