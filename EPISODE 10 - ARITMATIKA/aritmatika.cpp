#include <iostream>

using namespace std;

int main() {
  int a = 6;
  int b = 4;
  int hasil;

  // Operatornya +, -, *, /, %
  // Penjumlahan (+)
  hasil = a + b;
  cout << "--- Penjumlahan" << endl;
  cout << a << " + " << b << " = " << hasil << endl;

  // Pengurangan (-)
  hasil = a - b;
  cout << "--- Pengurangan" << endl;
  cout << a << " - " << b << " = " << hasil << endl;

  // Perkalian (*)
  hasil = a * b;
  cout << "--- Perkalian" << endl;
  cout << a << " * " << b << " = " << hasil << endl;

  // Pembagian (/)
  hasil = a / b;
  cout << "--- Pembagian" << endl;
  cout << a << " / " << b << " = " << hasil << endl;

  // Modulus (%)
  hasil = a % b;
  cout << "--- Modulus" << endl;
  cout << a << " % " << b << " = " << hasil << endl;

  // Urutan eksekusi
  cout << "\nUrutan eksekusi aritmatika : (), *, /, %, +, -" << endl;

  cin.get();
  return 0;
}