#include<iostream>
using namespace std;

//M�kemmel say�lar, kendisi d���ndaki pozitif b�lenlerinin toplam� kendine e�it olan say�lard�r.

int main() {
	int sayi;
	cout << "Mukemmelligini sorgulamak icin bir tamsayi giriniz." << endl;
	cin >> sayi;
	int toplam = 1;
	for (int i = 2; i < sayi; i++) {
		if (sayi % i == 0) { // %i ile tam b�lenlerin i de�i�kenine atanmas�n� sa�lad�k.
			toplam += i;

		}
	}
	if (toplam == sayi) {
		cout << sayi << " tamsayisi mukemmel bir sayidir." << endl;

	}
	else {
		cout << sayi << " tamsay�s� m�kemmel bir say� de�ildir." << endl;

	}

	return 0;
}