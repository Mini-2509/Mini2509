//Write a program that inputs name, age and address from the user and display it on the screen.
#include<iostream>
//use string library to use string datatype
#include<string>
using namespace std;
int main()
{
	int age;
	//Declaring variables using string datatype
	string name, address;
	cout<<"Enter your name: ";
	//Use getline to read a line of text from an input 
	getline(cin,name);
	cout<<"Entr your address: ";
	getline(cin,address);
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Your name is "<<name<<endl;
	cout<<"Your age is "<<age<<endl;
	cout<<"Your address is "<<address<<endl;
	
}
