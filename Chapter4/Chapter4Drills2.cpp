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

	double num = 0;
	string unit = "-";
	vector<double> number;
	vector<string> units;
	double largest = 0;
	double smallest = 0;

	cout << "Enter a number and unit. Accepted units are cm, m in, ft. \n";

	while (cin >> input >> unit) {
		if (unit == cm || unit == m || unit == in || unit == ft) {
			number.push_back(input);
			units.push_back(unit);
			if (unit == cm) {

			}
		}
		else {
			cout << "Invalid unit. \n";
		}
	}
}
