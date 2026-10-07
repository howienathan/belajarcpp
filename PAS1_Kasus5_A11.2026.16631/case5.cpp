#include <iostream>
using namespace std;

typedef struct {
    // kamus global
    int x;
    int y;
} nilai;

// deskripsi
int main() {
    nilai n1; 

    
    n1.x = 5;
    n1.y = 10;

    
    cout << "Nilai x = " << n1.x << endl;
    cout << "Nilai y = " << n1.y << endl;

    return 0;
}