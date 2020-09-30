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
	
	cout << '\n';
	cout << "-----------------------------------------------\n";
	cout << "Exercise #3\n";
	cout << '\n';
	
	cout << "Enter the distance of two cities along any route. To exit, press | and hit enter.\n";

	vector<double> city_distance;
	for (double temp; cin >> temp;) {
		city_distance.push_back(temp);
	}
		
	sort(city_distance);

	double city_distance_sum = 0;
	for (double y : city_distance) {
		city_distance_sum += y;
	}
	cout << city_distance_sum << " is the total distance between the two cities.\n";
	cout << city_distance[0] << " is the nearest distance between the two cities.\n";
	cout << city_distance[city_distance.size()-1] << " is the farthest distance between the two cities.\n";
	cout << "Average distance: " << city_distance_sum / 2 << '\n';
}
