#include "std_lib_facilities.h"
using namespace std;

/*
1>C:\Dev\CodeTester\CodeTester\main.cpp(6,7): error C2065: 'cond': undeclared identifier
1>Done building project "CodeTester.vcxproj" -- FAILED.
*/

int main() {
	try {
		if (cond) 
			cout << "Success!\n";
		else 
			cout << "Fail!\n";
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
