#include <iostream>
using namespace std;

int main()
{
    int batas_awal, batas_akhir, jumlah_deret;
    jumlah_deret = 0;

    cout << "Masukan batas awal: ";
    cin >> batas_awal;
    cout << "Masukan batas akhir: ";
    cin >> batas_akhir;

    for(int i = batas_awal; i <= batas_akhir; i++){
        if(i % 5 == 0){
            jumlah_deret++;
        }
    }
    cout << "\n" << "jumlah: " << jumlah_deret << endl;
 return 0;
}
