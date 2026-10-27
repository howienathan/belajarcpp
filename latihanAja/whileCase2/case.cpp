// Kasus 2: Celengan Target (Menengah)
// Deskripsi: Menambah saldo tabungan secara terus-menerus sampai mencapai target Rp100.000.
// Aturan Logika:
// Tentukan total_saldo awal = 0.
// Selama (While) total_saldo kurang dari 100.000: minta masukan nominal uang baru, lalu tambahkan nilai tersebut ke total_saldo.
// Begitu total_saldo mencapai atau melebihi 100.000, perulangan berhenti dan tampilkan "Target Tercapai".
// Tantangan: Jika pengguna memasukkan nominal Rp40.000, Rp40.000, dan Rp30.000 secara berurutan, berapa total perulangan yang terjadi?

#include <iostream>

using namespace std;

float totalSaldo;
int setor;
int target;

int main() {
    totalSaldo = 0;
    target = 100000;

    while (totalSaldo <= target)
    {
        cout << "masukan nominal setoran : ";
        cin >> setor;

        totalSaldo = totalSaldo + setor;
        cout << "total saldo skrg adalah : " << totalSaldo;
    }
    
}