#include<iostream>
using namespace std;
int main() {
	int f = 0;
	cout << "Fibonacci dizisinde varligini sorgulamak istediginiz sayiyi giriniz:";
	cin >> f;
	if (f == (f - 1) + (f - 2)) {
		cout << f << " sayisi fibonacci dizisinde yer almaktadir." << endl;
	}
	else {
		cout << f << " sayisi fibonacci dizisinde yer almamaktadir." << endl;
	}


	return 0;
}