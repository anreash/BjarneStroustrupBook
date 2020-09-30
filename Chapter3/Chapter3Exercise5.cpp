#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

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
  
  }
