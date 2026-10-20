#include <iostream>

using namespace std;

int angka;

int main() {

    cout << "Masukkan angka: ";
    cin >> angka;

    int i = 1;
    while (i <= 10) {
        cout << angka << " x " << i << " = " << angka * i << endl;
        i++;
    }

    return 0;
}

//  mnggunakan pengulangan jadi misal aku masukin angka nya 7 tar bakal 1 x 10 sampe 7 x 10 kebawah