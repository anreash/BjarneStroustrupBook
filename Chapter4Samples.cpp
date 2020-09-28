#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


// Try this exercise in page 116
// Implement a square function without using a multiplication operator
int square(int x) {
	int product = 0;			// stores the sum until the loop is finished 

	for (int i = 0; i < x; ++i) {
		product += x;	// x represents the number itself and the multiplier
	}
	return product;
}

// Because I am not using std_lib_facility header, I have to manually have this on the program
template<typename C>	// requires Container<C>()
void sort(C& c) {
	std::sort(c.begin(), c.end());
}

int main()
{
	// Testing square function
	cout << square(5) << '\n';
	cout << square(7) << '\n';
	cout << square(8) << '\n';
	cout << square(100) << '\n';

	// using switch cases to compare and const variable consistenciess
	// sample on pg 107
	constexpr int yes = 'y';
	constexpr char no = 'n';
	constexpr char maybe = '?';

	cout << "Do you like fish?\n";
	cout << "-answer: y for yes, n for no, ? for maybe or I don't know-\n";
	char fish_answer;
	cin >> fish_answer;

	switch (fish_answer)
	{
	case no:
		cout << "That's too bad.\n";
		break;
	case yes:
		cout << "That's awesome!\n";
		break;
	case maybe:
		cout << "I guess you can't decide.\n";
		break;
	default:
		cout << "I don't understand.\n";
		break;
	}
	cout << "------------------------------------------------\n";

	//sample from the book pg 108

	cout << "Please enter a digit.\n";
	char odd_even_digit;
	cin >> odd_even_digit;

	switch (odd_even_digit)
	{
	case '0': case '2': case '4': case '6': case '8': // if input are these numbers, print even
		cout << " is even.\n";
		break;
	case '1': case '3': case '5': case '7': case '9': // if input are these number, print odd
		cout << " is odd.\n";
		break;
	default:
		cout << " is not a digit.\n";
		break;
	}
	// The problem with this is it's not bad-input-proof. What if the input is still a number, but a big one?
	// I improved the above program, made it bad-input-proof

	cout << "Please enter a digit.\n";
	cin >> odd_even_digit;			// used the same variable as above

	int divisible = odd_even_digit % 2;  // formula to get divisibility

	switch (divisible)
	{
	case 0:
		cout << "is even.\n";	// if digit can equally be divided by 2, no remainder, it's even
		break;
	case !0:
		cout << "is odd.\n";	// if digit has a remainder that's not zero, it's odd
		break;
	default:
		cout << "is not a digit.\n";
		break;
	}

	cout << "------------------------------------------------\n";

	//Try this: page 109

	double dollars = 0;
	char currency = 0;

	cout << "Enter the amount of dollars, following by the currency you want it converted to.\n";
	cout << "y for yen, k for kroner, p for pounds\n";

	cin >> dollars >> currency;

	const double yen = dollars * 104.93;
	const double kroner = dollars * 9.38;
	const double pounds = dollars * 0.79;

	if (currency == 'y')
		cout << dollars << " dollars is " << yen << " yen.\n";
	else if (currency == 'k')
		cout << dollars << " dollars is " << kroner << " kroner.\n";
	else if (currency == 'p')
		cout << dollars << " dollars is " << pounds << " pounds.\n";
	else
		cout << "I can't convert that currency.\n";

	// converting the program above to switch statements

	cout << "Enter the amount of dollars, following by the currency you want it converted to.\n";
	cout << "y for yen, k for kroner, p for pounds\n";

	cin >> dollars >> currency;		// using the same variables as above
									// using the same const variables as above
	switch (currency)
	{
	case 'y':
		cout << dollars << " dollars is " << yen << " yen.\n";
		break;
	case 'k':
		cout << dollars << " dollars is " << kroner << " kroner.\n";
		break;
	case 'p':
		cout << dollars << " dollars is " << pounds << " pounds.\n";
		break;
	default:
		cout << "I can't convert that currency.\n";
		break;
	}

	// Switch cases are much easier to read than if-else statements, especially if there are a lot of choices present

	cout << "------------------------------------------------\n";

	// while-statement TRY THIS pg111

	char letter = 'A';	// initial character is Capital A
	int number = 'A';	// initial value is Capital A in ASCII, which is 65

	while (number <= 200) {		// loop will continue until is reaches the number 200
		cout << letter << '\t' << number << '\n';
		++letter;		// output are letters incremented by 1
		++number;		// output is number incremented by 1
	}

	// Program shows the corresponding characters to ASCII numbers, starting from capital letter A
	// translated the while statement above to for statement
	// used the variables from the previous program

	for (char letter = 'A'; number <= 200; ++letter) {
		cout << letter << '\t' << number << '\n';
		++number;
	}
	cout << "------------------------------------------------\n";

	vector<string> words;		// vector that stores words
	for (string wstorage; cin >> wstorage;) {	// temporary storage named wstorage, for loop will keep asking input from user
		words.push_back(wstorage);
	}
	cout << "Number of words: " << words.size() << '\n';

	sort(words);

	for (int i = 0; i<words.size(); ++i) {
		if (i == 0 || words[i - 1] != words[i])
			cout << words[i] << '\n';
	}

	cout << "------------------------------------------------\n";

	// Try this on pg 125

	cout << "What are your favorite vegetables?\n";
	cout << "Provide your answer in between spaces.\n";
	cout << "Once you are done, press CTRL+Z and hit 'Enter'. \n";

	vector<string> fav_veggies;		// vector that stores favorite veggies
	for (string wstorage; cin >> wstorage;) {	// temporary storage named wstorage, for loop will keep asking input from user
		fav_veggies.push_back(wstorage);	// store the input to the vector
	}

	sort(fav_veggies);	// sort the vector fav_veggies

	cout << "You have " << fav_veggies.size() << " favorite vegetables.\n";	// output number of elements
	cout << "Your favorite vegetables are:\n";

	string disliked = "eggplant";	// excluded word if mentioned in the vector

	for (int i = 0; i < fav_veggies.size(); ++i) {	// for-loop iterates on all the elements in the vector
		if (fav_veggies[i] == disliked) {
			if (i == 0 || fav_veggies[i - 1] != fav_veggies[i]) {
				cout << "BLEEP" << '\n';			// if word matches the disliked_string, print this statement
			}
		}
		else {
			if (i == 0 || fav_veggies[i - 1] != fav_veggies[i]) {
				cout << fav_veggies[i] << '\n';
			}
			else
		}// if word is not disliked_string, print
	}


	/* What I want to do with this program is:
	* I want to replace disliked string to BLEEP
	* and I don't want to print repeated words, which is basically, if there is 1 bleep, no need to repeat that anymore
	* There's a lot of if statements enclosed in if statements.
	* I will come back to this later.
	*/

	

}

