/*
Problem set 1
q7:   Write a C++ program to find sum of all even numbers
	  between 1 to n.
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,i=2,sum=0;
	cout<<"Enter any Number = ";
	cin>>n1;
	while(i<=n1)
	{
		if(i%2==0)
		{
		 sum=sum+i;	
		}
		
		i++;
	}
	cout<<"Sum of Even numbers up to "<<n1<<" = "<<sum;
	getch();
	return 0;
}
