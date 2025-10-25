#include <iostream>

using namespace std;

// Function faktorial
int faktorial(int n) {
  if(n <= 1) {
    cout << n;
    return n;
  } else {
    cout << n << "*";
    return n * faktorial(n - 1);
  }
}

int main() {
  int angka, hasil;
  cout << "Hitung faktorial dari: ";
  cin >> angka;

  hasil = faktorial(angka);
  cout << "\nHasil faktorial dari angka " << angka << " adalah: " << hasil << endl;

  cin.get();
  return 0;
}