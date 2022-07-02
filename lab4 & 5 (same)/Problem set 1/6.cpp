/*
Problem set 1
q6:  Write a C++ program to find sum of all-natural numbers
between 1 to n.
*/



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,i=1,sum=0;
	cout<<"Enter any Number = ";
	cin>>n1;
	while(i<=n1)
	{
		sum=sum+i;
		i++;
	}
	cout<<"Sum of numbers up to "<<n1<<" = "<<sum;
	getch();
	return 0;
}
