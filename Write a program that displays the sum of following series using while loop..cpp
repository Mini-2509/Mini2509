/*
Write a program that displays the sum of following series using while loop.
1 + 1 / 2 + 1 / 4 + 1 / 6 +  . . . . . . . + 1 / 100.
*/
#include<iostream>
using namespace std;
int main()
{
	int b=1;
	double a=0;
	cout<<"1 + 1 / 2 + 1 / 4 + 1 / 6 +  . . . . . . . + 1 / 100."<<endl;
	while(b<=100)
	{
		a+=1.0/b;
		b+=2;
	}
	cout<<endl<<"Sum of series: "<<a;	
}
