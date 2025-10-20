#include <iostream>

using namespace std;

// Fungsi menghitung luas persegi panjang
double hitung_luas(double p, double l) {
  double luas = p * l;
  return luas;
}

// Fungsi menghitung keliling persegi panjang
double hitung_keliling(double p, double l) {
  double keliling = 2 * (p + l);
  return keliling;
}

// Fungsi void untuk menampilkan
void tampilkan_luas(double p, double l) {
  cout << "Luasnya adalah: " << hitung_luas(p, l) << endl;
}

void tampilkan_keliling(double p, double l) {
  cout << "Kelilingnya adalah: " << hitung_keliling(p, l) << endl;
}

int main() {
  double panjang, lebar, hitung;

  cout << "=== MENGHITUNG LUAS & KELILING PERSEGI PANGJANG ===" << endl;
  cout << "Masukan panjang: ";
  cin >> panjang;
  cout << "Masukan lebar: ";
  cin >> lebar;

  cout << "\nLuas & Keliling persegi panjang dari (P = " << panjang << ") dan (L = " << lebar << ") adalah:" << endl << endl;
  cout << "--- Pemanggilan Manual ---" << endl;
  cout << "Luasnya adalah: " << hitung_luas(panjang, lebar) << endl;
  cout << "Kelilingnya adalah: " << hitung_keliling(panjang, lebar) << endl << endl;

  cout << "--- Pemanggilan Void ---" << endl;
  tampilkan_luas(panjang, lebar);
  tampilkan_keliling(panjang, lebar);

  cin.get();
  return 0;
}