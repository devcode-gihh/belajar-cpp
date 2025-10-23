#include <iostream>

using namespace std;

// Overloading = menimpa

// Basic function
int luas_kotak(int panjang, int lebar) {
  int luas = panjang * lebar;
  return luas;
}

// Overload function
int luas_kotak(int sisi) {
  int luas = sisi * sisi;
  return luas;
}

double luas_kotak(double sisi) {
  double luas = sisi * sisi;
  return luas;
}

int main() {
  cout << "Luas kotak 2x3: " << luas_kotak(2, 3) << endl; // Mengambil basic function
  cout << "Luas kotak 6x6: " << luas_kotak(6) << endl; // Mengambil overload function
  cout << "Luas kotak 3.5x3.5: " << luas_kotak(3.5) << endl; // Mengambil overload function

  cin.get();
  return 0;
}