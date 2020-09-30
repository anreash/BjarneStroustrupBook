#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
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
  
  }
