/*
Write a program that inputs three numbers and
displays the smallest number by using nested if condition.
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Input 1st number: ";cin>>a;
	cout<<"Input 2nd number: ";cin>>b;
	cout<<"Input 3rd number: ";cin>>c;
	if(a<b)
	{
		if(a<c)
			cout<<a<<" is the smallest number."<<endl;
		else
			cout<<c<<" is the smallest number."<<endl;
	}
	else if(b<a)
	{
		if(b<c)
			cout<<b<<" is the smallest number."<<endl;
		else
			cout<<c<<" is the smallest number."<<endl;
	}
}
