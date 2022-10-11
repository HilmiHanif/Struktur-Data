#include <iostream>
using namespace std;

int main() {

        int jumlah_deret, kelipatan, nilai,  i;
        kelipatan = 5;
        nilai = 0;

        cout << "Masukan jumlah deret: ";
        cin >> jumlah_deret;
        for(i = 0; i <= jumlah_deret; i++){
            nilai += kelipatan;
            kelipatan += 5;
        }

        cout << nilai;

    return 0;
}
