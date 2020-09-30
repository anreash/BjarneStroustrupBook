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

int main() 
{
	cout << '\n';
	cout << "-----------------------------------------------\n";
	cout << "Exercise #7\n";
	cout << '\n';

	cout << "WELCOME TO THE CALCULATOR\n";

	cout << "Enter a single-digit number, the operator, and a second single-digit number.\n";

	vector<string> word = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	vector<string> digit = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
	string word_number1 = "0";
	string word_number2 = "0";
	int number1 = 0;
	int number2 = 0;
	char oper = ' ';

	for (string word_number1; cin >> word_number1 >> oper >> word_number2;) {
		if (word_number1 == word[0] || word_number1 == digit[0])
			number1 = 0;
		else if (word_number1 == word[1] || word_number1 == digit[1])
			number1 = 1;
		else if (word_number1 == word[2] || word_number1 == digit[2])
			number1 = 2;
		else if (word_number1 == word[3] || word_number1 == digit[3])
			number1 = 3;
		else if (word_number1 == word[4] || word_number1 == digit[4])
			number1 = 4;
		else if (word_number1 == word[5] || word_number1 == digit[5])
			number1 = 5;
		else if (word_number1 == word[6] || word_number1 == digit[6])
			number1 = 6;
		else if (word_number1 == word[7] || word_number1 == digit[7])
			number1 = 7;
		else if (word_number1 == word[8] || word_number1 == digit[8])
			number1 = 8;
		else if (word_number1 == word[9] || word_number1 == digit[9])
			number1 = 9;
		else
			cout << "First number is invalid. \n";

		if (word_number2 == word[0] || word_number2 == digit[0])
			number2 = 0;
		else if (word_number2 == word[1] || word_number2 == digit[1])
			number2 = 1;
		else if (word_number2 == word[2] || word_number2 == digit[2])
			number2 = 2;
		else if (word_number2 == word[3] || word_number2 == digit[3])
			number2 = 3;
		else if (word_number2 == word[4] || word_number2 == digit[4])
			number2 = 4;
		else if (word_number2 == word[5] || word_number2 == digit[5])
			number2 = 5;
		else if (word_number2 == word[6] || word_number2 == digit[6])
			number2 = 6;
		else if (word_number2 == word[7] || word_number2 == digit[7])
			number2 = 7;
		else if (word_number2 == word[8] || word_number2 == digit[8])
			number2 = 8;
		else if (word_number2 == word[9] || word_number2 == digit[9])
			number2 = 9;
		else
			cout << "Second number is invalid. \n";

		switch (oper) {
		case '+':
			cout << "The sum of " << number1 << " and " << number2 << " is " << number1 + number2 << ".\n";
			break;
		case '-':
			cout << "The difference of " << number1 << " and " << number2 << " is " << number1 - number2 << ".\n";
			break;
		case '*':
			cout << "The product of " << number1 << " and " << number2 << " is " << number1 * number2 << ".\n";
			break;
		case '/':
			cout << "The quotient of " << number1 << " and " << number2 << " is " << number1 / number2 << ".\n";
			break;
		default:
			cout << "Unknown operator. Please try again.\n";
		}

		cout << '\n';
		cout << "Enter a single-digit number, an operator, and a second single-digit number to start again.\n";
		cout << "Press CTRL+Z and enter to exit.\n";
		cout << '\n';
		
	}

}
