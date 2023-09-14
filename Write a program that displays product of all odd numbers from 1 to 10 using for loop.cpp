/*
Write a program that displays product of all odd numbers from 1 to 10 using for loop
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b=1,c=0;
	cout<<"Odd numbers: ";
	for(a=1;a<=10;a+=2)
	{
		cout<<a<<" ";
		b*=a;
	}
	cout<<endl<<"The product of all odd numbers is "<<b;
}