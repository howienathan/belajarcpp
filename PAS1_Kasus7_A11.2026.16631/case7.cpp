#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int i = 15, *p, *q;

    p = &i;
    *p = 20;

    // 1. Menampilkan nilai i
    cout << " 1. Menampilkan nilai i " << endl;
    cout << "Nilai i: " << i << endl << endl;

    // 2. Mengubah nilai i menjadi 50
    i = 50;

    cout << "2. Setelah i = 50" << endl;
    cout << "Nilai i            : " << i << endl;
    cout << "Nilai p (alamat)   : " << p << endl;
    cout << "Nilai *p (isi data): " << *p << endl << endl;

    // 3. Menyimpan alamat i ke q
    q = &i;
    *q = 100;

    // 3a. Menampilkan nilai i, p, dan q
    cout << "3. Setelah q = &i dan *q = 100" << endl;
    cout << "Nilai i            : " << i << endl;
    cout << "Nilai p (alamat)   : " << p << " -> *p (isi): " << *p << endl;
    cout << "Nilai q (alamat)   : " << q << " -> *q (isi): " << *q << endl;

    return 0;
}