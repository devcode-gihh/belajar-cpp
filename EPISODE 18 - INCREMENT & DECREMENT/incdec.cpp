#include <iostream>

using namespace std;

int main() {
  // Increment & Decrement
  
  // preincrement dan postincrement
  int a = 5;
  int b = 5;
  cout << "--- INCREMENT---" << endl;
  // postincrement
  cout << a << endl;
  cout << a++ << endl;
  cout << a << endl << endl;
  
  // preincrement
  cout << b << endl;
  cout << ++b << endl;
  cout << b << endl;
  
  // predecrement dan postdecrement
  int c = 5;
  int d = 5;
  cout << "--- DECREMENT---" << endl;
  // predecrement
  cout << c << endl;
  cout << c-- << endl;
  cout << c << endl << endl;
  
  // postdecrement
  cout << d << endl;
  cout << --d << endl;
  cout << d << endl << endl;
  

  cin.get();
  return 0;
}