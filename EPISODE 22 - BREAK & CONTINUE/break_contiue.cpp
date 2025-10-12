#include <iostream>

using namespace std;

int main() {
  cout << "=== Menggunakan FOR ===" << endl;
  for(int i = 0; i <= 10; i++) {
    if(i == 5) {
      continue; // akan meng skip nomor 5 ketika i = 5
    } else if(i == 8) {
      break; // akan berhenti looping saat i = 8
    }
    cout << i << endl;
  }
  cout << "Akhir!" << endl << endl;
  
  cout << "=== Menggunakan WHILE ===" << endl;
  int x = 0;
  while (x <= 10) {
    x++;
    if(x == 3) {
      continue;
    } else if(x == 7) {
      break;
    }
    cout << x << endl;
  }
  cout << "Akhir!" << endl;
  

  cin.get();
  return 0;
}