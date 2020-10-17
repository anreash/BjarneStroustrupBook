#include "std_lib_facilities.h"
using namespace std;

/*
Successfully compiled but no Success! string printed
Narrowing Error - from int to char

I can just change the condition to c != 2000, to get over with,
But that will make 'char c = x' an empty statement.

To make the conversion relevant, I compared them.
*/

int main() {
	try {
		int x = 2000;
		char c = x;
		if (c != x)
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
