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

int main() 
{
	cout << "Exercise #2 \n";

	cout << "Enter temperature results. To exit, press | and hit enter. \n";
	vector<double> temperature;
	for (double temp; cin >> temp;)
		temperature.push_back(temp);
		
	sort(temperature);
		
	double sum = 0;				// variable for the sum of all temperature input	
	for (double x : temperature) {	 // read each elements of temperature into x
		cout << x << '\n';	// prints x
		sum += x;	// add them all up			
	}
	cout << "Average temperature: " << sum / temperature.size() << '\n';
	
	if (temperature.size() % 2 == 0) {		// if the number of elements is even, no remainder
		int firstMedian = temperature.size() / 2;	// reads the first median index
		int secondMedian = firstMedian - 1;		// reads the next median index
		double median_sum = temperature[firstMedian] + temperature[secondMedian];	// reads the indexes of the first and second median and adds them together
		cout << "Median temperature: " << median_sum / 2 << '\n';	// calculates median by dividing sum of first and second median in 2
	}
	else {
		
		cout << "Median temperature: " << temperature[temperature.size() / 2] << '\n';	// reads the quotient as median index
	}
}
