#include "std_lib_facilities.h"
using namespace std;

double ctok(double c)		// converts Celsius to Kelvin
{
	if (c <= -273.15)
		error("Erroneous input.\n");
	double k = c + 273.15;
	return k;
}


int main() {
	try {
		double c = 0;			    // declare input variable
		cin >> c;				      // retrieve temperature to input variable
		double k = ctok(c);		// convert temperature
		cout << k << '\n';		// print out temperature
		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
}
