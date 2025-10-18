#include <iostream>
#include <cstdlib> // Mengandung fungsi random

using namespace std;

int main() {
  char play;
  while (true) {
    cout << "Lempar dadu? y/n: ";
    cin >> play;
    if(play == 'y') { 
      cout << 1 + (rand() % 6) << endl;
    } else if(play == 'n') {
      cout << "Dadu tidak dilempar!" << endl;
      break;
    } else {
      cout << "Warning!: Pesan yang anda kirim tidak sesuai! (Y/N)" << endl;
    }
  }

  cin.get();
  return 0;
}