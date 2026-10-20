/*
    Judul   : Program Pendataan Diri Mahasiswa
    Materi  : while, if-else, input dan output
    Kelas   : IFAN RIZQA

    Deskripsi:
    Program meminta data diri mahasiswa,
    menentukan kategori umur dan jenis kelamin,
    lalu memberikan pilihan untuk mengulang.
*/

#include <iostream>
#include <string>
using namespace std;

 // Kamus variabel
    string nama;
    string kategori;
    char jk;
    char pilihan;
    int umur;
    
//diskripsi
int main() 
{
   
  // Inisialisasi agar program dapat dimulai
    pilihan = 'Y';

    // Loop selama pengguna memilih Y atau y
    while (pilihan == 'Y' || pilihan == 'y') 
    {

        cout << "=================================\n";
        cout << "     PENDATAAN DIRI MAHASISWA\n";
        cout << "=================================\n";

        // Memasukkan nama
        cout << "Nama mahasiswa : ";
        getline(cin >> ws, nama);

        // Memasukkan umur
        cout << "Umur           : ";
        cin >> umur;

        // Memasukkan kode jenis kelamin
        cout << "Jenis kelamin (L/P): ";
        cin >> jk;

        // Percabangan untuk menentukan kategori umur
        if (umur < 18) 
            {
                kategori = "Di bawah 18 tahun";
            } 
            else 
                {
                    kategori = "Dewasa";
                }

        // Menampilkan hasil pemeriksaan jenis kelamin
        cout << "\n----------- HASIL DATA -----------\n";
        cout << "Nama           : " << nama << endl;
        cout << "Umur           : " << umur << " tahun" << endl;
        cout << "Kategori umur  : " << kategori << endl;

        // Percabangan jenis kelamin
        if (jk == 'L' || jk == 'l') 
            {
                cout << "Jenis kelamin  : Laki-laki\n";
            } 
        else if (jk == 'P' || jk == 'p') 
                {
                    cout << "Jenis kelamin  : Perempuan\n";
                } 
            else 
                {
                    cout << "Jenis kelamin  : Kode tidak dikenal\n";
                }

        cout << "----------------------------------\n";

        // Menanyakan apakah ingin mengulang
        cout << "Input data lagi? (Y/T): ";
        cin >> pilihan;

        cout << endl;
    }

    cout << "Terima kasih. Program selesai.\n";

    return 0;
}