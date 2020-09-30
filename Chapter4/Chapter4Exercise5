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
	cout << "Exercise #5\n";
	cout << '\n';

	cout << "WELCOME TO THE CALCULATOR\n";

	double num1 = 0;
	double num2 = 0;
	char oper = ' ';

	cout << "Enter the first number, the operator, and the second number.\n";

	for (double num1; cin >> num1 >> oper >> num2;) {
		switch (oper) {
		case '+':
			cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << ".\n";
			break;
		case '-':
			cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << ".\n";
			break;
		case '*':
			cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << ".\n";
			break;
		case '/':
			cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / num2 << ".\n";
			break;
		default:
			cout << "Unknown input. Please try again.\n";
		}

			cout << '\n';
			cout << "Enter the first number, operator and the second number to start again.\n";
			cout << "Enter any letter to exit.\n";
			cout << '\n';
	}
}
