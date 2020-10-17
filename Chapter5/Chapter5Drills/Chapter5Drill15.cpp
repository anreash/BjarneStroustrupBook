#include "std_lib_facilities.h"
using namespace std;

/*
Successful compilation but output is --
SuccesPlease enter a character to exit

From what I understand, the for-statement works like its reading and iterating each
characters of the value of the string. But the fragment sample is incomplete.

*/

int main() {
	try {
		string s = "Success!\n";
		for (int i = 0; i < 6; ++i)
			cout << s[i];
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
