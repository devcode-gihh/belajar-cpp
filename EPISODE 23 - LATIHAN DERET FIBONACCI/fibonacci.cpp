#include <iostream>

using namespace std;

int main() {
  // f(n) = f(n1) + f(n2)

  int n;
  int fn;
  int fn1;
  int fn2;

  cout << "Program Deret Fibonacci" << endl;
  cout << "Masukan nilai ke-n: ";
  cin >> n;

  fn1 = 1;
  fn2 = 0;
  fn = fn1 + fn2;
  cout << fn2 << " ";
  cout << fn << " ";
  for(int i = 1; i < n; i++) {
    fn = fn1 + fn2;
    cout << fn << " ";
    fn2 = fn1;
    fn1 = fn;
  }

  cin.get();
  return 0;
}