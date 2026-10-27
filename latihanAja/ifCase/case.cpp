#include <iostream>

using namespace std;

int umurPengemudi;

main () {
    
    cout << "Masukan umur pengemudi : ";
    cin >> umurPengemudi;

    if (umurPengemudi >= 17)
    {
        cout << "umur uda layak";
    } else {
        cout << "ngempeng dulu sana";
    }
    

}