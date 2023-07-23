#include <iostream>
using namespace std;

int main() {
	int number = 0;
	cout <<"Faktoriyelini hesaplamak istediginiz sayiyi giriniz:" << endl;
	cin >> number;

	long long factorial = 1; //Büyük sayýlarda iþlemi yapabilmek için long long olarak tanýmlanmýþtýr.

		for (int i=1; i <= number; i++) {
			factorial *= i;

		}

	cout << number << "! =" << factorial << endl;

	return 0;
}