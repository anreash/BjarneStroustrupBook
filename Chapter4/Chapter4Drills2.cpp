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

	double input = 0;
	vector<double> number;
	double largest = 0;
	double smallest = 0;

	cout << "Enter a number. To exit the program, enter a non-number.\n";

	for (int i = 0; cin >> input; ++i) {
		number.push_back(input);
		sort(number);
		if (input == number[0]) {
			cout << input << " is the smallest so far.\n";
		}
		else if (input == number[number.size() - 1]) {
			cout << input << " is the largest so far.\n";
		}
	}

}
