#include <iomanip> 
#include <iostream>

using namespace std;

int main() {
    double jamKerja, jamLembur, upah;

    cout << "masukkan total jam kerja: ";
    cin >> jamKerja;

    cout << "masukkan total jam lembur: ";
    cin >> jamLembur;

    cout << "masukkan upah per jam: ";
    cin >> upah;


    double upahReg = jamKerja * upah;
    double presentaseLembur;

    if (jamLembur >= 30) {
        presentaseLembur = 0.40;
    } else {
        presentaseLembur = 0.20;
    }

    double overpay = (jamKerja - jamLembur) * upah * presentaseLembur;

    double totalUpah = upahReg + overpay;

    cout << fixed << setprecision(2);
    
    cout << "Upah reguler: " << upahReg << endl;
    cout << "Bonus Lembur (" << presentaseLembur * 100 << "%): " << overpay << endl;
    cout << "Total upah: " << totalUpah << endl;

    return 0;
}