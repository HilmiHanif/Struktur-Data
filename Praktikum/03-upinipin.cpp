#include <iostream>
using namespace std;

   int main() {

       int angka, upin_ipin, opah, ros;

        upin_ipin = 2;

        for (int i = 1; i <= upin_ipin; i++) {

        cout << "Rambutan Upin & Ipin: ";
        cin >> angka;


       if ( i == 1 ) {
             ros = angka;
             opah = angka;
            }
            else if ( ros > angka ) {
               ros = angka;
            }
            else if ( opah < angka) {
               opah = angka;
           }
           else {}
           }

       cout << endl;
       cout << "Nilai ros          : " <<  ros << endl;


      return 0;
       }
