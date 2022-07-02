/*
Problem set 1
q3:  Write a C ++ program to print all alphabets
from a to z. 
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char f,l;
	cout<<"Enter starting alphabet = ";
	cin>>f;
	cout<<"Enter Last alphabet = ";
	cin>>l;
	while(f<=l)
	{
		cout<<f<<"\t";
		f++;
	}
	getch();
	return 0;
}
