/*
Write a program that inputs two numbers and exchange their values the program 
should display the values before and after exchange
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	float extra,a,b;
	cout<<"Input the values: "<<endl;	
	cout<<"a =  ";cin>>a;	
	cout<<"b =  ";cin>>b;
	cout<<"The values of a & b before swaping: "<<endl;
	cout<<"a = "<<a<<endl;	
	cout<<"b = "<<b<<endl;
	//swaping values by using a temporary variable named extra
	extra = a;
	a=b;
	b=extra;
	cout<<endl;
	cout<<"The values of a & b after swaping: "<<endl;
	cout<<"a = "<<a<<endl;	
	cout<<"b = "<<b<<endl;
}
