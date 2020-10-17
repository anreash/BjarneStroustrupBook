#include "std_lib_facilities.h"
using namespace std;

/*
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,25): error C2017: illegal escape sequence
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,27): error C2001: newline in constant
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,26): error C2065: 'n': undeclared identifier
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,27): error C2143: syntax error: missing ';' before 'string'
1>C:\Dev\CodeTester\CodeTester\main.cpp(9,4): error C2146: syntax error: missing ';' before identifier 'keep_window_open'
*/

int main() {
	try {
		cout << "Success" << "!\n";
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
