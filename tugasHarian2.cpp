#include <iostream>

using namespace std;

int main()
{
	// deklarasi variabel
	int angka,i;

	// input angka dari user
	cout << "Masukkan angka : "; cin >> angka;



	// jika angka inputan user lebih dari 1
	if (angka>1)
	{
		// selama i kurang dari angka-1
		while (i < angka) {
			// jika angka (inputan user) tidak habis dibagi i
			if (angka % i != 0)
			{
				// tambah nilai i dengan 1
				i++;
			}
			else {
				// tampilkan jika angka (inputan user) tersebut bukan angka prima
				cout << "Angka " << angka << " bukan angka prima" << endl;
				return 0;
			}
		}
		// tampilkan jika angka (inputan user) tersebut prima
		cout << "Angka " << angka << " adalah angka prima" << endl;
	}
	else {
		// tampilkan jika angka (inputan user) kurang dari 1
		cout << "Angka " << angka << " bukan angka prima" << endl;
	}
	
	return 0;
}