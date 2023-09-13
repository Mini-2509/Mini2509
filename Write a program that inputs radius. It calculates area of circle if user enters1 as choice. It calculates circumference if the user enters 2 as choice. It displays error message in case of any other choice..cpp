/*
Write a program that inputs radius. 
It calculates area of circle if user enters1 as choice. 
It calculates circumference if the user enters 2 as choice. 
It displays error message in case of any other choice.
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
	float r;
	int n;
	cout<<"Input the radius of the circle: ";cin>>r;
	cout<<"What do you want to calculate:\n1- Area of circle\n2- Circumference of the circle\n";
	while(true)
	{
		cout<<"Choose (1-2): ";cin>>n;
		if(n==1)
		 {
		 	cout<<"The Area of the circle is "<<M_PI*r*r<<endl;
		 	break;
		 }
		else if(n==2)
		 {
		 	cout<<"The Circumference of the circle is "<<M_PI*2*r<<endl;
		 	break;
		 }
		cout<<"Invalid choice, try again"<<endl<<endl;
		 
	}
	
}
