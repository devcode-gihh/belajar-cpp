#include <iostream>

using namespace std;

int main() {
  int a = 1;

  do {
    cout << "Horee! " << a << endl;
    a +=1;
  } while (a < 10);

  cout << "Program do while loop selesai!" << endl;

  cin.get();
  return 0;
}