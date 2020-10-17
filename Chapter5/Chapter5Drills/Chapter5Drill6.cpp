#include "std_lib_facilities.h"
using namespace std;

/*
1>C:\Dev\CodeTester\CodeTester\main.cpp(7,3): error C2064: term does not evaluate to a function taking 1 arguments
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,7): error C2064: term does not evaluate to a function taking 1 arguments
1>Done building project "CodeTester.vcxproj" -- FAILED.
*/

int main() {
	try {
		vector<int>v(10);
		v[5] = 7;
		if (v[5] == 7)
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
