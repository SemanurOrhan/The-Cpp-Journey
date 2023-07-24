#include<iostream>
using namespace std;
int main() {
	int prime = 0;
	cout << "Asalligini sorgulamak istediginiz sayiyi giriniz:";
	cin >> prime;

	bool isprime = true; //bool tipindeki deðiþkenin true olarak baþlatýlýp þartlarý kontrol ederek asallýðýný sorgulamaya yarayan önemli bir kýsýmdýr.Bu projede öðrendiðim en önemli adým.

	for (int i = 2; i >= 2 && i <= prime / 2;i++) {
		if (prime % i == 0) {
			isprime = false;
			break;
		}
	}

	if (isprime) {
		cout <<prime<< " sayisi asal bir sayidir." << endl;

	}
	else {
		cout <<prime<< " sayisi asal bir sayi degildir." << endl;
	}

	return 0;
}