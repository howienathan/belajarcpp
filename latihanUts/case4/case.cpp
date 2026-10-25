#include <iostream>

using namespace std;

int a, b;

int main() {
    a = 100;
    b = 9;
    while (a >= 20)
    {
        cout << b << " ";
        b = b - 1;
        cout << a << " ";
        a = a - 10;
    }
    return 0;
    
}