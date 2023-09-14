/*
Write a program that inputs three numbers and 
displays the maximum number by using logical operators.
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
	if(a>b&&a>c)
	{
			cout<<a<<" is the maximum number."<<endl;
	}
	else if(b>a&&b>c)
	{
			cout<<b<<" is the maximum number."<<endl;
	}
	else 
		cout<<c<<" is the maximum number."<<endl;
}
