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
	cout << '\n';
	cout << "-----------------------------------------------\n";
	cout << "Exercise #10\n"; // NOT YET DONE
	cout << '\n';

	/*
	I haven't done the feature where the user can input something to make the computer's answers random.
	The commented codes are for that, but it doesn't work well as I needed it to be.
	
	vector<int> random;			// pushes numbers entered by user here
	int loop = 0;				// loop variable for the next loop below

	cout << "Enter the numbers 0 to 9 in any order. \n";
	for (int x; loop < 10; cin >> x) {		// pushes input from x
		random.push_back(x);				// to vector named random
		++loop;								// increment loop until it hits 10
	}
	*/

	cout << "Let's play Rock, Paper, Scissors and have pun! \n";
	cout << "Enter r for rock, p for paper, and s for scissors. \n";
	cout << "Good luck! \n";

	// Computer's "random" answers
	vector<char> computer = { 'r', 's', 'p', 's', 'p', 'r', 's', 'p', 'r' };

	const char rock = 'r';
	const char paper = 'p';
	const char scissors = 's';
	int round = 0;		// loop variable
	int human_score = 0;
	int computer_score = 0;

	// Computer vs Human
	for (char human; cin >> human; ++round) {
		/*
		for (int round : random)
		*/
		cout << computer[round] << '\n';
		switch (human) {
		case 'r':
			if (computer[round] == 's') {
				cout << "You win. YOU. ROCK. \n";
				++human_score;
			}
			else if (computer[round] == 'p') {
				cout << "You lose. I crumpled you. \n";
				++computer_score;
			}
			else
				cout << "Draw. Shale we try again? \n";
			break;
		case 'p':
			if (computer[round] == 'r') {
				cout << "You win. You're on a roll. \n";
				++human_score;
			}
			else if (computer[round] == 's') {
				cout << "You lose. That's tear-able.\n";
				++computer_score;
			}
			else
				cout << "Draw. That's a wrap. \n";
			break;
		case 's':
			if (computer[round] == 'p') {
				cout << "You win. You're a cut above the rest. \n";
				++human_score;
			}
			else if (computer[round] == 'r') {
				cout << "You lose. Shear-iously. \n";
				++computer_score;
			}
			else
				cout << "Draw. Touche. \n";
			break;
		default:
			cout << "That's not part of the game. \n";
			break;
		}

		cout << "You = " << human_score << "\n Me = " << computer_score << '\n';

		if (round == 7) {
			cout << "We're on to the last round. Let's WRAP it up! \n";
			cout << "To continue, enter your answer. \n";
			cout << "If you wish to quit, enter CTRL+z and press enter. \n";
			cout << '\n';
			cout << '\n';
		}
		else if (round == 8) {
			if (human_score < computer_score) {
				cout << "You LOSE. Sorry, you didn't make the cut. \n";
				cout << "Press CTRL+Z and enter to exit. \n";
			}
			else {
				cout << "Congrats! You WIN. Sheariously. \n";
				cout << "Press CTRL+Z and enter to exit. \n";
			}
		}
		else {
			cout << "To continue, enter your answer. \n";
			cout << "If you wish to quit, press CTRL+Z and press enter. \n";
			cout << '\n';
			cout << '\n';
		}

	}
	
}
