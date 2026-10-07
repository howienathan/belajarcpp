






    
    
    
    
    
    
    
    
    
    
    
#include <iostream>
    using namespace std;
    // kamus global
    int jamD, menitD, detikD;
    int jamS, menitS, detikS;
    int totalD, totalS;
    int totaldurasi;
    int JAM, MENIT, DETIK;

// deskripsi
int main() {

    jamD = 7;
    menitD = 5;
    detikD = 8;
    totalD = (jamD*3600) + (menitD*60) + detikD;
    jamS = 9;
    menitS = 10;
    detikS = 18;
    totalS = (jamS*3600) + (menitS*60) + detikS;
    totaldurasi = totalS - totalD;
        cout << totaldurasi;
    JAM = totaldurasi / 3600;
    MENIT = (totaldurasi % 3600)/60;
    DETIK = totaldurasi % 60;
    cout << endl;
    cout << JAM << ":" << MENIT << ":" << DETIK << endl;
    
    return 0;
}

