#include <iostream>


int prime_checker(int v) {
	const vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	for (int v : prime){	//v is this function's control var
		return v;
	}
}

int main(){
	
	vector<int> prime2;
	
	/* The following block of code checks the numbers 1 to 100
	and see if they are prime numbers similar to the vector prime.*/
	
	for (int i = 1; i <= 100; ++i){
		if (i == prime_checker(v)){
			prime2.push_back(i);
		}
	}
	
	/* my problem here is
	I don't know if the function should take an argument or not
	because it shouldn't need to take an argument
	
	What i want to do is to make a code that checks the 1 to 100
	against the vector prime. */
	
		
	/* The following block of code has the same output as the first one.
		The difference is that this checks the numbers 1 to 100, based on
		the formula of identifying prime numbers. */
		
	vector<int> prime2;
	
	for (int i = 0; i <= 100; ++i){
		const double two = i % 2
		const double three = i % 3
		const double five = i % 5
		const double seven = i % 7
		
		if (two != 0 && three != 0 && five != 0 && seven != 0)
			prime2.push_back(i);
	}
	
	
	for(int x : prime)
		cout << x << '\n';
	for(int y : prime2)
		cout << y << '\n';
}
