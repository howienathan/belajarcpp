#include <iostream>
using namespace std;

// 1. Luas_Persegi(n): Mengembalikan hasil dari n dikali n
int Luas_Persegi(int n) {
    return n * n;
}

// 2. is_ganjil(n): Mengecek apakah bilangan tersebut ganjil
bool is_ganjil(int n) {
    return n % 2 != 0;
}

// 3. is_genap(n): Mengecek apakah bilangan tersebut genap
bool is_genap(int n) {
    return n % 2 == 0;
}

// 4. sum_n(n): Menampilkan deret dari 1 sampai n dan menghitung jumlahnya
int sum_n(int n) {
    int total = 0;

    cout << "Deret bilangan 1 hingga " << n << ": ";

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        total += i;
    }

    cout << endl;

    return total;
}

// 5. avg_n(n): Menghitung rata-rata dari jumlah bilangan 1 sampai n
double avg_n(int n) {
    int total = sum_n(n);

    return static_cast<double>(total) / n;
}

int main() {
    int n;

    // Memasukkan bilangan dari pengguna
    cout << "Masukkan bilangan bulat (n): ";
    cin >> n;


    cout << "Luas Persegi (" << n << " x " << n << ") : "
         << Luas_Persegi(n) << endl;

    cout << "Apakah ganjil?           : "
         << (is_ganjil(n) ? "True" : "False") << endl;

    cout << "Apakah genap?            : "
         << (is_genap(n) ? "True" : "False") << endl;


    // Memanggil avg_n(), yang di dalamnya juga memanggil sum_n()
    double rata_rata = avg_n(n);

    cout << "Rata-rata (avg_n)        : "
         << rata_rata << endl;

    return 0;
}