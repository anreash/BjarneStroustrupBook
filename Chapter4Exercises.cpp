#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

template<typename Container>
inline void sort(Container& c)
{
	std::sort(std::begin(c), std::end(c));
}

int main() {

	cout << "Enter two numbers: \n";

	vector<double> number;
	//const string meter_to_cm = 
	int i = 0;					// loop variable

	for (double temp; cin >> temp;) {		// temporary storage of vector element
		number.push_back(temp);
		sort(number);					// sorts the elements in the vector
		double smallest = number[0];
		double largest = number[i];
		if (i != 0 && temp == smallest) {
			cout <<  << " is the smallest so far.\n";		// identifies the first element as smallest
		}
		else if (temp == largest) {
			cout << number[i] << " is the largest so far.\n";		// identifies the last element as largest
		}
		else {
			cout << number[i] << '\n';
		}
		++i;
	}


}