/*
Write a program that inputs temperature and displays a message according to following table:
Temperature				Message
Greater than 35			Hot Day
Between 25 and 25			Pleasant Day
Less than 25				Cool Day
*/
#include<iostream>
using namespace std;
int main()
{
	float temp;
	cout<<"Input the temperature: ";cin>>temp;
	if(temp>35)
		cout<<"Hot Day"<<endl;
	else if (temp>=25&&temp<=35)
		cout<<"Pleasent Day"<<endl;
	else 
		cout<<"Cool Day"<<endl;	
}
