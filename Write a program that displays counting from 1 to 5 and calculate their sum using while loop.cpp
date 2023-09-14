//Write a program that displays counting from 1 to 5 and their sum using while loop.
#include<iostream>
using namespace std;
int main()
{
	int a=1,c=0;
	while(a<=5) 
	{
		cout<<a<<endl;
		a++;
		c+=a;
	}
	cout<<"The sum is : "<<c;
}
