#include "std_lib_facilities.h"
using namespace std;

// outcome is m
constexpr double cm_to_m(double input) {
	return input / 100;
}

// outcome is cm
constexpr double in_to_cm(double input) {
	return input * 2.54;
}

// outcome is inches
constexpr double ft_to_in(double input) {
	return input * 12;
}

int main() {

	double input = 0;
	string unit = "-";
	vector<double> number;
	vector<string> units;

	cout << "Meter Conversion Application \n";
	cout << "Enter a number and its unit. Acceptable units are: cm, m, in, ft. \n";
	cout << "To end, enter a non - number.\n";

	while (cin >> input >> unit) {
		// conversion from centimeters to meter
		if (unit == "cm" || unit == "centimeters" || unit == "centimeter") {
			double temp = cm_to_m(input);
			if (input !=0 && input <= 1 && temp <= 1) {
				cout << input << " centimeter is " << temp << " meter.\n";
			}
			else if (input != 0 && input > 1 && temp <= 1) {
				cout << input << " centimeters is " << temp << " meter.\n";
			}
			else if (input == 0) {
				cout << "No conversion. \n";
			}
			else {
				cout << input << " centimeters is " << temp << " meters.\n";
			}
			
			if (temp != 0)
				number.push_back(temp);
		}
		// conversion from inches to meter
		else if (unit == "in" || unit == "inches" || unit == "inch") {
			double temp = in_to_cm(input);
				temp = cm_to_m(temp);
			if (input != 0 && input <= 1 && temp <= 1) {
				cout << input << " inch is " << temp << " meter.\n";
			}
			else if (input != 0 && input > 1 && temp <= 1) {
				cout << input << " inches is " << temp << " meter.\n";
			}
			else if (input == 0) {
				cout << "No conversion. \n";
			}
			else {
				cout << input << " centimeters is " << temp << " meters.\n";
			}

			if (temp != 0)
				number.push_back(temp);
		}
		// conversion from feet to meter
		else if (unit == "ft" || unit == "feet" || unit == "foot") {
			double temp = ft_to_in(input);
			temp = in_to_cm(temp);
			temp = cm_to_m(temp);

			if (input != 0 && input <= 1 && temp <= 1) {
				cout << input << " foot is " << temp << " meter.\n";
			}
			else if (input != 0 && input > 1 && temp <= 1) {
				cout << input << " feet is " << temp << " meter.\n";
			}
			else if (input == 0) {
				cout << "No conversion. \n";
			}
			else {
				cout << input << " feet is " << temp << " meters.\n";
			}
			if (temp != 0)
				number.push_back(temp);
		}
		// no conversion done for meters
		else if (unit == "m" || unit == "meters" || unit == "meter") {
			if (input == 0) {
				cout << "No conversion. \n";
			}
			else {
				cout << input << " " << unit << " is already in meters.\n";
			}
			
			if (input != 0)
				number.push_back(input);
		}
		// illegal units
		else if (unit == "y" || unit == "yard" || unit == "yards" || unit == "kilometer" || unit == "km" || unit == "kilometers" || unit == "gallons" || unit == "gallon" || unit == "g"){
			cout << "Illegal representation of unit. Please try again. \n";
		}
		else {
			cout << "Unknown entry. Please try again. \n";
		}
	}

	sort(number);
	double sum = 0;
	double largest = number[0];
	double smallest = number[number.size() - 1];

	cout << "--------------------------- \n";
	cout << "Entry list: \n";

	for (double x : number) {
		cout << x << '\n';
		sum += x;
	}
	cout << "\n";

	if (number.size() > 1) {
		cout << largest << " is the smallest value. \n";
		cout << smallest << " is the largest value. \n";
		cout << "There are " << number.size() << " entries added in the list. \n";
		cout << "The sum of all entries is " << sum << ".\n";
		cout << "The average all entries is " << sum / number.size() << ".\n";		
	}
	else if (number.size() == 1) {
		cout << "There is only 1 entry.\n";
	}
	else {
		cout << "No entries were added.\n";
	}
}
