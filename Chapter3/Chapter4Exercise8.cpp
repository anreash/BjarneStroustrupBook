#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

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
  
}
