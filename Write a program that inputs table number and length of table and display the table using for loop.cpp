/*
Write a program that inputs table number and length of table and 
then displays the table using for loop.
*/
#include<iostream>
using namespace std;
int main()
{
	int a,num;
	cout<<"Input the table number: ";cin>>num;
	cout<<"Input the length: ";cin>>a;
	for(int i=1;i<=a;i++)
	{
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
		if(i%10==0)
		cout<<endl;
	}
	
}
