#include <iostream>

using namespace std;
    float jumlah;
    int angka;

int main() {
    jumlah = 0;
    angka = 1;

    while (angka <= 10) {
        if (angka % 2 == 0) {
            cout << angka << " + ";
            jumlah = jumlah + angka;
        } else {
            cout << angka <<" - ";
            jumlah = jumlah - angka;
        }
        angka = angka + 1;
    }

    cout << " = " << jumlah;
}