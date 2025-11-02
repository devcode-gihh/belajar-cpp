#include <iostream>

using namespace std;

void fungsi(int &b) {
  b = 10;
  cout << "Nilai b: "  << b << endl;
  cout << "Address b: " << &b << endl;
}

void kuadrat(int &nilaiRef) {
  nilaiRef = nilaiRef * nilaiRef;
}

int main() {
  int a = 5;
  cout << "Nilai a: " << a << endl;
  cout << "Address a: " << &a << endl;
  cout << "---" << endl;
  fungsi(a);
  cout << "---" << endl;
  cout << "Nilai a: " << a << endl;
  cout << "---" << endl;
  kuadrat(a);
  cout << "Hasil kuadrat dari a: " << a << endl;

  cin.get();
  return 0;
}