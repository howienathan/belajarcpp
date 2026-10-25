#include <iostream>

using namespace std;

int a;
float jumlah;
int b;

int main() {
    jumlah = 0;
    a = 1;

    cout << "masukan b : ";
    cin >> b;

    while (a <= b)
    {
        cout << a << " + ";
        jumlah = jumlah + a;
        a = a + 1;

    }
    cout << " = " << jumlah;
    

}