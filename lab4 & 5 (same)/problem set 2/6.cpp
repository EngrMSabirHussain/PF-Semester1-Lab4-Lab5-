/*
problem set 2
Q6:   Write a C++ program to swap first and last digits of a number.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,l,f,s,fn;
	cout<<"Enter any Number = ";
	cin>>n;
	l=n%10;
	while(n>9)
	{
		n=n/10;
		
		
	}
	f=n;	
	cout<<"First Number  = "<<f<<endl;
	cout<<"Last Number = "<<l<<endl;
	cout<<endl<<"After Swaping Number "<<endl<<endl;
	s=f;
	f=l;
	l=s;
	cout<<"First Number  = "<<f<<endl;
	cout<<"Last Number = "<<l<<endl;
	getch();
	return 0;
}
	
	
