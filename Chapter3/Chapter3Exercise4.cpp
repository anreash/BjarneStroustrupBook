#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
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


}
