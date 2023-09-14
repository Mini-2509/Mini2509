/*
Write a program that inputs a character and 
displays whether it is vowel or consonant using switch statement
*/
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Input a character: ";cin>>ch;
	switch(ch)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			cout<<"\'"<<ch<<"\' is a vowel character."<<endl;
			break;
		default:
			cout<<"\'"<<ch<<"\' is a consonant character."<<endl;
			
	}		
}
