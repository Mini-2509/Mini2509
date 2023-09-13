/*
Write a program that inputs radius from the user and calculates 
area and circumference of circle using formula Area = pr2.
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
	float radius;
	cout<<"Input the radius of the circle: ";
	cin>>radius;
	cout<<"The area of the circle is "<<M_PI*radius*radius<<endl;
	cout<<"The circumference of the circle is "<<M_PI*2*radius;
	
}
