#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

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
  
  }
