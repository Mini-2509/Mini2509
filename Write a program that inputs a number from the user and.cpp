/*
Write a program that inputs a number from the user and 
displays the factorial of that number using do-while loop.
*/
#include<iostream>
using namespace std;
int main()
{
	int num,a=1,count=1;
	cout<<"Input a number: ";cin>>num;
	cout<<"Factorial: "<<endl;
	a=num;
	do
	{
		cout<<a;
		if (a>1)
		 cout<<" x ";
		count*=a;
		a--;
	}while(a>0);
	cout<<" = "<<count;
}
