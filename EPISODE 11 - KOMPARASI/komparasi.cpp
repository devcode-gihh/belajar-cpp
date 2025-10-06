#include <iostream>

using namespace std;

int main() {
  int a = 2;
  int b = 2;

  bool hasil1, hasil2;
  // Komparasi/Relation expression
  cout << "(0 = false -  1 = true)" << endl;
  // Sebanding (==)
  cout << "--- Sebanding" << endl;
  hasil1 = (a == b);
  cout << a << " == " << b << " = " << hasil1 << endl;

  // Tidak sebanding (!=)
  cout << "--- Tidak sebanding" << endl;
  hasil2 = (a != b);
  cout << a << " != " << b << " = " << hasil2 << endl;

  int c = 3;
  int d = 4;
  // Kurang dari (<)
  cout << "--- Kurang dari" << endl;
  hasil1 = (c < d);
  cout << c << " < " << d << " = " << hasil1 << endl;

  // Lebih dari (>)
  cout << "--- Lebih dari" << endl;
  hasil2 = (c > d);
  cout << c << " > " << d << " = " << hasil2 << endl;

  // Kurang dari sama dengan (<=)
  cout << "--- Kurang dari sama dengan" << endl;
  hasil1 = (a <= b);
  cout << a << " <= " << b << " = " << hasil1 << endl;

  // Lebih dari sama dengan (>=)
  cout << "--- Lebih dari sama dengan" << endl;
  hasil2 = (c >= d);
  cout << c << " >= " << d << " = " << hasil2 << endl;

  cin.get();
  return 0;
}