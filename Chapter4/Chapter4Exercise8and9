#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

template<typename Container>
inline void sort(Container& c)
{
	std::sort(std::begin(c), std::end(c));
}

int main() {

	cout << '\n';
	cout << "-----------------------------------------------\n";
	cout << "Exercise #8\n";
	cout << '\n';

	int chess_square = 1;		// loop variable
	constexpr int total_squares = 64;		// total squares in a chess board
	int starting_sum = 1;		// variable for the current sum of grains
	for (int chess_square = 1; chess_square <= total_squares; ++chess_square) {
		cout << chess_square << '\t' << starting_sum << '\n';
		starting_sum += starting_sum;
	}

	cout << '\n';
	cout << "-----------------------------------------------\n";
	cout << "Exercise #9\n";
	cout << '\n';

	cout << "Largest number for signed int is 1073741824 at the 31st square. \n";
	cout << "Largest number for unsigned int is 2147483648 at the 32st square. \n";
	cout << "Largest number for signed double is 9.22337e+18 at the 64th square. \n";

}
	
