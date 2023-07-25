#include<iostream>
#include<cmath> //Bu kütüphane matematiksel iþlemleri yapmamýzý saðlayan fonksiyonlarý kullanmamýz için eklendi.
using namespace std;

int main() {
	double n = 0 ; //Ondalikli sayilarda islemi gerceklestirebilmek icin double olarak tanýmlandý.
	cout << "Karekokunu bulmak istediginiz tam sayiyi giriniz:";
	cin >> n;
	double k = sqrt(n);//sqrt() iþlevi karekök alýr.
	cout << n << " sayisinin karekoku: " << k << " olarak hesaplanmistir." << endl;


	return 0;
}