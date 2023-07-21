#include <iostream>
using namespace std;

int main() {
	int number = rand() % 101;
	int guess;


	cout << "Guess the number I got. Hint, the number is between 1 and 100! Write your guess."<< endl;
		cin >> guess;


	while (guess != number) {
		
		if (guess < number) {

			cout << "Your guess is less than my number. Try again. Write down your guess." << endl;
			cin >> guess ;
		}
		else if (guess > number) {

			cout << "Your guess is greater than my number. Try again. Write your guess." << endl;
			cin >>guess;
		}
		else if (number > 100) {
			cout << "You're out of the guessing range! Guess again. Please choose a number from 1-100!" << endl;
			cin >> guess;
		}
	}
		
	
	cout << "Congratulations you found it!" << endl;
	
	
	


   return 0;
}
