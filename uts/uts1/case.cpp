#include <iostream>

using namespace std;

int jualGelas;
int produksiGelas;
int menjualGelas;
int operasional;
int keuntungan;
int pendapatan;
int hari;
int hariRugi;

int main() {

    operasional = 50000;
    produksiGelas = 6000;
    menjualGelas = 10000;
    hariRugi = 0;

    cout << "masukan hari pengamatan : ";
    cin >> hari;
    do {
    cout << "masukan penjualan gelas setiap hari : ";
    cin >> jualGelas;
    if(jualGelas < 0) {
        cout << "jumlah gelas tidak boleh kurang dari 0";
    }
    }while (jualGelas < 0);




    if ( keuntungan = 0 ) {
        cout << "Impas\n";
    } else if ( keuntungan <= 100000) {
        cout << "untung kecil\n";
    } else if ( keuntungan >= 100000) {
        cout << "untung besar\n";
    } else {
        cout << "Rugi\n";
        hariRugi = hariRugi + 1;
    }
    produksiGelas = produksiGelas * jualGelas;

    pendapatan = menjualGelas * jualGelas;

    keuntungan = pendapatan - produksiGelas - operasional;

    if(jualGelas < 0) {
        cout << "tolong input ulang";
    }

    cout << " jadi pendapatan per " << hari << " hari adalah " << pendapatan << endl;
    cout << " jadi biaya produksi adalah " << produksiGelas << endl;
    cout << " Keuntungan yang di dapat adalah " << keuntungan << endl;
    cout << " hari rugi nya " << hariRugi << endl;

}