#include <iostream>
using namespace std;

int main() {
    double b, exp, result = 1.0;

    cout << "Enter the base number: ";
    cin >> b;
    cout << "Enter the exponent (a positive integer): ";
    cin >> exp;
    if (exp < 0 || int(exp) != exp) {
        cout << "Exponent must be a positive integer." << endl;
    } 
	else 
	{
        do {
            result *= b;
            exp--;
        } while (exp > 0);
        cout << "Result: " << result << endl;
    }
	//use can also use the increment method above
}
