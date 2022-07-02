/*
Problem set 1
q4:  Write a C++ program to print all even numbers between
1 to 100.
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
		if(i%2==0)
		{
			cout<<i<<"\t";
		}
	i++;	
	}
	getch();
	return 0;
}
