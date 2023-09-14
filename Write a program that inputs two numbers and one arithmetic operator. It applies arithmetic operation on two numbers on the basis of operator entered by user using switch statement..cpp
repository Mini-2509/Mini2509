/*
Write a program that inputs two numbers and one arithmetic operator. 
It applies arithmetic operation on two numbers on the basis of operator 
entered by user using switch statement.
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,op;
	cout<<"Enter 1st number: ";cin>>a;	
	cout<<"Enter 2nd number: ";cin>>b;
	cout<<"Operators:\n1- Addition\n2- Subtraction\n3- division\n4- Multiplication\nChoose (1-4):   ";cin>>op;
	switch(op)
	{
		case 1:
			cout<<a<<" + "<<b<<" = "<<a+b<<endl;
			break;
		case 2:
			cout<<a<<" - "<<b<<" = "<<a-b<<endl;
			break;
		case 3:
			if(b!=0)
				cout<<a<<" / "<<b<<" = "<<a/b<<endl;
			else
				cout<<"Invalid input\nExiting...";
			break;
		case 4:
			cout<<a<<" * "<<b<<" = "<<a*b<<endl;
			break;
		default:
			cout<<"Invalid operator."<<endl;
	}
}
