#include <iostream>
// #include <conio.h> // not needed in this scope.
// #include <cmath> // not needed in this scope.

using namespace std;

float digit1, digit2, result;
string operate;

int main(void)
{
	cout << "Erste Zahl eingeben: ";
	cin >> digit1;
	cout << "Operationszeichen eingeben: ";
	cin >> operate;
	cout << "Zweite Zahl eingeben: ";
	cin >> digit2;
	
	if (operate == "+"){
		cout << "Das Ergebnis lautet: " << digit1 + digit2 << endl;
		return 0;
	}
	
	if (operate == "-") {
		cout << "Das Ergebnis lautet: " << digit1 - digit2 << endl;
		return 0;
	}
	
	if (operate == "*") {
		cout << "Das Ergebnis lautet: " << digit1 * digit2 << endl;
		return 0;
	}
	
	if (operate == ":") {
		operate = "/";
	}
	
	if (operate == "/") {
		if (digit2 != 0) {
			cout << "Das Ergebnis lautet: " << digit1 / digit2 << endl;
			return 0;
		} else {
			cout << "Division durch 0 nicht möglich." << endl;
			return 0;
		}
	}
}
