#include "std_lib_facilities.h"

using namespace std;

int main()
{
	try
	{
		vector<string> names;
		vector<int> scores;
		string name;
		int score;

		cout << "Enter name and corresponding score.\n";
		cout << "Enter NoName 0 to exit program.\n\n";

		for (int i = 0; cin >> name >> score;)
		{
			if (name == "NoName" && score == 0)
				break;
			for (string temp : names)
			{
				if (temp == name)
					error("Name entered twice.");
			}
			names.push_back(name);
			scores.push_back(score);
		}

		cout << "\n\nList of Scores:\n";
		for (int i = 0; i < name.size() - 1; ++i)
			cout << names[i] << " " << scores[i] << '\n';

		cout << "\n\n";
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}

	keep_window_open();
	return 0;

}

