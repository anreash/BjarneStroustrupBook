#include "std_lib_facilities.h"
using namespace std;

/*
Successfully compiled, but output is automatically terminated.
Hovering pointer to the condition statement, the following message is showing:

C26451: Arithmetic Overflow: Using operatoer '*' on a 4 byte value and then
casting the result to a 8 byte value. Cast the value to the wider type before
calling operator '*' to avoid overflow (io.2)

Reading this, this looks like a compiler-time error, but is not being detected
or stopped by the compiler.

Changed data type of variable x, and the condition after if-statement
*/

int main() {
	try {
		double x = 4;
		double d = 5 / (x - 2);			// answer is 2.5
		if (d == x / 2 + 0.5)			
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
