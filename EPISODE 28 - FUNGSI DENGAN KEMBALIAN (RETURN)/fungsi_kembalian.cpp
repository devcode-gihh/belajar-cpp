#include <iostream>

using namespace std;

// Membuat fungsi penjumlahan
int penjumlahan(int a, int b) {
  int c;
  c = a + b;
  return c;
}

// Membuat fungsi kuadrat
int kuadrat(int x) {
  int y;
  y = x * x;
  return y;
}

int main() {
  int a, b, hasil, input, hasil2;
    cout << "--- PEMAKAIAN FUNGSI PENJUMLAHAN ---" << endl;
  cout <<  "Masukan nilai a: ";
  cin >> a;
  cout <<  "Masukan nilai b: ";
  cin >> b;
  
  hasil2 = penjumlahan(a, b);
  cout << "Nilai penjumlahan dari " << a << " + " << b << " = " << hasil << endl;
  
  cout << "--- PEMAKAIAN FUNGSI KUADRAT ---" << endl;
  cout << "Masukan nilai kuadrat: ";
  cin >> input;
  
  hasil = kuadrat(input);
  cout << "Nilai kuadrat dari " << input << " = " << hasil2 << endl;

  cin.get();
  return 0;
}