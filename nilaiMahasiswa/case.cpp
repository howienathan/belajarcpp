#include <iostream>

using namespace std;

int N, i;
string nama;
float nilai, kehadiran;
char pilihan;
string status;

int main() {
    cout << "masukan jumlah mahasiswa yang di data : ";
    cin >> N;

    i = 1;
    pilihan = 'y';

    while (i <= N && pilihan == 'y' || pilihan == 'Y')
    {
       cout << "data ke " << i << endl;
       cout << "masukan Nama : ";
       cin >> ws;
       getline(cin, nama);

       do
       {
        cout << "masukan Nilai : ";
        cin >> nilai;

        if (nilai < 0 || nilai > 100)
        {
            cout << "nilai ga valdi, masukan nilai lagi" << endl;
        }
        
       } while (nilai <= 0 && nilai >= 100);
       
       cout << "Masukan kehadiran (%) : ";
       cin >> kehadiran;

       if (nilai >= 75 && kehadiran >= 80) 
       {
        status = "horey lulus";
       } else {
        status = "galulus";
       }

       cout << "Nama Mahasiswa : " << nama << endl;
       cout << "Nilai Mahasiswa : " << nilai << endl;
       cout << "Presentase Kehadiran : " << kehadiran << endl;
       cout << "Status kelulusan : " << status << endl;
       
       i = i + 1;

       if (i <= N)
       {
        cout << "masukan Pilihan (y/t) : ";
        cin >> pilihan;
       }
       
       cout << "Pendataan selesai\n";
        
        
    }
    return 0;
}