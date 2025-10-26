#include <iostream>

using namespace std;

// Function fibonacci
// Fibonacci menggunakan function rekursif kurang efektif
int fibonacci(int n) {
  if(n == 0 || n == 1) {
    return n;
  } else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int main() {
  int angka,hasil;
  cout << "Menghitung fibonacci ke: ";
  cin >> angka;
  hasil = fibonacci(angka);
  cout << "Nilainya adalah: " << hasil << endl;

  cin.get();
  return 0;
}