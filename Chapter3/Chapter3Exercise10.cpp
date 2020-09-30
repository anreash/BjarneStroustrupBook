#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	//Exercise #10
	cout << "Exercise #10\n";

	string operation = "operation";
	double number1_ex10 = 0;
	double number2_ex10 = 0;

	cout << "Enter the first number: \n";
	cin >> number1_ex10;
	cout << "Enter the second number: \n";
	cin >> number2_ex10;
	cout << "Enter the operation: \n";
	cin >> operation;

	if (operation == "+" || operation == "plus")
		cout << "The answer is " << number1_ex10 + number2_ex10 << ".\n";
	if (operation == "-" || operation == "minus")
		cout << "The answer is " << number1_ex10 - number2_ex10 << ".\n";
	if (operation == "*" || operation == "mul")
		cout << "The answer is " << number1_ex10 * number2_ex10 << ".\n";
	if (operation == "/" || operation == "div")
		cout << "The answer is " << number1_ex10 / number2_ex10 << ".\n";

	cout << "---------------------------------------------------------- \n";
}
