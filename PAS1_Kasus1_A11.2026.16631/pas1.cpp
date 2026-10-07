#include <iostream>
#include <cmath> 

using namespace std;












void soal1() {
    // kamus global
    double a;
    cout << "=== Nomor 1: y = a * a * a + 7 ===" << endl;
    cout << "Masukkan nilai a: ";
    cin >> a;

    double y = a * a * a + 7;
    cout << "Hasil y = " << y << "\n\n";
}














void soal2() {
    double a, b, c, x;
    cout << "=== Nomor 2: y = ax^2 + bx + c ===" << endl;
    cout << "Masukkan nilai a: "; cin >> a;
    cout << "Masukkan nilai b: "; cin >> b;
    cout << "Masukkan nilai c: "; cin >> c;
    cout << "Masukkan nilai x: "; cin >> x;

    double y = (a * x * x) + (b * x) + c;
    cout << "Hasil y = " << y << "\n\n";
}


void soal3() {
    double bilangan, total = 0;
    cout << "=== Nomor 3: Jumlah & Rata-rata 5 Bilangan ===" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> bilangan;
        total += bilangan; 
    }

    double rataRata = total / 5;

    cout << "a. Total Jumlah : " << total << endl;
    cout << "b. Rata-rata    : " << rataRata << "\n\n";
}


void soal4() {
    double celcius;
    cout << "=== Nomor 4: Konversi Suhu ===" << endl;
    cout << "Masukkan suhu dalam Celcius (C): ";
    cin >> celcius;

    
    double fahrenheit = (9.0 / 5.0) * celcius + 32;
    double kelvin     = celcius + 273;
    double reamur     = (4.0 / 5.0) * celcius;

    cout << "a. Celcius ke Fahrenheit : " << fahrenheit << " F" << endl;
    cout << "b. Celcius ke Kelvin     : " << kelvin << " K" << endl;
    cout << "c. Celcius ke Reamur     : " << reamur << " R" << endl;
}

// deskripsi
int main() {
    
    soal1();
    soal2();
    soal3();
    soal4();

    return 0;
}