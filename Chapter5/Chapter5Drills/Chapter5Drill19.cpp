#include "std_lib_facilities.h"
using namespace std;

/*
1>C:\Dev\CodeTester\CodeTester\main.cpp(10,10): error C2955: 'Vector': use of class template requires template argument list
1>C:\Dev\CodeTester\CodeTester\std_lib_facilities.h(72): message : see declaration of 'Vector'
1>C:\Dev\CodeTester\CodeTester\main.cpp(10,14): error C2514: 'Vector': class template cannot be constructed
1>C:\Dev\CodeTester\CodeTester\std_lib_facilities.h(72): message : see declaration of 'Vector'
1>C:\Dev\CodeTester\CodeTester\main.cpp(11,31): error C2662: 'allocator_traits<allocator_traits<_Alloc>::rebind_alloc<_Ty>>::size_type std::vector<_Ty,_Alloc>::size(void) noexcept const': cannot convert 'this' pointer from 'Vector' to 'const std::vector<_Ty,_Alloc> &'
1>C:\Dev\CodeTester\CodeTester\main.cpp(11,31): message : Reason: cannot convert from 'Vector' to 'const std::vector<_Ty,_Alloc>'
1>C:\Dev\CodeTester\CodeTester\main.cpp(11,24): message : Conversion requires a second user-defined-conversion operator or constructor
1>C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.27.29110\include\vector(1482,26): message : see declaration of 'std::vector<_Ty,_Alloc>::size'
*/

int main() {
	try {
		vector v(5);
		for (int i = 0; i <= v.size(); ++i);
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
