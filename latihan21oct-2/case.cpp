// tampilkan 3 9 27 81
#include <iostream>

using namespace std;

// kamus

int roti;
float donat;

int main() {
    cout << "kelipatan 3\n";
    roti = 3;
    donat = 3;
    while ( roti < 5000 ) {
        cout << roti << " + ";
        donat = donat + roti;
        roti = roti * 3;
    }
    cout << " : " << donat << endl;        
}