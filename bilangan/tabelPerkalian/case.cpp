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