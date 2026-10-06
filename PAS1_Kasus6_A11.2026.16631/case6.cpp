#include <iostream>
using namespace std;


int Luas_Persegi(int n) {
    return n * n;
}


bool is_ganjil(int n) {
    return n % 2 != 0;
}


bool is_genap(int n) {
    return n % 2 == 0;
}


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


double avg_n(int n) {
    int total = sum_n(n);

    return static_cast<double>(total) / n;
}

int main() {
    int n;

    
    cout << "Masukkan bilangan bulat (n): ";
    cin >> n;


    cout << "Luas Persegi (" << n << " x " << n << ") : "
         << Luas_Persegi(n) << endl;

    cout << "Apakah ganjil?           : "
         << (is_ganjil(n) ? "True" : "False") << endl;

    cout << "Apakah genap?            : "
         << (is_genap(n) ? "True" : "False") << endl;


    
    double rata_rata = avg_n(n);

    cout << "Rata-rata (avg_n)        : "
         << rata_rata << endl;

    return 0;
}