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
	if(num>0)
		cout<<num<<" is a positive number.";
	else if(num<0)
		cout<<num<<" is a negative number.";
	else
	    cout<<num<<" is zero.";
}
