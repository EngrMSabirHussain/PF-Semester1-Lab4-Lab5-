/*
Problem set 1
q5:  Write a C++ program to print all odd number
between 1 to 100.
*/



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i=1;
	cout<<"All Even number from 1 to 100 "<<endl<<endl;
	while(i<=100)
	{
		if(i%2==1)
		{
			cout<<i<<"\t";
		}
	i++;	
	}
	getch();
	return 0;
}
