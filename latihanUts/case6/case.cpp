#include <iostream>

using namespace std;

int a, b;
float jumlah;

int main() {
    jumlah = 0;
    a = 90;

    cout << "masukan b : ";
    cin >> b;
    
    while (a >= b)
    {
        cout << a << " + ";
        jumlah = jumlah + a;
        a = a - 10;
    }
    cout << " = " << jumlah;
    
    return 0;

}