#include <iostream>

using namespace std;

int angka;
int i;

int main() {
    angka = 9;

    while (angka >= 1) {
        i = angka;

        while (i >= 1) {
            cout << i << " ";
            i = i - 1;
        }

        cout << endl;
        angka = angka - 1;
    }

    return 0;
}
