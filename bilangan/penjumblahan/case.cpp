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