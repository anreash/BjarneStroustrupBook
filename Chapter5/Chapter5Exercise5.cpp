#include "std_lib_facilities.h"
using namespace std;

// This program is a Celsius to Kelvin and Vice Versa Converter
// Program has Exceptions that catches errors and terminates program
// As long as there are no invalid inputs, the program continues to take
// input and convert.

double ctok(double input)		// converts Celsius to Kelvin
{
	if (input < -273.15)
		error("Erroneous result.\n");
	double k = input + 273.15;
	return k;
}

double ktoc(double input)		// converts Kelvin to Celsius
{
	if (input < 0)
		error("Erroneous result.\n");
	double c = input - 273.15;
	return c;
}

int main() {
	try {
		double input = 0;			
		string unit = "-";

		cout << "Celsius to Kelvin && Kelvin to Celsius Converter \n";
		cout << "\n";
		cout << "Enter the number and the unit, k for kelvin, c for celsius.\n";
		cout << "To exit, press CTRL + Z and ENTER.\n";
		cout << "\n";

		while (cin >> input >> unit) {
			if (unit == "k" || unit == "kelvin" || unit == "Kelvin") {
				double c = ktoc(input);
				cout << input << " Kelvin is " << c << " Celsius.\n";
			}
			else if (unit == "c" || unit == "celsius" || unit == "Celsius") {
				double k = ctok(input);
				cout << input << " Celsius is " << k << " Kelvin.\n";
			}
			else {
				error("Invalid input.\n");
			}
		}

		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
}
