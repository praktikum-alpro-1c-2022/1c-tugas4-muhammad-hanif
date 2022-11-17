#include <iostream>
using namespace std;

int main (){
  int tahun;
  cout << "Masukkan Tahun = ";
  cin >> tahun;

  if(tahun %4==0){
    cout << "Tahun" << tahun << " Termasuk ke dalam tahun kabisat" << endl;

  }else{
    cout << "Tahun " << tahun << " Bukan termasuk ke dalam tahun kabisat" << endl;

  }

return 0;

}