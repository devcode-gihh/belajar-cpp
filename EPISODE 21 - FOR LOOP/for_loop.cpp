#include <iostream>

using namespace std;

int main() {
  cout << "For loop 1!" << endl;
  for(int i = 1; i <= 5; i++) {
    cout << "Print " << i << endl;
  }

  cout << "\nFor loop 2!" << endl;
  for(int i = 1; i < 10; i += 2) {
    cout << "Print " << i << endl;
  }

  cout << "\nFor loop 3!" << endl;
  for(int i = 0; i > -8; i--) {
    cout << "Print " << i << endl;
  }

  cout << "\nFor loop 4!" << endl;
  int total = 0;
  for(int i = 1; i < 10; i++) {
    total += i;
    cout << "Variabel i: " << i << " || " << "Variabel total: " << total << endl;
  }

  cin.get();
  return 0;
}