#include<iostream>
#include<string>

using namespace std;

int main() {

	string metin;   //Metin girisi alabilmek icin string tipi degisken secmeliyiz.

	cout << "Karakter sayisini ogrenmek istediginiz metni giriniz:";

	getline (cin, metin);  //getline fonksiyonu metindeki bosluk karakterinden sonraki karakterleri de sayacaktir.Bunun yerine cin kullanimi bosluk karakterinden sonrasini saymamaktadir.

	cout << metin.size() << " tane karakter icermektedir.";

	return 0;
}