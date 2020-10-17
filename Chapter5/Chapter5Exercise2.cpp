#include "std_lib_facilities.h"
using namespace std;

double ctok(double c)		// converts Celsius to Kelvin
{
	int k = c + 273.15;
	return int
}


int main() {
	try {
		double c = 0;			// declare input variable
		cin >> d;				// retrieve temperature to input variable
		double k = ctok("c");	// convert temperature
		Cout << k << '/n';		// print out temperature

		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}

/*
Initial Errors based on the original code:
1>C:\Dev\CodeTester\CodeTester\main.cpp(6,8): warning C4244: 'initializing': conversion from 'double' to 'int', possible loss of data
1>C:\Dev\CodeTester\CodeTester\main.cpp(7,9): error C2062: type 'int' unexpected
1>C:\Dev\CodeTester\CodeTester\main.cpp(14,10): error C2065: 'd': undeclared identifier
1>C:\Dev\CodeTester\CodeTester\main.cpp(15,22): error C2664: 'double ctok(double)': cannot convert argument 1 from 'const char [2]' to 'double'
1>C:\Dev\CodeTester\CodeTester\main.cpp(15,19): message : There is no context in which this conversion is possible
1>C:\Dev\CodeTester\CodeTester\main.cpp(4,8): message : see declaration of 'ctok'
1>C:\Dev\CodeTester\CodeTester\main.cpp(16,3): error C2065: 'Cout': undeclared identifier
*/
