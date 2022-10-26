#include <iostream>
using namespace std;

int main (){
  string username, password;
  cout << "Masukkan Username : ";
  cin >> username;
  cout << "Masukkan Password : ";
  cin >> password;

  if(username == "MuhammadHanif" && password == "hanif123"){
    cout << "Login Berhasil" << endl;
    
    }else if(username == "MuhammadHanif" && password != "hanif123"){
      cout << "Username Sesuai, Password Tidak Sesuai!" << endl;
    
    }else if(username != "MuhammadHanif" && password == "hanif123"){
      cout << "Username tidak sesuai, Password sesuai!" << endl;
      
  }else{
    cout << "Username dan Password Salah" << endl;
    cout << "Login Gagal" << endl;
  }
  
  return 0;
}