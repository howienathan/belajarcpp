#include <iostream>

using namespace std;

// deskripsi
int main() {
    // kamus global
    int a, b;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    while ( a > b ) {
        b *= 2;
    }

    for (int i = b; i >= a; i--) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}