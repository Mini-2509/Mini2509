/*
Write a program that inputs a number and finds 
whether it is even or odd using if-else structure.
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
 	int num;
	cout<<"Input a number: ";cin>>num;
	if(num%2==0)
	 cout<<num<<" is an even number."<<endl;
	else
	 cout<<num<<" is an odd number."<<endl;
}
