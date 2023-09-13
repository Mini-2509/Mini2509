/*
Write a program that finds area of triangle when three sides a, b and c 
of the triangle are given. It inputs values of a, b and c. 
Formula for the area of triangle is Area = v(s(s-a)(s-b)(s-c)) 
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
	double a,b,c,s,Area;
	cout<<"Input the values of the sides of the triangle: "<<endl;
	cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	s=(a+b+c)/2;
	Area =sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"The Area of the triangle: "<<Area<<endl;
}
