#include <iostream>

using namespace std;

int mendoan;
int krupuk;
int x;
int jumlah;

int main() {
    mendoan = 1;
    krupuk = 8;
    x = 1;
    while ( mendoan < 12 )
    {

        if ( x%2 != 0 ) {
            cout << mendoan;
            mendoan = mendoan + 2;
        }
        else {
            cout << krupuk << " - ";
            krupuk = krupuk -2;
        }


        cout << mendoan << " + ";
        cout << krupuk << " - ";
        mendoan = mendoan + 2;
        krupuk = krupuk - 2;
        
        jumlah = mendoan + krupuk - mendoan;
        
    }
    cout << " = " <<jumlah;
    
}