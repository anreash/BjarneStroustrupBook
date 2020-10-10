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
	double input = 0;
	vector<double> number;
	double largest = 0;
	double smallest = 0;
	const double nearly_equal = 0.01;

	cout << "Enter a number. \n";
	cout << "To exit a program, enter a non-number. \n";

	while (cin >> input) {
		number.push_back(input);
		++x;
		const int divisible = x % 2;
		if (divisible == 0) {
			if (number[x - 2] < number[x - 1]) {
				largest = number[x - 1];
				smallest = number[x - 2];
			}
			else if (number[x - 2] > number[x - 1]) {
				largest = number[x - 2];
				smallest = number[x - 1];
			}
			else {
				cout << "The numbers are equal.\n";
			}

			cout << "The larger value is " << largest << ".\n";
			cout << "The smaller value is " << smallest << ".\n";

			double difference = largest - smallest;
			if (difference <= nearly_equal)
				cout << "The numbers are almost equal.\n";
		}
	}

}
