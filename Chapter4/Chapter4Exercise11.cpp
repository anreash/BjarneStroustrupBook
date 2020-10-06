#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> prime;

int prime_checker(int a) {
	const int two = a % 2;
	const int three = a % 3;
	const int five = a % 5;
	const int seven = a % 7;

	if (a == 2 || a == 3 || a == 5 || a == 7 || a != 1 && two != 0 && three != 0 && five != 0 && seven != 0)
		return a;
	else
		return 0;
} 

int main() {

	for (int i = 1; i <= 100; ++i) {
		int temp = prime_checker(i);
		if (temp != 0)
			prime.push_back(temp);
	}

	for (int x : prime)
		cout << x << '\n';

}
