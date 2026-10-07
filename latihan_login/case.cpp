#include <iostream>
#include <string>

using namespace std;

// kamus global
string username, password;

// deskripsi
int main() {
    cout << "Latihan login" << endl;
    
    cout << "Masukkan username : ";
    cin >> username;
    cout << "Masukkan password : ";
    cin >> password;

    if (username == "ilham" && password == "123") {
        cout << "Login berhasil" << endl;
        cout << "Selamat datang " << username << endl;
    } else if (username == "maul" && password == "123") {
        cout << "Login berhasil" << endl;
        cout << "Selamat datang " << username << endl;
    } else if (username == "sheva" && password == "123") {
        cout << "Login berhasil" << endl;
        cout << "Selamat datang " << username << endl;
    } else {
        cout << "Login gagal" << endl;
    }
    
    return 0;
}