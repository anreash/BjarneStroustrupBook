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
	const string meter_to_cm = 
	int i = 0;					// loop variable

	for (double temp; cin >> temp;) {		// temporary storage of vector element
		number.push_back(temp);
		sort(number);					// sorts the elements in the vector
		if (i == 0) {
			cout << "The number in our list is only " << number[0] << ".\n";
		}
		else {
			cout << "The smallest so far is " << number[0] << ".\n";	// identifies the first element as smallest	
			cout << "The largest so far is " << number[i] << ".\n";		// identifies the last element as largest
		}
		++i;
	}


}