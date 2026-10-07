#include <iostream>

using namespace std;

struct lingkaran {
    float phi, jari;
    float luas;
    
};
struct name {
    string nama ;
};
// kamus global
struct lingkaran bunderan, holahop;


// deskripsi
int main() {

    cout << "latihan tipe bentukan" << endl;
    bunderan.phi = 3.14;
    cin >> bunderan.jari;
    bunderan.luas = bunderan.phi * bunderan.jari * bunderan.jari;
    
    cout << "Luas lingkaran bunderan: " << bunderan.luas << endl;

}