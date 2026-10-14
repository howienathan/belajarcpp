#include <iostream>
#include <string>

using namespace std;

struct Data {
    int belanja;
};

int main() {
    Data data;
    cout << "masukkan total belanja: ";
    cin >> data.belanja;

    if (data.belanja == 100000) {
        cout << "anda mendapatkan diskon 5%" << endl;
    } else if (data.belanja < 100000) {
        cout << "anda mendapatkan diskon 0%" << endl;
    } else if (data.belanja < 500000) {
        cout << "anda mendapatkan diskon 10%" << endl; 
    } else if (data.belanja < 1000000) {
        cout << "anda mendapatkan diskon 20%" << endl;
    } else if (data.belanja >= 1000000) {
        cout << "anda mendapatkan diskon 30%" << endl;
    } else {
        cout << "anda tidak mendapatkan diskon" << endl;
    }

    return 0;
}

