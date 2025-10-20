#include <iostream>

using namespace std;

// Prototipe fungsi
double hitung_luas(double p, double l);
void println(double x);

int main() {
  double panjang, lebar, luas;
  
  cout << "=== MENGHITUNG LUAS PERSEGI PANGJANG ===" << endl;
  cout << "Masukan panjang: ";
  cin >> panjang;
  cout << "Masukan lebar: ";
  cin >> lebar;
  
  cout << "\nLuas persegi panjang dari (P = " << panjang << ") dan (L = " << lebar << ") adalah:" << endl << endl;
  cout << "Pemanggilan Manual" << endl;
  cout << "Luasnya adalah: " << hitung_luas(panjang, lebar) << endl << endl;
  
  cout << "Pemanggilan Void" << endl;
  luas = hitung_luas(panjang, lebar);
  println(luas);
  
  cin.get();
  return 0;
}

// Fungsi menghitung luas persegi panjang
double hitung_luas(double p, double l) {
  double luas = p * l;
  return luas;
}

void println(double x) {
  cout << "Luasnya adalah: " << x << endl;
}