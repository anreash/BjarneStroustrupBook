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
	cout << "Exercise #6\n";
	cout << '\n';

	cout << "Enter a number from 0 to 10.\n";
	cout << "Press CTRL+Z and 'enter' to quit.\n";

	vector<string> word = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	vector<string> digit = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

	// Can't use switch for this program as it doesn't accept string variables

	for (string input; cin >> input;) {
		if (input == word[0])
			cout << 0 << '\n';
		else if (input == word[1])
			cout << 1 << '\n';
		else if (input == word[2])
			cout << 2 << '\n';
		else if (input == word[3])
			cout << 3 << '\n';
		else if (input == word[4])
			cout << 4 << '\n';
		else if (input == word[5])
			cout << 5 << '\n';
		else if (input == word[6])
			cout << 6 << '\n';
		else if (input == word[7])
			cout << 7 << '\n';
		else if (input == word[8])
			cout << 8 << '\n';
		else if (input == word[9])
			cout << 9 << '\n';
		else if (input == digit[0])
			cout << "zero" << '\n';
		else if (input == digit[1])
			cout << "one" << '\n';
		else if (input == digit[2])
			cout << "two" << '\n';
		else if (input == digit[3])
			cout << "three" << '\n';
		else if (input == digit[4])
			cout << "four" << '\n';
		else if (input == digit[5])
			cout << "five" << '\n';
		else if (input == digit[6])
			cout << "six" << '\n';
		else if (input == digit[7])
			cout << "seven" << '\n';
		else if (input == digit[8])
			cout << "eight" << '\n';
		else if (input == digit[9])
			cout << "nine" << '\n';
		else
			cout << "I can't translate that. \n";
	}
  
}
