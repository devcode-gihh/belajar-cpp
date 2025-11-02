#include <iostream>

using namespace std;

void fungsi(int *b) {
  cout << "Nilai b: " << *b << endl; // dereferencing
  cout << "Address b: " << b << endl; 
}

void kuadrat(int *valPtr) {
  *valPtr = (*valPtr) * (*valPtr);
  cout << "Hasil kuadrat dari nilai a: " << *valPtr << endl;
}

int main() {
  int a = 5;
  cout << "Nilai a: " << a << endl;
  cout << "Address a: " << &a << endl;
  cout << "---" << endl;
  fungsi(&a); // fungsi dengan input pointer
  cout << "---" << endl;
  kuadrat(&a);

  cin.get();
  return 0;
}