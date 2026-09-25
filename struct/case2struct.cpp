#include <iostream>
#include <string>

using namespace std;

// Struktur data kegiatan lari
struct KegiatanLari {
    string nama;
    string hari;
    string waktuBerangkat;
    string waktuFinish;
    double jarak;
    string catatan;
};

// Mengubah waktu menjadi detik
int ubahKeDetik(string waktu) {
    int jam = stoi(waktu.substr(0, 2));
    int menit = stoi(waktu.substr(3, 2));
    int detik = stoi(waktu.substr(6, 2));

    return jam * 3600 + menit * 60 + detik;
}

// hitung durasi lari
int hitungDurasi(string mulai, string selesai) {
    int waktuMulai = ubahKeDetik(mulai);
    int waktuSelesai = ubahKeDetik(selesai);

    return waktuSelesai - waktuMulai;
}

// Menampilkan durasi dalam menit dan detik
void tampilDurasi(int detik) {
    int menit = detik / 60;
    int sisaDetik = detik % 60;

    cout << menit << ":" << sisaDetik;
}

int main() {

    KegiatanLari senin = {
        "Nadia",
        "Senin",
        "07:10:00",
        "07:38:20",
        2.5,
        "Cuaca cerah"
    };

    KegiatanLari rabu = {
        "Nadia",
        "Rabu",
        "07:12:00",
        "07:41:10",
        2.6,
        "Sedikit ramai"
    };

    KegiatanLari jumat = {
        "Nadia",
        "Jumat",
        "07:15:30",
        "07:45:30",
        2.5,
        "Lancar"
    };

    // hitung durasi setiap hari
    int durasiSenin =
        hitungDurasi(senin.waktuBerangkat, senin.waktuFinish);

    int durasiRabu =
        hitungDurasi(rabu.waktuBerangkat, rabu.waktuFinish);

    int durasiJumat =
        hitungDurasi(jumat.waktuBerangkat, jumat.waktuFinish);

    // hitung total durasi
    int totalDetik =
        durasiSenin +
        durasiRabu +
        durasiJumat;

    // hitung rata-rata
    int rataRata = totalDetik / 3;

    cout << "============================================================\n";
    cout << "              DATA KEGIATAN RUNNING NADIA\n";
    cout << "============================================================\n\n";

    cout << "Hari\tMulai\t\tSelesai\t\tDurasi\tJarak\tCatatan\n";
    cout << "------------------------------------------------------------\n";

    cout << senin.hari << "\t"
         << senin.waktuBerangkat << "\t"
         << senin.waktuFinish << "\t";
    tampilDurasi(durasiSenin);
    cout << "\t" << senin.jarak << " km\t"
         << senin.catatan << endl;

    cout << rabu.hari << "\t"
         << rabu.waktuBerangkat << "\t"
         << rabu.waktuFinish << "\t";
    tampilDurasi(durasiRabu);
    cout << "\t" << rabu.jarak << " km\t"
         << rabu.catatan << endl;

    cout << jumat.hari << "\t"
         << jumat.waktuBerangkat << "\t"
         << jumat.waktuFinish << "\t";
    tampilDurasi(durasiJumat);
    cout << "\t" << jumat.jarak << " km\t"
         << jumat.catatan << endl;

    cout << "------------------------------------------------------------\n";

    cout << "Total durasi = ";
    tampilDurasi(totalDetik);
    cout << endl;

    cout << "\n================ HASIL PERHITUNGAN ================\n";

    cout << "Durasi Senin : ";
    tampilDurasi(durasiSenin);
    cout << " = " << durasiSenin << " detik\n";

    cout << "Durasi Rabu  : ";
    tampilDurasi(durasiRabu);
    cout << " = " << durasiRabu << " detik\n";

    cout << "Durasi Jumat : ";
    tampilDurasi(durasiJumat);
    cout << " = " << durasiJumat << " detik\n";

    cout << "\nTotal durasi : "
         << totalDetik << " detik\n";

    cout << "Jumlah hari  : 3 hari\n";

    cout << "Rata-rata    : "
         << totalDetik << " / 3 = "
         << rataRata << " detik\n";

    cout << "\nRata-rata lama berlari Nadia adalah ";
    tampilDurasi(rataRata);
    cout << endl;

    return 0;
}