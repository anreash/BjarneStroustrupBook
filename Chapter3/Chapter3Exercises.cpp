#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	//Exercise #2:
	cout << "Exercise #2 \n";

	double miles = 0;

	cout << "Miles to Kilometers Conversion \n";
	cout << "Enter the number of miles: \n";
	cin >> miles;
	cout << miles << " miles is " << miles * 1.609 << " kilometers.\n";
	cout << "---------------------------------------------------------- \n";

	//Exercise #4
	cout << "Exercise #4 \n";

	int val1 = 0;
	int val2 = 0;

	cout << "There is a basket filled with oranges and apples. \n";
	cout << "How many oranges are there? \n";
	cin >> val1;
	cout << "How many apples are there? \n";
	cin >> val2;

	// This if/else statements below is not working fine. I will come back to this later.
	if (val1 < val2 && val1 != 0 && val2 != 0)
		cout << "The oranges are lesser than apples.\n";
	if (val2 > val1 && val1 != 0 && val2 != 0)
		cout << "The apples are lesser than oranges.\n";
	if (val1 == val2 && val1 != 0 && val2 != 0)
		cout << "The apples and oranges have equal quantity.\n";
	if (val1 <= 0 && val2 > 1)
		cout << "There are only apples in the basket.\n";
	if (val2 <= 0 && val1 > 1)
		cout << "There are only oranges in the basket.\n";
	if (val1 == 0 && val2 == 0)
		cout << "The fruits disappeared.\n";

	cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << ".\n";
	cout << "The difference of " << val1 << " and " << val2 << " is " << val1 - val2 << ".\n";
	cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << ".\n";
	cout << "---------------------------------------------------------- \n";

	//Exercise #5
	cout << "Exercise #5 \n";

	double valdouble1 = 0;
	double valdouble2 = 0;

	cout << "Enter a decimal number: \n";
	cin >> valdouble1;
	cout << "Enter another decimal number: \n";
	cin >> valdouble2;

	if (valdouble1 < valdouble2)
		cout << valdouble1 << " is lesser than " << valdouble2 << ".\n";
	if (valdouble1 > valdouble2)
		cout << valdouble2 << " is lesser than " << valdouble1 << ".\n";
	if (valdouble1 == valdouble2 && valdouble1 == 0 && valdouble2 == 0)
		cout << valdouble1 << " and " << valdouble2 << " are equal.\n";

	cout << "The sum of " << valdouble1 << " and " << valdouble2 << " is " << valdouble1 + valdouble2 << ".\n";
	cout << "The difference of " << valdouble1 << " and " << valdouble2 << " is " << valdouble1 - valdouble2 << ".\n";
	cout << "The product of " << valdouble1 << " and " << valdouble2 << " is " << valdouble1 * valdouble2 << ".\n";
	cout << "The quotient of " << valdouble1 << " and " << valdouble2 << " is " << valdouble1 / valdouble2 << ".\n";
	cout << "---------------------------------------------------------- \n";

	//Exercise #6
	cout << "Exercise #6 \n";

	int num1;
	int num2;
	int num3;

	cout << "Enter a whole number: \n";
	cin >> num1;
	cout << "Enter another whole number: \n";
	cin >> num2;
	cout << "Finally, enter a whole number: \n";
	cin >> num3;

	cout << "Sequencing numbers...\n";

	if (num1 < num2 && num1 < num3 && num2 < num3 || num1 == num2 && num1 < num3 || num2 == num3 && num1 < num3)
		cout << num1 << ", " << num2 << ", " << num3 << '\n'; // 1,2,3 

	if (num1 < num2 && num1 < num3 && num3 < num2 || num1 == num3 && num1 < num2 || num1 == num2 && num2 == num3)
		cout << num1 << ", " << num3 << ", " << num2 << '\n'; // 1,3,2

	if (num2 < num1 && num2 < num3 && num1 < num3 || num1 == num3 && num2 < num3)
		cout << num2 << ", " << num1 << ", " << num3 << '\n'; // 2,1,3

	if (num2 < num1 && num2 < num3 && num3 < num1 || num2 == num3 && num2 < num1)
		cout << num2 << ", " << num3 << ", " << num1 << '\n'; // 2,3,1

	if (num3 < num1 && num3 < num2 && num2 < num1 || num2 == num1 && num3 < num1)
		cout << num3 << ", " << num2 << ", " << num1 << '\n'; // 3,2,1

	if (num3 < num1 && num3 < num2 && num1 < num2)
		cout << num3 << ", " << num1 << ", " << num2 << '\n'; // 3,1,2

	cout << "---------------------------------------------------------- \n";

	//Exercise #7
	cout << "Exercise #7 \n";

	string name1 = "name1";
	string name2 = "name2";
	string name3 = "name3";

	cout << "Enter the last name of your favorite celebrity: \n";
	cin >> name1;
	cout << "Enter the first name of your favorite fictional character: \n";
	cin >> name2;
	cout << "Finally, enter your favorite word: \n";
	cin >> name3;

	cout << "Sequencing names... \n";

	if (name1 < name2 && name1 < name3 && name2 < name3 || name1 == name2 && name1 < name3 || name2 == name3 && name1 < name3)
		cout << name1 << ", " << name2 << ", " << name3 << '\n'; // 1,2,3 

	if (name1 < name2 && name1 < name3 && name3 < name2 || name1 == name3 && name1 < name2 || name1 == name2 && name2 == name3)
		cout << name1 << ", " << name3 << ", " << name2 << '\n'; // 1,3,2

	if (name2 < name1 && name2 < name3 && name1 < name3 || name1 == name3 && name2 < name3)
		cout << name2 << ", " << name1 << ", " << name3 << '\n'; // 2,1,3

	if (name2 < name1 && name2 < name3 && name3 < name1 || name2 == name3 && name2 < name1)
		cout << name2 << ", " << name3 << ", " << name1 << '\n'; // 2,3,1

	if (name3 < name1 && name3 < name2 && name2 < name1 || name2 == name1 && name3 < name1)
		cout << name3 << ", " << name2 << ", " << name1 << '\n'; // 3,2,1

	if (name3 < name1 && name3 < name2 && name1 < name2)
		cout << name3 << ", " << name1 << ", " << name2 << '\n'; // 3,1,2

	cout << "---------------------------------------------------------- \n";

	//Exercise #8
	cout << "Exercise #8\n";

	int number = 0;

	cout << "Enter a number: \n";
	cin >> number;

	if (number % 2 == 0)
		cout << "The value " << number << " is an even number.\n";
	else
		cout << "The value " << number << " is an odd number.\n";
	cout << "---------------------------------------------------------- \n";

	//Exercise #9
	cout << "Exercise #9\n";
	string number_convert = "zero";

	cout << "Choose and spell out a number between zero to four: \n";
	cin >> number_convert;

	if (number_convert == "zero" || number_convert == "Zero")
		cout << 0 << '\n';
	else if (number_convert == "one" || number_convert == "One")
		cout << 1 << '\n';
	else if (number_convert == "two" || number_convert == "Two")
		cout << 2 << '\n';
	else if (number_convert == "three" || number_convert == "Three")
		cout << 3 << '\n';
	else if (number_convert == "four" || number_convert == "Four")
		cout << 4 << '\n';
	else {
		cout << "I can't translate that.\n";
	}
	cout << "---------------------------------------------------------- \n";

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

	//Exercise #11
	cout << "Exercise #11\n";

	double pennies = 0;
	double nickels = 0;
	double dimes = 0;
	double quarters = 0;
	double half_dollars = 0;
	double one_dollar = 0;

	cout << "How many 1-cent coins do you have? \n";
	cin >> pennies;
	cout << "How many 5-cent coins do you have? \n";
	cin >> nickels;
	cout << "How many 10-cent coins do you have? \n";
	cin >> dimes;
	cout << "How many 25-cent coins do you have? \n";
	cin >> quarters;
	cout << "How many 50-cent coins do you have? \n";
	cin >> half_dollars;
	cout << "How many  100-cent coins do you have? \n";
	cin >> one_dollar;

	double total_cents = pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50 + one_dollar * 100;
	double all_coins = total_cents / 100;

	if (pennies == 1)
		cout << "You have " << pennies << " penny.\n";
	if (pennies > 1)
		cout << "You have " << pennies << " pennies.\n";

	if (nickels == 1)
		cout << "You have " << nickels << " nickel.\n";
	if (nickels > 1)
		cout << "You have " << nickels << " nickels.\n";

	if (dimes == 1)
		cout << "You have " << dimes << " dime.\n";
	if (dimes > 1)
		cout << "You have " << dimes << " dimes.\n";

	if (quarters == 1)
		cout << "You have " << quarters << " quarter.\n";
	if (quarters > 1)
		cout << "You have " << quarters << " quarters.\n";

	if (half_dollars == 1)
		cout << "You have " << half_dollars << " half dollar.\n";
	if (half_dollars > 1)
		cout << "You have " << half_dollars << " half dollars.\n";

	if (one_dollar == 1)
		cout << "You have a one dollar coin.\n";
	if (one_dollar > 1)
		cout << "You have " << one_dollar << " one-dollar coins.\n";

	if (total_cents > 0) {
		cout << "The value of all your coins is $" << all_coins << ".\n";
	}
	else {
		cout << "You don't have any coins with you.\n";
	}

	cout << "---------------------------------------------------------- \n";
	cout << "End of Chapter 3 Exercises.\n";
	cin.get();
}
