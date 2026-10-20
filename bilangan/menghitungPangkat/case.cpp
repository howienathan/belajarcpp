#include <iostream>

using namespace std;
int A, N, i , hasil;

int main() {

    i = 1;
    hasil = 1;

    cout << "Masukkan A: ";
    cin >> A;

    cout << "Masukkan N: ";
    cin >> N;

    while (i <= N) {
        hasil = hasil * A;
        i++;
    }

    cout << "Hasil = " << hasil;

    return 0;
}

// karna ini gapake pow jadi pakenya while biar perulangan sesuai pangkat