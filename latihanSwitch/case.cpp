#include <iostream>

using namespace std;

int a, b;

int main() {

    cout << "latihan switch case" << endl;

    cout << "masukkan angka : ";
    cin >> a;

    cout <<"luaran text dari yang anda input adalah" << endl;

    switch(a) {
        case 1:
            cout << "anda memasukkan angka 1" << endl;
            break;
        case 2:
            cout << "anda memasukkan angka 2" << endl;
            break;
        default:
            cout << "anda memasukkan angka selain 1,2" << endl;
    }

    return 0;
}