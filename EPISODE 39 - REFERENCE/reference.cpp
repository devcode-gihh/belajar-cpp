#include <iostream>

using namespace std;

int main() {
  int a = 5;
  cout << "Nilai dari a: " << a << endl;
  cout << "Alamat/Address dari a:" << &a << endl << endl;
  
  int &b = a;
  cout << "Nilai dari b: " << b << endl;
  cout << "Alamat/Address dari b: " << &b << endl << endl;

  b = 10;
  cout << "Nilai dari a: " << a << endl;
  cout << "Nilai dari b: " << b << endl << endl;

  a = 33;
  cout << "Nilai dari a: " << a << endl;
  cout << "Nilai dari b: " << b << endl << endl;

  cin.get();
  return 0;
}