#include <iostream>
using namespace std;

int main() {
    
    int i = 15, *p, *q;

    p = &i;
    *p = 20;

    
    cout << " 1. Menampilkan nilai i " << endl;
    cout << "Nilai i: " << i << endl << endl;

    
    i = 50;

    cout << "2. Setelah i = 50" << endl;
    cout << "Nilai i            : " << i << endl;
    cout << "Nilai p (alamat)   : " << p << endl;
    cout << "Nilai *p (isi data): " << *p << endl << endl;

    
    q = &i;
    *q = 100;

    
    cout << "3. Setelah q = &i dan *q = 100" << endl;
    cout << "Nilai i            : " << i << endl;
    cout << "Nilai p (alamat)   : " << p << " -> *p (isi): " << *p << endl;
    cout << "Nilai q (alamat)   : " << q << " -> *q (isi): " << *q << endl;

    return 0;
}