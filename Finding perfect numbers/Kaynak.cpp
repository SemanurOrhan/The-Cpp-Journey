#include<iostream>
using namespace std;

//Mükemmel sayýlar, kendisi dýþýndaki pozitif bölenlerinin toplamý kendine eþit olan sayýlardýr.

int main() {
	int sayi;
	cout << "Mukemmelligini sorgulamak icin bir tamsayi giriniz." << endl;
	cin >> sayi;
	int toplam = 1;
	for (int i = 2; i < sayi; i++) {
		if (sayi % i == 0) { // %i ile tam bölenlerin i deðiþkenine atanmasýný saðladýk.
			toplam += i;

		}
	}
	if (toplam == sayi) {
		cout << sayi << " tamsayisi mukemmel bir sayidir." << endl;

	}
	else {
		cout << sayi << " tamsayýsý mükemmel bir sayý deðildir." << endl;

	}

	return 0;
}