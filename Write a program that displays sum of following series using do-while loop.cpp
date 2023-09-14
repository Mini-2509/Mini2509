/*
Write a program that displays sum of following series using do-while loop.
1 + 1 / 2 + 1 / 4 + 1 / 6 +  . . . . . . . + 1 / 100.
*/
#include<iostream>
using namespace std;
int main()
{
	int b=1;
	double a=0;
	cout<<"1 + 1 / 2 + 1 / 4 + 1 / 6 +  . . . . . . . + 1 / 100."<<endl;
	do
	{
		a+=1.0/b;
		b+=2;
	}while(b<=100);
	cout<<endl<<"Sum of series: "<<a;	
}
