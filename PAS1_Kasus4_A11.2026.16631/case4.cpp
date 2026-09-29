#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input jumlah data: ";
    cin >> n;

    int A[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> A[i];

        total += A[i];
    }

    int terbesar = A[0];
    int terkecil = A[0];

    for (int i = 1; i < n; i++) {
        if (A[i] > terbesar) {
            terbesar = A[i];
        }

        if (A[i] < terkecil) {
            terkecil = A[i];
        }
    }

    double rataRata = (double) total / n;

    cout << "\nIsi array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    cout << "\n\nNilai terbesar: " << terbesar << endl;
    cout << "Nilai terkecil: " << terkecil << endl;
    cout << "Jumlah: " << total << endl;
    cout << "Rata-rata: " << rataRata << endl;

    return 0;
}