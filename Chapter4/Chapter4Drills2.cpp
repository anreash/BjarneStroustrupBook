#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	
	int x = 0;
	int input = 0;
	vector<int> numbers;

	cout << "Enter a number: \n";
	cout << "To exit a program, enter a non-number. \n";

	while (cin >> input) {
		numbers.push_back(input);
		++x;
		int divisible = x % 2;
		if (divisible == 0) {
			cout << numbers[x-2] << ", " << numbers[x-1] << '\n';
		}
	}

}
