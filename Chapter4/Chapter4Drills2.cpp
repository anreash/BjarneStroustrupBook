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
	
	int x = 0;
	int input = 0;
	vector<int> number;

	cout << "Enter a number: \n";
	cout << "To exit a program, enter a non-number. \n";

	while (cin >> input) {
		number.push_back(input);
		++x;
		int divisible = x % 2;
		if (divisible == 0) {
			if (number[x - 2] < number[x - 1]) {
				cout << "The larger value is " << number[x - 1] << ".\n";
				cout << "The smaller value is " << number[x - 2] << ".\n";
			}
			else {
				cout << "The larger value is " << number[x - 2] << ".\n";
				cout << "The smaller value is " << number[x - 1] << ".\n";
			}
		}
	}

}
