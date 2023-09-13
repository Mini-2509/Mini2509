/*
Write a program that inputs a three digit number from the user and
 displays it in reverse order. For example if the user enter 123, it displays 321.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a=0,b,c,num;
	while(true)
	{
		cout<<"Input a 3 digit number: ";cin>>num;
		if(num<=999&&num>=100)
		 break;
		cout<<"Invalid input, try again."<<endl<<endl;
	}
	a=a+num%10;
	a=a*100;
	num=num/10;
	a+=(num%10)*10;
	num=num/10;
	a+=num;
	cout<<"The number in reverse: "<<a<<endl;
}
