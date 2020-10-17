#include "std_lib_facilities.h"
using namespace std;

/*
1>C:\Dev\CodeTester\CodeTester\main.cpp(11,20): error C2065: 'j': undeclared identifier
1>C:\Dev\CodeTester\CodeTester\main.cpp(12,7): error C2065: 'j': undeclared identifier
*/

int main() {
	try {
		int i = 0;
		int j = 0;
		while (i < 10)
			++i;
			if (j < i) 
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
