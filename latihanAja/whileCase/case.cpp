// Kasus 1: Hitung Mundur Peluncuran (Dasar)
// Deskripsi: Menampilkan angka hitung mundur dari 5 sampai 1.
// Aturan Logika:
// Tentukan nilai awal angka = 5.
// Selama (While) angka lebih besar dari 0: tampilkan nilai angka, lalu kurangi angka sebanyak 1.
// Saat angka bernilai 0, kondisi menjadi salah, perulangan berhenti, dan tampilkan pesan "Mulai!".
// Tantangan: Berapa kali proses pengurangan di dalam perulangan tersebut dieksekusi?

#include <iostream>

using namespace std;

int angka;

int main() {
    angka = 0;

    while (angka >= 1)
    {
        cout << angka << " ";
        angka = angka - 1;
    } 
    return 0;
}