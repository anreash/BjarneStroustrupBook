#include "std_lib_facilities.h"
using namespace std;

/*
1>C:\Dev\CodeTester\CodeTester\main.cpp(7,3): error C2065: 'boo': undeclared identifier
1>C:\Dev\CodeTester\CodeTester\main.cpp(7,7): error C2146: syntax error: missing ';' before identifier 'c'
1>C:\Dev\CodeTester\CodeTester\main.cpp(7,7): error C2065: 'c': undeclared identifier
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,7): error C2065: 'c': undeclared identifier
1>Done building project "CodeTester.vcxproj" -- FAILED.
*/

int main() {
	try {
		string s = "ape";
		bool c = "fool" < s;
		if (c)
			cout << "Success!\n";
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
