#include "std_lib_facilities.h"
using namespace std;

/*
No errors, but when program is run, program is showing blank screen. No prompt to terminate program.


Fixed. With compiler-time warning
1>C:\Dev\CodeTester\CodeTester\main.cpp(7,21): warning C4018: '<': signed/unsigned mismatch

Compiling and running well, with Output of
Success!
Success!
Success!
Success!
Success!

*/

int main() {
	try {
		vector<char> v(5);
		for (int i = 0; i < v.size(); ++i) {
			cout << "Success!\n";
		}
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
