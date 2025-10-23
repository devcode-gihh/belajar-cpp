#include <iostream>

using namespace std;

// Fungsi rekursif terbatas
int pangkatIterasi(int a, int b) {
  int hasil = a;
  for(int i = 1; i < b; i++) {
    hasil = hasil * a;
  }

  return hasil;
}

int pangkatRekursif(int a, int b) {
  if(b <= 1) {
    cout << "Akhir dari rekursif" << endl;
    return a;
  } else {
    cout << "Rekursif" << endl;
    return a * pangkatRekursif(a, (b - 1));
  }
}

int main() {
  int a, b;
  cout << "Angka: ";
  cin >> a;
  cout << "Pangkat: ";
  cin >> b;

  cout << "Hasil dari iterasi = " << pangkatIterasi(a,b) << endl;
  cout << "Hasil dari rekursif = " << pangkatRekursif(a,b) << endl;

  cin.get();
  return 0;
}