#include<iostream>
using namespace std;

void main() {
	int nilai = 0, genap = 0, ganjil = 0;
	cout << "masukkan angka : ";
	cin >> nilai;
	for (int i = 0; i < nilai; i++)
	{
		if (i % 2 == 0) {
			genap += i;
		}
		else {
			ganjil += i;
		}
	}
	cout << "jumlah nilai genap " << genap << endl;
	cout << "jumlah nilai ganjil " << ganjil;
}