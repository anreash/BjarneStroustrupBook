#include "std_lib_facilities.h"
using namespace std;

//1>C:\Dev\CodeTester\CodeTester\main.cpp(8,11): error C2065: 'success': undeclared identifier

int main() {
	try {
		cout << "success" << '\n';
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
