#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
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
  
  }
