/*
Write a program that inputs temperature from the using Celsius and
 converts it into Fahrenheit using the formula F = 9/5 * C + 32. 
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
	float temp;
	cout<<"Input the temperature in celsius: ";
	cin>>temp;
	cout<<temp<<" C = "<<(9.0/5.0)*temp+32<<" F"<<endl;
}
