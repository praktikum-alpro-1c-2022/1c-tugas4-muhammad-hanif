#include <iostream>
using namespace std;

int main(){
  int kode, banyak;
  string ukuran;
  float total;

  cout << "|  Kode Susu   |  Nama Produk |  Ukuran   |  Harga      |" << endl;
  cout << "_________________________________________________________" << endl;
  cout << "|1             |    Dancow    | B=Besar   | Rp.10.000,- |" << endl;
  cout << "|              |              | S=Sedang  | Rp.4.250,-  |" << endl;
  cout << "|              |              | K=Kecil   | Rp.2.100,-  |" << endl;
  cout << "_________________________________________________________" << endl;
  cout << "|2             |    Indomilk  | B=Besar   | Rp.8.500,-  |" << endl;
  cout << "|              |              | S=Sedang  | Rp.4.000,-  |" << endl;
  cout << "|              |              | K=Kecil   | Rp.2.025,-  |" << endl;
  cout << "_________________________________________________________" << endl;
  cout << "|3             |   Sustacal   | B=Besar   | Rp.17.000,- |" << endl;
  cout << "|              |              | S=Sedang  | Rp.14.500,- |" << endl;
  cout << "|              |              | K=Kecil   | Rp.8.300,-  |" << endl;
  cout << "_________________________________________________________" << endl;
  cout << "Masukkan Kode Susu (1-3) : ";
  cin >> kode;
  cout << "Masukkan Jumlah Pembelian : ";
  cin >> banyak;
  cout << "Masukkan Ukuran (B/S/K) : ";
  cin >> ukuran;
  if (kode==1){
    if(ukuran=="B"){
      cout << "Susu Dancow" << endl << "Harga susu Rp.10.000,-" << endl << "Jumlah total pembelian Rp. " << banyak*10000;
    }else if(ukuran=="S"){
      cout << "Susu Dancow" << endl << "Harga susu Rp.4.250,-" << endl << "Jumlah total pembelian Rp. " << banyak*4250;
    }else if(ukuran=="K"){
      cout << "Susu Dancow" << endl << "Harga susu Rp.2.100,-" << endl << "Jumlah total pembelian Rp. " << banyak*2100;
    }else{
      cout << "Tolong pilih ukuran yang tersedia" << endl;
    }
  }else if (kode==2){
    if(ukuran=="B"){
      cout << "Susu Indomilk" << endl << "Harga susu Rp.8.500,-" << endl << "Jumlah total pembelian Rp. " << banyak*8500;
    }else if(ukuran=="S"){
      cout << "Susu Indomilk" << endl << "Harga susu Rp.4.000,-" << endl << "Jumlah total pembelian Rp. " << banyak*4000;
    }else if(ukuran=="K"){
      cout << "Susu Indomilk" << endl << "Harga susu Rp.2.025,-" << endl << "Jumlah total pembelian Rp. " << banyak*2025;
    }else{
      cout << "Tolong pilih ukuran yang tersedia" << endl;
    }
  }else if (kode==3){
    if(ukuran=="B"){
      cout << "Susu Sustacal" << endl << "Harga susu Rp.17.000,-" << endl << "Jumlah total pembelian Rp. " << banyak*17000;
    }else if(ukuran=="S"){
      cout << "Susu Sustacal" << endl << "Harga susu Rp.14.500,-" << endl << "Jumlah total pembelian Rp. " << banyak*14500;
    }else if(ukuran=="K"){
      cout << "Susu sustacal" << endl << "Harga susu Rp.8.300,-" << endl << "Jumlah total pembelian Rp. " << banyak*8300;
    }else{
      cout << "Tolong pilih ukuran yang tersedia" << endl;
    }
  }else{
    cout << "Tolong pilih kode yang sesuai" << endl;
  }

return 0;
}