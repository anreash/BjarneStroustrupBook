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

		cout << "Enter name to know what score. Enter exit to terminate. \n";

		string temp;
		while (cin >> temp)
		{
			if (temp == "exit") break;
			bool found = false;
			for (int i = 0; i < names.size(); ++i) 
			{
				if (temp == names[i]) {
					cout << "Score is " << scores[i] << '\n';
					found = true;
				}
			}
			if (found == false)
				cout << "Name not found.\n\n";
		}
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

