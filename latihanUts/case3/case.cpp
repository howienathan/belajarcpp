#include <iostream>

using namespace std;

int a;
int b;

int main() {

    a = 1;
    b = 9;

    while (b >= 1)
    {
        cout << a << " " << b;
        if (a == 4)
            a = a - 1;
        else
            a = a + 1;
        b = b - 2;
        if (b >= 1)
            cout << " ";
    }
    
}