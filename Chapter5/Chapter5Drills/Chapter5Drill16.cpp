#include "std_lib_facilities.h"
using namespace std;

/*
1>C:\Dev\CodeTester\CodeTester\main.cpp(16,13): error C2065: 'then': undeclared identifier
1>C:\Dev\CodeTester\CodeTester\main.cpp(16,18): error C2146: syntax error: missing ';' before identifier 'cout'
1>C:\Dev\CodeTester\CodeTester\main.cpp(17,3): error C2181: illegal else without matching if
*/

int main() {
	try {
		if (true) then cout << "Success!\n";
		else cout << "Fail!\n";
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
