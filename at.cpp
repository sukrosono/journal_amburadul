#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int kode = 1;

typedef struct Item node;
struct Produksi
{
};

struct Item{
    int code;
    int qty;
    int Tahun;
    int Tahun_expired;
    node *next;
    Produksi *prod;
};

node *head=NULL, *tail=NULL, *baru;

void tambah(int qt, int t, int te)
{
    baru = (node *) malloc(sizeof(node));
    if(baru!=NULL)
    {
        baru->code=kode;
        kode++;
        baru->qty=qt;
        baru->Tahun=t;
        baru->Tahun_expired=te;
        baru->next=NULL;

        if(head==NULL)
        {
            head=baru;
            tail=baru;
        }
        else
        {
            tail->next=baru;
            tail=baru;
        }
        cout<<"Data added";
    }
    else
    {
        cout<<"Memory Full"<<endl;
    }
}

void lihat()
{
    node *x;
    x = head;
    system("cls");
    cout<<"Kode\t qty\t Tahun\t Tahun Expired"<<endl;
    while(x!=NULL)
    {
        cout<<x->code<<"\t";
        cout<<x->qty<<"\t";
        cout<<x->Tahun<<"\t";
        cout<<x->Tahun_expired<<"\t"<<endl;
        x=x->next;
    }
}

void tiga()
{
    node *x;
    x = head;
    if(x->qty!=NULL)
    {
        int temp_kecil=x->qty,temp_besar=x->qty,temp_kode_kecil=x->code,temp_kode_besar=x->code;
        while(x!=NULL)
        {
            if(x->qty<temp_kecil)
            {
                temp_kecil=x->qty;
                temp_kode_kecil=x->code;
            }

            if(x->qty>temp_besar)
            {
                temp_besar=x->qty;
                temp_kode_besar=x->code;
            }
            x=x->next;
        }
        cout<<"Kode data terkecil = "<<temp_kode_kecil<<endl;
        cout<<"Kode data terbesar = "<<temp_kode_besar<<endl;
    }
    else
    {
        cout<<"Data belum tersedia, harap masukkan data."<<endl;
    }
}

void empat()
{
    node *x;
    x = head;
//    if(x->qty==NULL)
//        cout<<"Data belum tersedia, harap masukkan data."<<endl;
//    else
//    {
        int temp=0;
        while(x!=NULL)
        {
            temp+=x->qty;
            x=x->next;
        }
        cout<<temp;
//    }
}

void lima()
{
    node *x;
    x = head;
    if(x->qty==NULL)
        cout<<"Data belum tersedia, harap masukkan data."<<endl;
    else
    {
        int temp_kecil=x->Tahun,temp_besar=x->Tahun,temp_kode_kecil=x->code,temp_kode_besar=x->code;
        while(x!=NULL)
        {
            if(x->Tahun<temp_kecil)
            {
                temp_kecil=x->Tahun;
                temp_kode_kecil=x->code;
            }
            if(x->Tahun>temp_besar)
            {
                temp_besar=x->Tahun;
                temp_kode_besar=x->code;
            }
            x=x->next;
        }
        cout<<"Kode data terkecil = "<<temp_kode_kecil<<endl;
        cout<<"Kode data terbesar = "<<temp_kode_besar<<endl;
    }
}

int main()
{
    string pilihan_menu;
    do
    {
       system("cls");
       cout<<"Menu :"<<endl;
       cout<<"1. Tambah data barang"<<endl;
       cout<<"2. Lihat"<<endl;
       cout<<"3. Data dengan qty terkecil dan terbesar"<<endl;
       cout<<"4. Total qty"<<endl;
       cout<<"5. Tahun produksi terkecil dan terbesar"<<endl;
       cout<<"6. Keluar"<<endl;
       cout<< "Please select an option : ";
       cin >> pilihan_menu;
        if(pilihan_menu == "1")
        {
            system("cls");
            cout<<"Kode barang : "<<kode<<endl;
            int jb, t, te;
            cout<<"Jumlah barang :";
            cin>>jb;
            cout<<"Tahun :";
            cin>>t;
            cout<<"Tahun Expired :";
            cin>>te;
            tambah(jb,t,te);
        }
        else if(pilihan_menu == "2")
        {
            lihat();
        }
        else if(pilihan_menu == "3")
        {
            system("cls");
            tiga();
        }
        else if(pilihan_menu == "4")
        {
            system("cls");
            empat();
        }
        else if(pilihan_menu == "5")
        {
            system("cls");
            lima();
        }
        else if(pilihan_menu == "6")
        {
            system("cls");
            cout<<"Terminating Program";
        }
        else cout<<"Invalid Option";
        getch();
    }
    while(pilihan_menu != "6");

    return 0;
}
