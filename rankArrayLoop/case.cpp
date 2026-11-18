#include <iostream>

using namespace std;

int bilangan[10];
int x,y;

int main() {
    cout << "Masukkan 3 bilangan: ";
    x = 0;
    while (x <= 10) {
        cin >> bilangan[x];
        x = x + 1;
    }
    cout << "Data nya adalah: " << x;
    y = 0;
    while (y <= 10) {
        cout << bilangan[y] << " ";
        y = y + 1;
    }
 

}