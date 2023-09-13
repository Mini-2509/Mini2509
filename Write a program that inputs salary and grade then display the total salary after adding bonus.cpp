/*
Write a program that inputs salary and grade. 
It adds 50% bonus if grade is greater than 15. 
It adds 25% bonus if grade is 15 or less and then displays the salary.
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
	int salary, grade;
	cout<<"Input your salary: ";cin>>salary;
	cout<<"Input your grade (4-22): ";cin>>grade;
	if(grade<=22&&grade>=4)
	{
		if(grade>15)
		cout<<"Your total salary is "<<salary+(salary*0.5)<<endl;
		else if(grade<=15)
		cout<<"Your total salary is "<<salary+(salary*0.25)<<endl;
	}
	else
	cout<<"Invalid input.\nExiting...";
}
