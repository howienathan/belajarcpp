/*********************************
 

judul : bermain dengan waktu
      : waktu formatnya adalah JJ:MM:DD 
      type bentukan ADT struct 

kamus :
    
    Jx, Mx, Dx <-- integer
    
deskripsi :
    input Jx
    index Mx
    index Dx
    total_detik <-- (Jx * 3600) + (Mx * 60) + Dx;
    output hasil
 */

//judul : bermain jam

#include <iostream>
using namespace std;
//kamus
int Jx, Mx, Dx;
int Jy, My, Dy;
int durasi_Detikx, durasi_Detiky;
int jz, mz, dz;
int totaldurasi;

//deskripsi
int main()
{
   cout << "ajar menghargai waktu" << endl;

   cout << "masukkan jam awal: ";
   cin >> Jx;
   cout << "masukkan menit awal: ";
   cin >> Mx;
   cout << "masukkan detik awal: ";
   cin >> Dx;
   cout << "hasil deteksi waktu" << endl;
   cout << "jam masuknya adalah " << Jx << endl;
   cout << "menit masuknya adalah " << Mx << endl;
   cout << "detik masuknya adalah " << Dx << endl;
   durasi_Detikx = (Jx * 3600) + (Mx * 60) + Dx;
   cout << "total detik adalah " << durasi_Detikx << endl;

   cout << "masukkan jam akhir: ";
   cin >> Jy;
   cout << "masukkan menit akhir: ";
   cin >> My;
   cout << "masukkan detik akhir: ";
   cin >> Dy;
   cout << "hasil deteksi waktu" << endl;
   cout << "jam masuknya adalah " << Jy << endl;
   cout << "menit masuknya adalah " << My << endl;
   cout << "detik masuknya adalah " << Dy << endl;
   durasi_Detiky = (Jy * 3600) + (My * 60) + Dy;
   cout << "total detik adalah " << durasi_Detiky << endl;
    //menghitung durasi
    totaldurasi = durasi_Detiky - durasi_Detikx;
    cout << endl;
   cout << "durasi waktu adalah " << totaldurasi << " detik" << endl;

    return 0;
}