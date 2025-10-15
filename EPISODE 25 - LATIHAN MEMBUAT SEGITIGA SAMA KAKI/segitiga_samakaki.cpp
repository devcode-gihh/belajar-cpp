#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Masukan panjang pola: ";
  cin >> n;

  cout << "Pola 1" << endl;
  for(int i = 1; i <= n; i++) {
    for(int j = n; j > i; j--) {
      cout << " ";
    }
    for(int k = 1; k <= (2 * i - 1); k++) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "\nPola 2" << endl;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j < i; j++) {
      cout << " ";
    }
    for(int k = i; k <= (2 * n - i); k++) {
      cout << "*";
    }
    cout << endl;
  }
  
  cout << "Pola 3" << endl;
  for(int i = 1; i <= n; i++) {
    for(int j = n; j > i; j--) {
      cout << " ";
    }
    for(int k = 1; k <= (2 * i - 1); k++) {
      cout << "*";
    }
    cout << endl;
  }

  for(int i = 2; i <= n; i++) {
    for(int j = 1; j < i; j++) {
      cout << " ";
    }
    for(int k = i; k <= (2 * n - i); k++) {
      cout << "*";
    }
    cout << endl;
  }

  cin.get();
  return 0;
}