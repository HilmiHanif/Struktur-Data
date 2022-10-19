#include <iostream>
#define MAX 24
using namespace std;

char pesan[MAX]{'H','A','*','*','*','L','*','O','A','P','*','*','*','A','*','K','A','B','*','A','*','*','*','R'};
char hasil[MAX]{};
int top = -1;
char isi;
void olah();
void push();
int main()
{
    cout << "Pesan = ";
    for(int i=0; i<MAX; i++){
        cout << pesan[i];
    }
    cout << endl;
    cout << "Hasil = " ;
    olah();
    for(int i=0; i<MAX; i++){
        cout << hasil[i];
    }
    return 0;
}

void olah(){
    for(int i=0; i<MAX; i++){
        if(pesan[i] == '*'){

        }else{
            isi = pesan[i];
            push();
        }
    }
}
void push(){
    top++;
    hasil[top]=isi;
}
