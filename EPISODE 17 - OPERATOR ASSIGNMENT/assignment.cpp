#include <iostream>

using namespace std;

int main() {
  // Assignment
  int a = 10;
  cout << "Nilai awal dari a adalah: " << a << endl;

  // Assignment operator (+=, -=, *=, /=, %=)
  a += 3; // (+=)
  cout << "Ditambah 3 menjadi: " << a << endl;

  a -= 5; // (-=)
  cout << "Dikurang 5 menjadi: " << a << endl;

  a *= 4; // (*=)
  cout << "Dikali 4 menjadi: " << a << endl;

  a /= 2; // (/=)
  cout << "Dibagi 2 menjadi: " << a << endl;

  a %= 2; // (%=)
  cout << "Dimodulus 2 menjadi: " << a << " / tidak ada sisa" << endl;

  cin.get();
  return 0;
}