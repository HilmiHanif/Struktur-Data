#include <iostream>
using namespace std;

int main() {

    int alas, tinggi, luas;

    cout << "Masukan Alas: ";
    cin >> alas;
    cout << "Masukan Tinggi: ";
    cin >> tinggi;

    luas = 0.5 * alas * tinggi;
    cout << "Hasil: " << luas << endl;

    return 0;
}
