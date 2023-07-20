#include <iostream>
using namespace std;


int main() {
	int i, j ;
	char op;

	    cout << "Enter a number."<< endl;
		cin >>  i;
		cout << "Select an operation(+,-,*,/,%)."<< endl;
		cin >>  op;
		cout << "Enter a number." << endl;
		cin >>  j;

        switch(op) {
			case'+':
				cout << i << '+' << j << '=' << i + j<<endl;
				break;
			case'-':
				cout << i << '-' << j << '=' << i - j<<endl;
				break;

			case'*':
				cout << i << '*' << j << '=' << i * j<<endl;
				break;

			case'/':
				if (j == 0) {
					cout << "Undefined.";
						break;

				}
				else   {

					cout << i << '/' << j << '=' << i / j<<endl ;
					break;

				}
				
			case'%':
				if (j == 0) {
					cout << "Undefined."<< endl;
					break;

				}
				else {

					cout << i << '%' << j << '=' << i % j<<endl;
					break;

				}
				

	    }
		

		cout <<"" << endl;
	return 0;
}