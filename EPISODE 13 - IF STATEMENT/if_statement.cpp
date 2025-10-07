#include <iostream>

using namespace std;

int main() {
  int a;

  cout << "Masukan angka = ";
  cin >> a;

  // if statement
  // Kondisi dalam bentuk boolean
  if (a == 3)
  {
    cout << "Angka yang anda masukan sama!" << endl;
  }
  cout << "Selesai!" << endl;

  cin.get();
  return 0;
}