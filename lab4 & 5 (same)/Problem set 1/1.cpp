/*
Problem set 1
q1:  Write a C++ program to print all-natural numbers from 1 to n.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"Enter nth term of Natural number = ";
	cin>>n;
	while(i<=n)
	{
		cout<<i<<"\t";
		i++;
	}
	getch();
	return 0;
}
