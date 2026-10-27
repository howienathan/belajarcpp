// Kasus 2: Akses Wahana Permainan (Menengah)Deskripsi: Sebuah wahana roller coaster memberlakukan dua syarat 
// keselamatan sekaligus.Aturan Logika:Jika (If) tinggi badan minimal 140 cm DAN usia minimal 12 tahun $\rightarrow$
// Boleh naik wahana.Selain itu (Else) $\rightarrow$ Akses ditolak demi keselamatan.Tantangan: Uji logika ini pada 3 skenario
// :Usia 15 tahun, tinggi 135 cm.Usia 11 tahun, tinggi 150 cm.Usia 13 tahun, tinggi 145 cm.

#include <iostream>

using namespace std;

int umur, tb;

main() {
    cout << "masukan Umur anda : ";
    cin >> umur;

    cout << "masukan tb anda : ";
    cin >> tb;

    if (tb >= 140 && umur >= 12)
    {
        cout << "anda boleh masuk";
    } else 
    {
       cout << "gabolehhhhh";
    }
    
}