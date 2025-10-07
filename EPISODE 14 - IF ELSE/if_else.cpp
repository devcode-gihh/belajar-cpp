#include <iostream>

using namespace std;

int main() {
  int a;

  cout << "Masukan angka : ";
  cin >> a;

  if(a > 5) {
    cout << "Angka yang anda masukan lebih dari 5!" << endl;
  } else if(a < 5) {
    cout << "Angka yang anda masukan kurang dari 5!" << endl;
  } else {
    cout << "Angka yang anda masukan sama dengan 5!" << endl;
  }

  cin.get();
  return 0;
}