#include <iostream>
using namespace std;

int main() {
	int number = 0;
	cout <<"Faktoriyelini hesaplamak istediginiz sayiyi giriniz:" << endl;
	cin >> number;

	long long factorial = 1; //B�y�k say�larda i�lemi yapabilmek i�in long long olarak tan�mlanm��t�r.

		for (int i=1; i <= number; i++) {
			factorial *= i;

		}

	cout << number << "! =" << factorial << endl;

	return 0;
}