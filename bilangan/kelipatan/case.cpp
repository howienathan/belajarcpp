#include <iostream>

using namespace std;

int N, i;

int main() {
    i = 3;

    cout << "masukan N : ";
    cin >> N;

    while (i<=N){
        cout << i << " ";
        i = i +3;
    }

    return 0;
}