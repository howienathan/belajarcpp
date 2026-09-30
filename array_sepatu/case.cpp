#include <iostream>
#include <string>

using namespace std;

int main() {

    // No array
    int sepatuNadia = 38;
    int sepatuIra = 37;
    int sepatuRania = 39;
    int sepatuZulaeka = 36;
    int sepatuLaksmiya = 38;

    cout << "       DATA SEPATU TANPA ARRAY" << endl;

    cout << "Sepatu Nadia    : " << sepatuNadia << endl;
    cout << "Sepatu Ira      : " << sepatuIra << endl;
    cout << "Sepatu Rania    : " << sepatuRania << endl;
    cout << "Sepatu Zulaeka  : " << sepatuZulaeka << endl;
    cout << "Sepatu Laksmiya : " << sepatuLaksmiya << endl;


    // array
    int nomorSepatu[5] = {38, 37, 39, 36, 38};

    string nama[5] = {
        "Nadia",
        "Ira",
        "Rania",
        "Zulaeka",
        "Laksmiya"
    };

    cout << "        DATA SEPATU DENGAN ARRAY" << endl;

    // output array
    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << " - "
             << nama[i] << " : "
             << nomorSepatu[i] << endl;
    }

    return 0;
}