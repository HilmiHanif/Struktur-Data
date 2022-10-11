#include <iostream>
#include<string>
using namespace std;


struct dataKendaraan {
    string jenis_kendaraan;
    int jumlah_ban;
    int jumlah_gear;
};

void displayData(dataKendaraan);

int main() {
    dataKendaraan data;
    displayData(data);

    return 0;
}

void displayData(dataKendaraan data) {

    int jml_data;
    cout << "Masukan Jumlah Data Kendaraan: ";
    cin >> jml_data;
    cout << "\n";
    for(int masuk = 1; masuk <= jml_data; masuk++){
        cout << "Input Data ke-" << masuk << "\n";
        cout << "Jenis Kendaraan\t: ";
        getline(cin >> ws, data.jenis_kendaraan);
        cout << "Jumlah Ban\t: ";
        cin >> data.jumlah_ban;
        cout << "Jumlah Gear\t: ";
        cin >> data.jumlah_gear;
        cout << endl;
    }
    cout << "==================================" << "\n";
    for(int tampil = 1; tampil <= jml_data; tampil++){
        cout << "\nTampil Data ke-" << tampil << "\n";
        cout << "Jenis Kendaraan\t: " << data.jenis_kendaraan << "\n";
        cout <<"Jumlah Ban \t: " << data.jumlah_ban << "\n";
        cout << "Jumlah Gear \t: " << data.jumlah_gear;
        cout << endl;
    }

}
