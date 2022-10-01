// Program Kalkulator untuk Kasir Warung
#include <iostream>
using namespace std;

int main() {
    int harga=0, banyakPorsi=0, total=0, pilihan;
    string item;
    
    cout<< "Warung Lamongan Barokah" << endl;
    cout<< "================================="<< endl;
    cout<< "Daftar Menu" << endl;
    cout<< "================================="<< endl;
    cout<< "1.Bebek Goreng \t: Rp 19000"<< endl;
    cout<< "2.Ayam Goreng \t: Rp 17000"<< endl;
    cout<< "3.Lele Goreng \t: Rp 12000"<< endl;
    cout<< "4.Nasi \t: Rp 3000"<< endl;
    cout<< "5.Es Teh \t: Rp 4000"<< endl;
    cout<< "6.Es Jeruk \t: Rp 5000"<< endl;
    cout<< "7.Teh Anget \t: Rp 3000"<< endl;
    cout<< "8.Jeruk Anget \t: Rp 4000"<< endl;
    cout<< " " << endl;
    cout<< "================================="<< endl;
    
    do {
        cout<< "Masukan Kode Menu : ";
        cin>> pilihan;
        switch(pilihan){
            case 1 :
             item  = "Bebek Goreng";
             harga = 19000;
             cout<< "Banyaknya: ";
             cin>> banyakPorsi;
             total += harga*banyakPorsi;
             cout<< banyakPorsi<<" "<< item << "= Rp. " << harga*banyakPorsi<< endl;
             break;
            
            case 2 :
             item  = "Ayam Goreng";
             harga = 17000;
             cout<< "Banyaknya: ";
             cin>> banyakPorsi;
             total += harga*banyakPorsi;
             cout<< banyakPorsi<<" "<< item << "= Rp. " << harga*banyakPorsi<< endl;
             break;
            
            case 3 :
             item  = "Lele Goreng";
             harga = 12000;
             cout<< "Banyaknya: ";
             cin>> banyakPorsi;
             total += harga*banyakPorsi;
             cout<< banyakPorsi<<" "<< item << "= Rp. " << harga*banyakPorsi<< endl;
             break;
            
            case 4 :
             item  = "Nasi";
             harga = 3000;
             cout<< "Banyaknya: ";
             cin>> banyakPorsi;
             total += harga*banyakPorsi;
             cout<< banyakPorsi<<" "<< item << "= Rp. " << harga*banyakPorsi<< endl;
             break;
            
            case 5 :
             item  = "Es Teh";
             harga = 4000;
             cout<< "Banyaknya: ";
             cin>> banyakPorsi;
             total += harga*banyakPorsi;
             cout<< banyakPorsi<<" "<< item << "= Rp. " << harga*banyakPorsi<<  endl;
             break;
            
            case 6 :
             item  = "Es Jeruk";
             harga = 5000;
             cout<< "Banyaknya: ";
             cin>> banyakPorsi;
             total += harga*banyakPorsi;
             cout<< banyakPorsi<<" "<< item << "= Rp. " << harga*banyakPorsi<< endl;
             break;
            
            case 7 :
             item  = "Teh Anget";
             harga = 3000;
             cout<< "Banyaknya: ";
             cin>> banyakPorsi;
             total += harga*banyakPorsi;
             cout<< banyakPorsi<<" "<< item << "= Rp. " << harga*banyakPorsi<< endl;
             break;
            
            case 8 :
             item  = "Jeruk Anget";
             harga = 4000;
             cout<< "Banyaknya: ";
             cin>> banyakPorsi;
             total += harga*banyakPorsi;
             cout<< banyakPorsi<<" "<< item << "= Rp. " << harga*banyakPorsi<< endl;
             break;
            
            case 9 :
             cout<< "Jumlah Total : Rp " <<total<<endl;
             pilihan = 9;
             break;
             
            default : 
             cout<< "Pilihan Salah"<< endl;
             break;
        }
    }while (pilihan != 9);
    
   cout<< "================================="<< endl;
   cout<< "Terima Kasih Atas Kunjungan Anda"<< endl;

    return 0;
}