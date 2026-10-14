#include <iostream>

using namespace std;

struct Kendaraan {
    int jenisKendaraan; // 1 = Mobil, 2 = Motor
    int lamaParkir;     // dalam jam
    int biayaParkir;
};

int main() {
    cout << "=== Program Perhitungan Biaya Parkir ===" << endl;

	cout << "Pilih jenis kendaraan (1 = Mobil, 2 = Motor): ";
	cin >> jenisKendaraan;
	cout << "Masukkan lama parkir dalam jam: ";
	cin >> lamaParkir;

	if (lamaParkir < 0) {
		cout << "Lama parkir tidak valid." << endl;
		return 0;
	}

	if (jenisKendaraan == 1) {
		if (lamaParkir <= 2) {
			biayaParkir = 5000;
		} else {
			biayaParkir = 5000 + (lamaParkir - 2) * 2000;
		}
	} else if (jenisKendaraan == 2) {
		if (lamaParkir <= 2) {
			biayaParkir = 3000;
		} else {
			biayaParkir = 3000 + (lamaParkir - 2) * 1000;
		}
	} else {
		cout << "Pilihan kendaraan tidak valid." << endl;
		return 0;
	}

	cout << "Biaya parkir: Rp" << biayaParkir << endl;
	return 0;
}
