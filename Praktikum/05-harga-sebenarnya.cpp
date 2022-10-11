#include <iostream>
using namespace std;

int main() {
    float harga_asli, angsuran_dibayar, besar_angsuran;
    besar_angsuran = 80;

    cout << "Masukan Angsuran yang telah dibayar (Rp): ";
    cin >> angsuran_dibayar;
    harga_asli = (angsuran_dibayar/besar_angsuran) * 100;

    cout <<  "Harga Sebenarnya: " << harga_asli << endl;
return 0;
}



