#include <iostream>

using namespace std;

int bilangan[3];

int main() {
    cout << "Masukkan 3 bilangan: ";
    cin >> bilangan[0];
    cin >> bilangan[1];
    cin >> bilangan[2];

    if (bilangan[0] > bilangan[1])
 {
    if (bilangan[0] > bilangan[2])
    {
        cout << bilangan[0] << " " << bilangan[1] << " " << bilangan[2] << endl;
    }
    else {
        cout << bilangan[2] << " " << bilangan[0] << " " << bilangan[1] << endl;
    }
 } 
 else {
    cout << bilangan[1] << " lebih besar dari " << bilangan[0] << endl;
    if (bilangan[1] > bilangan[2])
    {
        cout << bilangan[1] << " " << bilangan[0] << " " << bilangan[2] << endl;
    }
    else {
        cout << bilangan[2] << " " << bilangan[1] << " " << bilangan[0] << endl;
    }
 }

}