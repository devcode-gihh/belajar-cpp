#include <iostream>

using namespace std;

int main() {
  int a = 3;
  int b = 2;

  bool hasil;
  // Operator logika : AND, OR, NOT
  cout << "(0 = false -  1 = true)" << endl;
  // NOT
  cout << "--- NOT" << endl;
  hasil = !(a == 3);
  cout << "!(" << a << " == 3) " << "= " << hasil << endl;

  // AND / && (Kedua nilai harus benar untuk menghasilkan true)
  cout << "--- AND" << endl;
  hasil = (a == 3) and (b == 2); // true and true
  cout << "(" << a << " == 3) " << "and" << " (" << b << " == 2) " << "= " << hasil << endl;
  hasil = (a == 4) and (b == 2);  // false and true
  cout << "(" << a << " == 4) " << "and" << " (" << b << " == 2) " << "= " << hasil << endl;
  hasil = (a == 3) and (b == 3); // true and false
  cout << "(" << a << " == 3) " << "and" << " (" << b << " == 3) " << "= " << hasil << endl;
  hasil = (a == 4) and (b == 3); // false and false
  cout << "(" << a << " == 4) " << "and" << " (" << b << " == 3) " << "= " << hasil << endl;

  // OR / || (Salah satu nilai true maka hasilnya true)
  cout << "--- OR" << endl;
  hasil = (a == 3) or (b == 2); // true and true
  cout << "(" << a << " == 3) " << "or" << " (" << b << " == 2) " << "= " << hasil << endl;
  hasil = (a == 4) or (b == 2);  // false and true
  cout << "(" << a << " == 4) " << "or" << " (" << b << " == 2) " << "= " << hasil << endl;
  hasil = (a == 3) or (b == 3); // true and false
  cout << "(" << a << " == 3) " << "or" << " (" << b << " == 3) " << "= " << hasil << endl;
  hasil = (a == 4) or (b == 3); // false and false
  cout << "(" << a << " == 4) " << "or" << " (" << b << " == 3) " << "= " << hasil << endl;


  cin.get();
  return 0;
}