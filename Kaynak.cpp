#include<iostream>
using namespace std;
int main() {
	int number = 0;
	cout << "Pozitif bolenlerini bulmak istediginiz sayiyi giriniz:";
	cin >> number;

	cout << number << " sayisinin pozitif bolenleri: ";

    for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			cout <<i<<", ";
			
		}

	}
	cout << endl;

	return 0;
}