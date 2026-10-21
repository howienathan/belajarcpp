// mencetak nama dengan looping 25x

#include <iostream>

using namespace std;
// kamus
int i, a, n; 
float jumlah;

// deskripsi

int main() {

// // tambah
//     i = 1;
//     while(i <= 16) {
//         cout << i << "  ";
//         i = i + 1;
//     }
//     cout << endl;   

// // pengurangan
//     a = 16;
//     while(a >= 1) {
//         cout << a << "  ";
//         a = a - 1;
//     }

// // campur
//     a = 16;
//     i = 1;
//     while(a >= 1) {
//         cout << a << "  ";
//         a = a - 1;
//         i = i + 1;
//     }  

// jumlah semua

    jumlah = 0;
    i = 1;

    cout << "masukan n : ";
    cin >> n;


    while(i <= n ) {
        cout << i << " + ";
        jumlah = jumlah + i;
        i = i + 1;
        // i++;
    }

    cout << " = " << jumlah; 

    return 0;
}