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
	/*
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

	

	cout << '\n';
	cout << "-----------------------------------------------\n";
	cout << "Exercise #4\n";
	cout << '\n';


	cout << '\n';
	cout << "-----------------------------------------------\n";
	cout << "Exercise #5\n";
	cout << '\n';

	cout << "WELCOME TO THE CALCULATOR\n";

	double num1 = 0;
	double num2 = 0;
	char oper = ' ';
	
	cout << "Enter the first number, the operator, and the second number.\n";
	
	for (double num1; cin >> num1 >> oper >> num2;) {
		switch (oper) {
		case '+':
			cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << ".\n";
			break;
		case '-':
			cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << ".\n";
			break;
		case '*':
			cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << ".\n";
			break;
		case '/':
			cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / num2 << ".\n";
			break;
		default:
			cout << "Unknown input. Please try again.\n";
		}

			cout << '\n';
			cout << "Enter the first number, operator and the second number to start again.\n";
			cout << "Enter any letter to exit.\n";
			cout << '\n';
	}

	*/

	cout << '\n';
	cout << "-----------------------------------------------\n";
	cout << "Exercise #6\n";
	cout << '\n';

	cout << "Enter a number from 0 to 10.\n";

	vector<string> word = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	//vector<int> digit = { "0", "1", "2"å, "3", "4", "5", "6", "7", "8", "9" };

	for (string input; cin >> input;) {
		switch (input) {
		case "0":
			cout << word[0] << '\n';
			break;
		case "1":
			cout << word[1] << '\n';
			break;
		case "2":
			cout << word[2] << '\n';
			break;
		case "3":
			cout << word[3] << '\n';
			break;
		case "4":
			cout << word[4] << '\n';
			break;
		case "5":
			cout << word[5] << '\n';
			break;
		case "6":
			cout << word[6] << '\n';
			break;
		case "7":
			cout << wordr[7] << '\n';
			break;
		case "8":
			cout << word[8] << '\n';
			break;
		case "9":
			cout << word[9] << '\n';
			break;
		case "zero":
			cout << digit[0] << '\n';
			break;
		case "one":
			cout << digit[1] << '\n';
			break;
		case "two":
			cout << digit[2] << '\n';
			break;
		case "three":
			cout << digit[3] << '\n';
			break;
		case "four":
			cout << digit[4] << '\n';
			break;
		case "five":
			cout << digit[5] << '\n';
			break;
		case "six":
			cout << digit[6] << '\n';
			break;
		case "seven":
			cout << digit[7] << '\n';
			break;
		case "eight":
			cout << digit[8] << '\n';
			break;
		case "nine":
			cout << digit[9] << '\n';
			break;
		default:
			cout << "I can't spell that.\n";
			break;
		}
	}



	


}
