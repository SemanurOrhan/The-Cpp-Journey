#include<iostream>
#include<cmath> //Bu k�t�phane matematiksel i�lemleri yapmam�z� sa�layan fonksiyonlar� kullanmam�z i�in eklendi.
using namespace std;

int main() {
	double n = 0 ; //Ondalikli sayilarda islemi gerceklestirebilmek icin double olarak tan�mland�.
	cout << "Karekokunu bulmak istediginiz tam sayiyi giriniz:";
	cin >> n;
	double k = sqrt(n);//sqrt() i�levi karek�k al�r.
	cout << n << " sayisinin karekoku: " << k << " olarak hesaplanmistir." << endl;


	return 0;
}