#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

		int current_composite = 0;
		vector<int> prime;
		vector<int> composite;
		int max = 0;

		cout << "Enter maximum value: \n";
		cin >> max;

		for (int count = 1; count <= max; ++count) {
			if (count != 1) {		// do nothing, 1 is neither a prime nor composite number
				for (int x : prime) {
					int divisible = count % x;
					if (x == 0) {
						prime.push_back(count);
					}
					else if (x != 0 && divisible == 0) {
						current_composite = count;
					}
				}
				if (current_composite != count) {
					prime.push_back(count);
				}
				else {
					composite.push_back(count);
				}
			}
		}

		cout << "Prime Numbers" << '\n';
		for (int a : prime) 
			cout << a << '\n';
			
		cout << "-------------------------" << '\n';

		cout << "Composite Numbers" << '\n';
		for (int b : composite)
			cout << b << '\n';


}
