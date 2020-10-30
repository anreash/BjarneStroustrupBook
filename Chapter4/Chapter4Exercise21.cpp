#include "std_lib_facilities.h"

using namespace std;

int main()
{
	try
	{
		vector<string> names;
		vector<int> scores;
		string name{ "-" };
		int score{ 0 };

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

		cout << "Enter name to know what score. Enter / to terminate. \n";

		int temp{ 0 };
		while (cin >> temp)
		{
			if (!temp) break;
			bool found = false;
			for (int i = 0; i < scores.size(); ++i) 
			{
				if (temp == scores[i]) 
				{
					cout << names[i] << '\n';
					found = true;
				}
			}
			if (found == false)
				cout << "Score not found.\n\n";
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

/*
Error when input is floating point numbers
*/

