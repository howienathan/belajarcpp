#include <iostream>

using namespace std;

int N, i , jumlah ;

int main() {

    i = 1;
    jumlah = 0;

    cout << "Masukkan N: ";
    cin >> N;

    while (i <= N) {
        jumlah = jumlah + i;

        cout << i;
        if (i < N) {
            cout << "+";
        }

        i++;
    }

    cout << " = " << jumlah;

    return 0;
}

// disini ngejumlahin semua bilangan bulat dulu dari 1 sampe N. terus pake pengulangan di while nambahin angka ke jumlah 
// contoh = jika N = 4, hasilnya 1 + 2 + 3 + 4 = 10