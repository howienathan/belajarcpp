#include <iostream>

using namespace std;

int a;
int baris;
int angka;

int main() {

    
    cout << "masukan a : ";
    cin >> a;
    baris = 1;

    while (baris <= a)
    {
        angka = 1;
        while (angka <= baris)
        {
            cout << angka;
            angka = angka + 1;
        }
        cout << endl;
        baris = baris + 1;
        
    }
    
    return 0;
}