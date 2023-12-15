#include<iostream>
using namespace std;

void main() {
	int input = 0, i = 0, ganjil = 0, genap = 0;
	cout << "masukkan angka : ";
	cin >> input;
	do
	{
		if (i % 2 == 0) {
			genap += i;
		}
		else {
			ganjil += i;
		}
		i++;
	} while (i < input);
	cout << genap << endl;
	cout << ganjil << endl;
}
