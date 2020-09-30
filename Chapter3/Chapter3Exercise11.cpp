#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
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
