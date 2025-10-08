#include <iostream>

using namespace std;

int main() {
  float a,b,hasil;
  char aritmatika;

  cout << "Selamat datang di program calculator\n" << endl;
  // memasukan input dari user
  cout << "Masukan nilai pertama: ";
  cin >> a;
  cout << "Pilih operator (+,-,*,/): ";
  cin >> aritmatika;
  cout << "Masukan nilai Kedua: ";
  cin >> b;

  cout << "\nHasil perhitungan: ";
  cout << a << " " << aritmatika << " " << b;
  bool eksekusi = true;
  if(aritmatika == '+') {
    hasil = a + b;
  } else if(aritmatika == '-') {
    hasil = a - b;
  } else if(aritmatika == '*') {
    hasil = a * b;
  } else if(aritmatika == '/') {
    hasil = a / b;
  } else {
    cout << " -> Error: Operator yang anda masukan salah!" << endl;
    eksekusi = false;
  }

  if(eksekusi == true) {
    cout << " = " << hasil << endl;
  }
  
  cin.get();
  return 0;
}