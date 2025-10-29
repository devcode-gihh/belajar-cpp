#include <iostream>

using namespace std;

int main() {
  int a = 5;

  // Pointer
  int *aPtr = nullptr;
  aPtr = &a;

  // int a mempunyai nilai & address
  cout << "Nilai dari a: " << a << endl;
  cout << "Alamat dari si a: " << aPtr << endl;

  // Dereferencing. mengambil data dari sebuah pointer
  cout << "Mengambil nilai dari pointer (aPtr): " << *aPtr << endl;
  a = 10;
  cout << "Mengambil nilai dari pointer (aPtr): " << *aPtr << endl;

  cin.get();
  return 0;
}