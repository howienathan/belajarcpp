// mengurutkan bilangan besar ke kecil
#include <iostream>

using namespace std;
// kamus
int a,x,z;
// deskripsi
int main() {
    cout << "Masukkan bilangan : " << endl;
    cin >> a;
    cin >> x;
    cin >> z;

 if (a > x)
 {
    if (a > z)
    {
        cout << a << x << z << endl;
    }
    else {
        cout << z << a << x << endl;
    }
 } 
 else {
    cout << x << " lebih besar dari " << a << endl;
    if (x > z)
    {
        cout << x << a << z << endl;
    }
    else {
        cout << z << x << a << endl;
    }
 }
}