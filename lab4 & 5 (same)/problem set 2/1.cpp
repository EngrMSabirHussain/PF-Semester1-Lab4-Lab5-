/*
problem set 2
Q1:  Write a C+ program to find sum of all odd numbers
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
		if(i%2==1)
		{
		 sum=sum+i;	
		}
		
		i++;
	}
	cout<<"Sum of Odd numbers up to "<<n1<<" = "<<sum;
	getch();
	return 0;
}
