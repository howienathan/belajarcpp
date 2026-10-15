
/*
//JUDUL
//=======================================================
// MINI SISTEM PAKAR BERDASARKAN GEJALA
// DUKUN DUKUNAN
// Author : IFAN RIZQA
//
// Membandingkan teks dengan strcmp().
// Menggunakan IF, SWITCH-CASE, AND, dan OR.
// Tanpa LOOP.
//=======================================================
*/

#include <iostream>
#include <cstring>
using namespace std;

// KAMUS
    char nama[50];  // <-- sama juga dengan type string 
    char kode[5];
    char gejala1[80];
    char gejala2[80];
    
    int pilihan;

    int demam1, batuk1;
    int kunang1, pusing1;

    // Penanda gejala kedua
    int demam2, batuk2;
    int kunang2, pusing2;

// diksripsi
int main()
{
    
    pilihan = 0;

    // Penanda gejala pertama
    demam1 = 0, batuk1 = 0;
    kunang1 = 0, pusing1 = 0;

    // Penanda gejala kedua
    demam2 = 0, batuk2 = 0;
    kunang2 = 0, pusing2 = 0;

    //DISKRIPSI
    //===================================================

    cout << "========================================\n";
    cout << " MINI SISTEM PAKAR BERDASARKAN GEJALA\n";
    cout << "========================================\n";

    cout << "Nama lengkap pasien: ";
    cin.getline(nama, 50);

    cout << "\nPilih kelompok pemeriksaan:\n";
    cout << "A. Pernapasan\n";
    cout << "B. Keluhan umum\n";
    cout << "Kode: ";
    cin >> kode;

    // strcmp membandingkan isi teks.
    // Nilai 0 berarti kedua teks sama.

    if (strcmp(kode, "A") == 0 || strcmp(kode, "a") == 0)
    {
        pilihan = 1;
    }
    else if (strcmp(kode, "B") == 0 || strcmp(kode, "b") == 0)
         {
                pilihan = 2;
         }
         else
                {
                    pilihan = 0;
                }

    // Input dua gejala dalam bentuk teks.
    // cin.ignore() membuang karakter ENTER
    // yang tersisa setelah input kode.

    cin.ignore(1000, '\n');
    
    cout << "\n gejala 1 [demam, batuk, pusing, mata berkunang2] ";
    cout << "\n Masukkan gejala pertama: ";
    cin.getline(gejala1, 80);

    cout << "\n gejala 2 [batuk, demam, pusing, mata berkunang2] ";
    cout << "\n Masukkan gejala kedua: ";
    cin.getline(gejala2, 80);

    //===============================================
    // MENGENALI GEJALA PERTAMA
    //===============================================

    // OR menerima variasi penulisan DEMAM

    if (strcmp(gejala1,"demam") == 0 || strcmp(gejala1,"Demam") == 0 ||strcmp(gejala1, "DEMAM") == 0)
    {
        demam1 = 1;
    }

    // OR menerima variasi penulisan BATUK

    if (strcmp(gejala1,"batuk") == 0 || strcmp(gejala1,"Batuk") == 0 || strcmp(gejala1, "BATUK") == 0)
    {
        batuk1 = 1;
    }

    // OR menerima variasi penulisan
    // MATA BERKUNANG-KUNANG

    if (strcmp(gejala1, "mata berkunang-kunang") == 0 || strcmp(gejala1, "Mata berkunang-kunang") == 0 ||strcmp(gejala1, "MATA BERKUNANG-KUNANG") == 0)
    {
        kunang1 = 1;
    }

    // OR menerima variasi penulisan PUSING

    if (strcmp(gejala1, "pusing") == 0 || strcmp(gejala1, "Pusing") == 0 || strcmp(gejala1, "PUSING") == 0)
    {
        pusing1 = 1;
    }

    //===============================================
    // MENGENALI GEJALA KEDUA
    //===============================================

    if (strcmp(gejala2, "demam") == 0 || strcmp(gejala2, "Demam") == 0 || strcmp(gejala2, "DEMAM") == 0)
    {
        demam2 = 1;
    }

    if (strcmp(gejala2, "batuk") == 0 ||strcmp(gejala2, "Batuk") == 0 || strcmp(gejala2, "BATUK") == 0)
    {
        batuk2 = 1;
    }

    if (strcmp(gejala2, "mata berkunang-kunang") == 0 ||strcmp(gejala2, "Mata berkunang-kunang") == 0 ||strcmp(gejala2, "MATA BERKUNANG-KUNANG") == 0)
    {
        kunang2 = 1;
    }

    if (strcmp(gejala2, "pusing") == 0 || strcmp(gejala2, "Pusing") == 0 || strcmp(gejala2, "PUSING") == 0)
    {
        pusing2 = 1;
    }

    //===============================================
    // SWITCH-CASE: PEMERIKSAAN KELOMPOK
    //===============================================

    cout << "\n========================================\n";
    cout << "HASIL SIMULASI UNTUK: " << nama << endl;
    cout << "========================================\n";

    switch (pilihan)
    {
        case 1:
            // Kelompok pernapasan

            cout << "Kelompok: Pernapasan\n";

            // AND:
            // Kedua gejala harus berupa demam dan batuk,
            // tanpa memedulikan urutan input.

            if ((demam1 == 1 && batuk2 == 1) || (batuk1 == 1 && demam2 == 1))
            {
                cout << "Kombinasi demam dan batuk dikenali.\n";
                cout << "Perlu evaluasi dengan algoritma tingkat tinggi.\n";
                cout << "Jangan-jangan anda dalam pemantauan pihak berwajib.\n";
            }
            else if ((demam1 == 1 || batuk1 == 1) && (demam2 == 1 || batuk2 == 1))
            	 {
             	    cout << "Gejala pernapasan dikenali,\n";
               	    cout << "anda terlalu lama menghisab hisab.\n";
            	 }
            	 else
            		{
                		cout << "Gejala tidak dikenali atau tidak cocok.\n";
                		cout << "Jangan-jangan ada sedikit gangguang kejiwaan.\n";
            		}

            break;

        case 2:
            // Kelompok keluhan umum

            cout << "Kelompok: Keluhan umum\n";

            // AND:
            // Mata berkunang-kunang DAN pusing.
            // OR memperbolehkan kedua gejala
            // dimasukkan dalam urutan apa pun.

            if ((kunang1 == 1 && pusing2 == 1) || (pusing1 == 1 && kunang2 == 1))
            {
                cout << "Kedua gejala dikenali dan dari nama lengkap.\n";
                cout << "Mata berkunang-kunang disertai pusing\n";
                cout << "perlu dievaluasi tenaga damkar setempat.\n";
            }
            else if (kunang1 == 1 || kunang2 == 1 || pusing1 == 1 || pusing2 == 1)
            	 {
             		 cout << "Sebagian gejala dikenali di compare dengan karakter nama lengkap,\n";
            		 cout << "mungkin anda salah program studi.\n";
            	 }
           	 else
            		{
            		    cout << "Gejala samar untuk tidak di diagnosa.\n";
            		    cout << "Jangan jangan anda ada kelainan.\n";
          		}

            break;

        default:
            cout << "Kode kelompok tidak tersedia.\n";
            break;
    }

    cout << "\nCatatan: simulasi ini bukan diagnosis medis.\n";
    cout << "========================================\n";

    return 0;
}
