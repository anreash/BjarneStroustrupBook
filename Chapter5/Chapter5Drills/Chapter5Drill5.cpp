#include "std_lib_facilities.h"
using namespace std;

//IDE identified 2 errors
/*
1>C:\Dev\CodeTester\CodeTester\main.cpp(6,17): error C2440: 'initializing': cannot convert from 'int' to 'std::basic_string<char,std::char_traits<char>,std::allocator<char>>'
1>C:\Dev\CodeTester\CodeTester\main.cpp(6,17): message : No constructor could take the source type, or constructor overload resolution was ambiguous
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,13): error C2440: '=': cannot convert from 'std::string' to 'T'
1>        with
1>        [
1>            T=int
1>        ]
1>C:\Dev\CodeTester\CodeTester\main.cpp(8,10): message : No user-defined-conversion operator available that can perform this conversion, or the operator cannot be called
1>Done building project "CodeTester.vcxproj" -- FAILED.
*/

int main() {
	try {
		string res = 7;
		vector<int> v(10);
		v[5] = res;
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
