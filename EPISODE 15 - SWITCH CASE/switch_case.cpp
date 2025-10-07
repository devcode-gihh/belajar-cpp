#include <iostream>

using namespace std;

int main() {
  int a;

  cout << "Masukan nilai : ";
  cin >> a;
  switch(a) {
    case 3:
      cout << "Benar itu adalah 3" << endl;
      break;
    case 4:
      cout << "Benar itu adalah 4" << endl;
      break;
    case 5:
      cout << "Benar itu adalah 5" << endl;
      break;
    default:
      cout << "Angka tidak ada!" << endl;

  }
      cout << "Akhir dari program" << endl;

  cin.get();
  return 0;
}