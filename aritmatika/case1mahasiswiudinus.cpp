#include <iostream>
#include <string>

using namespace std;

// Data kegiatan lari
struct DataLari {
    string hari;
    string tanggal;
    string waktuMulai;
    string waktuSelesai;
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

// Menampilkan durasi
void tampilDurasi(int detik) {
    int menit = detik / 60;
    int sisaDetik = detik % 60;

    cout << menit << ":" << sisaDetik;
}

int main() {

    DataLari senin = {
        "Senin",
        "1 Sep 2025",
        "07:10:00",
        "07:38:20",
        2.5,
        "Cuaca cerah"
    };

    DataLari selasa = {
        "Selasa",
        "2 Sep 2025",
        "07:12:30",
        "07:41:15",
        2.5,
        "Sedikit ramai"
    };

    DataLari rabu = {
        "Rabu",
        "3 Sep 2025",
        "07:05:45",
        "07:33:50",
        2.5,
        "Lancar"
    };

    DataLari kamis = {
        "Kamis",
        "4 Sep 2025",
        "07:15:20",
        "07:44:10",
        2.5,
        "Sedikit hujan"
    };

    DataLari jumat = {
        "Jumat",
        "5 Sep 2025",
        "07:08:10",
        "07:36:40",
        2.5,
        "Lancar"
    };

    // Menghitung durasi setiap hari
    int durasiSenin =
        ubahKeDetik(senin.waktuSelesai) -
        ubahKeDetik(senin.waktuMulai);

    int durasiSelasa =
        ubahKeDetik(selasa.waktuSelesai) -
        ubahKeDetik(selasa.waktuMulai);

    int durasiRabu =
        ubahKeDetik(rabu.waktuSelesai) -
        ubahKeDetik(rabu.waktuMulai);

    int durasiKamis =
        ubahKeDetik(kamis.waktuSelesai) -
        ubahKeDetik(kamis.waktuMulai);

    int durasiJumat =
        ubahKeDetik(jumat.waktuSelesai) -
        ubahKeDetik(jumat.waktuMulai);

    // Menghitung total waktu
    int totalDetik =
        durasiSenin +
        durasiSelasa +
        durasiRabu +
        durasiKamis +
        durasiJumat;

    // Menghitung rata-rata
    int rataRata = totalDetik / 5;

    cout << "====================================================\n";
    cout << "          LAPORAN KEGIATAN RUNNING NADIA\n";
    cout << "====================================================\n\n";

    cout << "Hari\tMulai\t\tSelesai\t\tDurasi\t\tCatatan\n";
    cout << "----------------------------------------------------\n";

    cout << senin.hari << "\t"
         << senin.waktuMulai << "\t"
         << senin.waktuSelesai << "\t";
    tampilDurasi(durasiSenin);
    cout << "\t" << senin.catatan << endl;

    cout << selasa.hari << "\t"
         << selasa.waktuMulai << "\t"
         << selasa.waktuSelesai << "\t";
    tampilDurasi(durasiSelasa);
    cout << "\t" << selasa.catatan << endl;

    cout << rabu.hari << "\t"
         << rabu.waktuMulai << "\t"
         << rabu.waktuSelesai << "\t";
    tampilDurasi(durasiRabu);
    cout << "\t" << rabu.catatan << endl;

    cout << kamis.hari << "\t"
         << kamis.waktuMulai << "\t"
         << kamis.waktuSelesai << "\t";
    tampilDurasi(durasiKamis);
    cout << "\t" << kamis.catatan << endl;

    cout << jumat.hari << "\t"
         << jumat.waktuMulai << "\t"
         << jumat.waktuSelesai << "\t";
    tampilDurasi(durasiJumat);
    cout << "\t" << jumat.catatan << endl;

    cout << "----------------------------------------------------\n";

    cout << "Total waktu lari = ";
    tampilDurasi(totalDetik);
    cout << endl;

    cout << "\n================ HASIL PERHITUNGAN ================\n";

    cout << "Total waktu : " << totalDetik << " detik\n";
    cout << "Jumlah hari : 5 hari\n";
    cout << "Rata-rata   : " << rataRata << " detik\n";

    cout << "\nRata-rata lama berlari Nadia adalah ";
    tampilDurasi(rataRata);

    cout << endl;

    return 0;
}
