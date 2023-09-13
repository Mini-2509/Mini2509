/*
write a program that converts a person’s height from inches to centimeters using the formula 2.54 * height.
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(1);
	float height;
	cout<<"Input your haight in inches: ";
	cin>>height;
	cout<<height<<" inches = "<<2.54 * height<<" centimeters."<<endl;
}
