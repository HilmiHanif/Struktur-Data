#include <iostream>
#include <stdlib.h>
using namespace std;

#define MAX_STACK 10
int top = -1;
int tumpuk[MAX_STACK];
void menu(int pil);

void push();
void pop();
void print();
void peek();

int main(){
    int pilih;
    do{
        cout << "[1] push data " << endl;
        cout << "[2] pop data " << endl;
        cout << "[3] print data " << endl;
        cout << "[4] ppeek top index" << endl;
        cout << "[0] exit " << endl;
        cout << "Masukkan pilihan anda : "; cin >> pilih;
        menu (pilih);
    }while (pilih != 0);
    return 0;
}

void menu (int pil){
    switch (pil){
        case 1: push(); break;
        case 2: pop(); break;
        case 3: print(); break;
        case 4: peek(); break;
        case 0: exit(0); break;
        default: cout << "pilihan tidak ditemukan." << endl; system("cls");break;
    }
}

bool isFull(){
    if(top == MAX_STACK -1 ){
        return true;
    }else {
    return false;
    }
}

void push(){
    //int Stack[MAX_STACK];
    isFull();
        top++;
        cout << "Masukan Data : ";cin >> tumpuk[top];
        cout << "Data [" << tumpuk[top] << "] Telah Ditambah ! " << endl;
        cout << endl;
}

void pop(){
    isFull();
        cout << "Data [" << tumpuk[top] << "] pada index ke '" << top << "' dalam Stack Diambil !" << endl;
        cout << "dengan bilangan : ";
        tumpuk[top--];
}

void print(){
    if (top == -1) {
 cout << "empty";

    }else {
        cout << "          Stack : ";
        cout << "\n===========================" << endl;
 for (int i = top; i >= 0; i--){
  cout << "     XXXXX[ " << tumpuk[i] << " ]XXXXX" << endl;
 }
 cout << "===========================" << endl;
    }
}

void peek(){
    cout << tumpuk[top];
    cout << endl << endl;
}
