#include <iostream>
using namespace std;

typedef struct {
    int x;
    int y;
} nilai;

int main() {
    nilai n1; // Membuat variabel n1 dari tipe struct nilai

    // Mengisi nilai untuk anggota struct
    n1.x = 5;
    n1.y = 10;

    // Menampilkan nilai anggota struct
    cout << "Nilai x = " << n1.x << endl;
    cout << "Nilai y = " << n1.y << endl;

    return 0;
}