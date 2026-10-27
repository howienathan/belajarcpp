#include <iostream>

using namespace std;

int a;
int baris;

int main() {

    baris = 9;

    while (baris >= 1)
    {
        a = 9;

        while (a >= 10 - baris)
        {
            cout << a << " ";
            a = a - 1;

        }
        cout << endl;
        baris = baris - 1;
        
    }
    
    return 0;
}