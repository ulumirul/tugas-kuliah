#include<iostream>
using namespace std;

void main() {
	int angka = 0, genap = 0, ganjil = 0, i = 0;
	cout << "masukk";
	cin >> angka;
	while (i < angka)
	{
		i++;
		if (i % 2 == 0) {
			genap = i;
			cout << genap << endl;
		}
		else {
			ganjil = i;
			//cout << ganjil << endl;
		}
		//i++;
	}

	
}