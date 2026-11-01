#include <iostream>
#include <cctype>

using namespace std;

int simple_atoi(string_view str) {
    size_t i = 0;
    int sign = 1;
    int result = 0;

    // 1. Lewati spasi di awal
    while (i < str.size() && isspace(str[i])) i++;

    // 2. Cek tanda negatif atau positif
    if (i < str.size() && (str[i] == '-' || str[i] == '+')) {
        if (str[i] == '-') sign = -1;
        i++;
    }

    // 3. Konversi karakter angka ke integer
    while (i < str.size() && isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}