#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

		int current_composite = 0;
		vector<int> composite;
		vector<int> prime;
		int n = 0;		// number of primes to search for

		cout << "Enter the number of primes you want to find: \n";
		cin >> n;

		for (int count = 1; prime.size() <= n-1; ++count) {
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

		cout << "Here are the " << n << " prime numbers.\n";
		for (int a : prime) 
			cout << a << '\n';
			
		cout << "-------------------------" << '\n';

		cout << "Also found " << n << " composite numbers.\n";
		for (int b : composite)
			cout << b << '\n';
}
