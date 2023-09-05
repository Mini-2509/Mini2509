#include<iostream>
// Include this for typeid
#include <typeinfo> 
using namespace std;
// Use typeid(variable name).name() for the type name
int main()
{
    // signed int
    int int_val = 25;
    cout << "int_val = " << int_val << ":" << endl;
    cout << "   Type:   " << typeid(int_val).name() << endl; 
    cout << "   Size:   " << sizeof(int) << " bytes" << endl;
    cout<<endl;
	//signed long int
    long long_int = 01234567;
    cout << "long_int = " << long_int << ":" << endl;
    cout << "   Type:   " << typeid(long_int).name() << endl; 
    cout << "   Size:   " << sizeof(long) << " bytes" << endl;
    cout<<endl;
	//signed long long
	long long int longlong_int = 2684139750;
    cout << "longlong_int = " << longlong_int << ":" << endl;
    cout << "   Type:   " << typeid(longlong_int).name() << endl; 
    cout << "   Size:   " << sizeof(long long int) << " bytes" << endl;
	cout<<endl;
	//unsigned int
	unsigned int unsigned_int = 25;
    cout << "unsigned_int = " << unsigned_int << ":" << endl;
    cout << "   Type:   " << typeid(unsigned_int).name() << endl; 
    cout << "   Size:   " << sizeof(unsigned int) << " bytes" << endl;
	cout<<endl;
	//unsigned long
	unsigned long int unsigned_long_int = 9052;
    cout << "unsigned_long_int = " << unsigned_long_int << ":" << endl;
    cout << "   Type:   " << typeid(unsigned_long_int).name() << endl; 
    cout << "   Size:   " << sizeof(unsigned long int) << " bytes" << endl;
	cout<<endl;
	//unsigned long long
	unsigned long long int unsigned_long_long_int = 25;
    cout << "unsigned_long_long_int = " << unsigned_long_long_int << ":" << endl;
    cout << "   Type:   " << typeid(unsigned_long_long_int).name() << endl; 
    cout << "   Size:   " << sizeof(unsigned long long int) << " bytes" << endl;
    cout<<endl;
	//float
    float float_val = 25.24;
    cout << "float_val = " << float_val << ":" << endl;
    cout << "   Type:   " << typeid(float_val).name() << endl; 
    cout << "   Size:   " << sizeof(float) << " bytes" << endl;
    cout<<endl;
	//double
    double double_val = 2.2155;
    cout << "double_val = " << double_val << ":" << endl;
    cout << "   Type:   " << typeid(double_val).name() << endl; 
    cout << "   Size:   " << sizeof(double) << " bytes" << endl;
    cout<<endl;
	//long double
    long double Long_double = 5.236541;
    cout << "Long_double = " << Long_double << ":" << endl;
    cout << "   Type:   " << typeid(Long_double).name() << endl; 
    cout << "   Size:   " << sizeof(long double) << " bytes" << endl;
    cout<<endl;
	//char
    char character = 'A';
    cout << "character = " << character << ":" << endl;
    cout << "   Type:   " << typeid(character).name() << endl; 
    cout << "   Size:   " << sizeof(char) << " bytes" << endl;
    cout<<endl;
	//bool
    bool boolean = 25;
    cout << "boolean = " << boolean << ":" << endl;
    cout << "   Type:   " << typeid(boolean).name() << endl; 
    cout << "   Size:   " << sizeof(bool) << " bytes" << endl;
	return 0;
	
}