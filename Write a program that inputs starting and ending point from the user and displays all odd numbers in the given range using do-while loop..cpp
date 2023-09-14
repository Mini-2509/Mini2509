/*
Write a program that inputs starting and ending point from the user and 
displays all odd numbers in the given range using do-while loop.
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Input the starting number: ";cin>>a;
	cout<<"Input the ending number: ";cin>>b;
	if (a%2==0)
	{a++;}
	cout<<"Odd numbers: "<<endl;
	do 
	{
		cout<<a<<", ";
		a+=2;
	} while(a<=b);

}