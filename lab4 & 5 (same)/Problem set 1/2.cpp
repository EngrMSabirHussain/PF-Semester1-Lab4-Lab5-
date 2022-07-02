/*
Problem set 1
q2: Write a C++ program to print all-natural numbers in reverse
(from n to 1).  
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"Enter nth term of Natural number = ";
	cin>>n;
	while(n>=i)
	{
		cout<<n<<"\t";
		n--;
	}
	getch();
	return 0;
}
