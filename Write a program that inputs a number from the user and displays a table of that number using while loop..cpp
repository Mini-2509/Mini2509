#include<iostream>
using namespace std;
int main()
{
	int num,a=0;
	cout<<"Input a number: ";cin>>num;
	while(a<=10)
	{
		cout<<num<<" x "<<a<<" = "<<num*a<<endl;
		a++;
	}
}
