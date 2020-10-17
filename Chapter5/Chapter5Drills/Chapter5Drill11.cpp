#include "std_lib_facilities.h"
using namespace std;

/*
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,23): error C2678: binary '<': no operator found which takes a left-hand operand of type 'std::ostream' (or there is no acceptable conversion)
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,23): message : could be 'built-in C++ operator<(const char [10], const char [10])'
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,23): message : while trying to match the argument list '(std::ostream, const char [10])'
1>Done building project "CodeTester.vcxproj" -- FAILED.
*/

int main() {
	try {
		string s = "ape";
		if (s == "fool")
			cout < "Success!\n";
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
