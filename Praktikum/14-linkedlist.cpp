#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

struct Pln{
    //data
    int nomorPlg;
    string namaPlg;
    int tagihan;

    //pointer
    Pln *next;
};

Pln *pelanggan, *cur, *head, *hapus, *bantu;

int isEmpty(){
    if(head==NULL){
        return 1;
    }else{
        return 0;
    }
}

void cetak(){
    cur = head;
    while(cur!=NULL)
    {
    cout <<cur->nomorPlg<<endl;
    cout <<cur->namaPlg<<endl;
    cout <<cur->tagihan<<endl;
    cout <<endl;
    cur = cur->next;
    }
}

void buatNode(int nmr, string nm , int tghn){
    pelanggan = new Pln();
    pelanggan->nomorPlg = nmr;
    pelanggan->namaPlg=nm;
    pelanggan->tagihan=tghn;
    pelanggan->next = NULL;
    head = pelanggan;
}

void tambahDepan(int nmr, string nm, int tghn){
    pelanggan = new Pln();
    pelanggan->nomorPlg = nmr;
    pelanggan->namaPlg=nm;
    pelanggan->tagihan=tghn;
    pelanggan->next = head;
    head = pelanggan;
}

void tambahBelakang(int nmr, string nm, int tghn){
    cur = head;
    while(cur -> next != NULL){
        cur = cur ->next;
    }
    pelanggan = new Pln();
    pelanggan->nomorPlg = nmr;
    pelanggan->namaPlg=nm;
    pelanggan->tagihan=tghn;
    pelanggan->next = NULL;
    cur->next = pelanggan;
    }

void hapusDepan(){
    Pln *hapus;
    if(isEmpty()==0){
        if(head->next!=NULL){
            hapus=head;
            head=head->next;
            delete hapus;
        }else{
            head=NULL;
        }
        cout << " data sudah terhapus ";
    }else {
        cout << "data masih kosong";
    }
}

void hapusBelakang(){
    Pln *bantu, *hapus;
    if(isEmpty()==0){
        if(head->next != NULL){
            bantu=head;
            while(bantu->next->next!=NULL){
                bantu=bantu->next;
            }
            hapus=bantu->next;
            bantu->next=NULL;
            delete hapus;
        }
        else{
            head=NULL;
        }
        cout << "data sudah terhapus";
    }else{
        cout << "data masih kosong";
    }
}

int main() {
    int pil, nmr, tghn;
    string nm;

    do{
        system("cls");
        cout<<"PROGRAM LINKED LIST"<<endl;
        cout<<"1. Tambah depan"<<endl;
        cout<<"2. Tambah belakang"<<endl;
        cout<<"3. Hapus depan"<<endl;
        cout<<"4. Hapus belakang"<<endl;
        cout<<"5. Tampil data"<<endl;
        cout<<"0. keluar"<<endl;
        cout<<"Masukan pilihan :";cin>>pil;
        switch(pil){
            case 1:system("cls");{
                cout<<"\nTambah depan"<<endl;
                cout<<"Masukan nomor :";cin>>nmr;
                cout<<"Masukan nama :";cin>>nm;
                cout<<"Masukan tagihan :";cin>>tghn;
                tambahDepan(nmr, nm, tghn);
                break;
            }
            case 2:system("cls");{
                cout<<"\nTambah belakang"<<endl;
                cout<<"Masukan nomor :";cin>>nmr;
                cout<<"Masukan nama :";cin>>nm;
                cout<<"Masukan tagihan :";cin>>tghn;
                tambahBelakang(nmr, nm, tghn);
                break;
            }
            case 3:system("cls");{
                cout<<"\nHapus depan"<<endl;
                hapusDepan();
                break;
            }
            case 4:system("cls");{
                cout<<"\nHapus belakang"<<endl;
                hapusBelakang();
                break;
            }

            case 5:system("cls");{
                cout<<"\nTampilkan data"<<endl;
                cetak();
                break;
            }
            case 0:system("cls");{
                return 0;
                break;
            }default:
                system("cls");{
                cout<<"pilihan tidak tersedia"<<endl;
                }
        }getch();
    }while(pil!=7);
}
