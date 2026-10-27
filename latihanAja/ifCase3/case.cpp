// Deskripsi: Menghitung total biaya parkir berdasarkan jenis kendaraan dan durasi waktu.
// Aturan Logika:Jika (If) jenis kendaraan adalah "Motor":Jam pertama: Rp2.000.Jam berikutnya: Tambah Rp1.000 per jam.
// Selain itu, Jika (Else If) jenis kendaraan adalah "Mobil":Jam pertama: Rp5.000.
// Jam berikutnya: Tambah Rp2.000 per jam.Selain itu (Else) $\rightarrow$ Tampilkan pesan "Jenis kendaraan tidak valid".
// Tantangan: Tentukan total biaya parkir yang harus dibayar jika seseorang memarkir Mobil selama 4 jam.

#include <iostream>
#include <string>

using namespace std;

string kendaraan;
int durasiParkir;
float jumlah;

int main() {

    jumlah = 0;

    cout << "Masukan kendaraan : ";
    cin >> kendaraan;

    cout << "Masukan durasi parkir : ";
    cin >> durasiParkir;

    if (kendaraan == "Motor" || kendaraan == "motor")
    {
        if (durasiParkir >= 0)
        {
            jumlah = 2000 + (durasiParkir - 1) * 1000;
            cout << "total biaya parkir adalah : " << jumlah << endl;
        } else {
            cout << "durasi oarkir ga valdi";
        }
        
    }
    else if(kendaraan == "Mobil" || kendaraan == "mobil")
    {
        if (durasiParkir >= 0) {
            jumlah = 5000 + (durasiParkir - 1) * 2000;
            cout << "total biaya parkir adalah : " << jumlah << endl;
        } else {
            cout << "durasi oarkir ga valdi";
        }

    }
    else {
        cout << "kendaraan ga valdi";
    }
    
    

}