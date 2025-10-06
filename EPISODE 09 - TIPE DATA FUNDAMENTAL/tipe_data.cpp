#include <iostream>

using namespace std;

int main() {
  // Bilangan bulat
  cout << "--- Bilangan Bulat ---" << endl;
  // Integer
  cout << "--- Integer ---" << endl;
  int a = 5; // 32-bit
  cout << a << endl;
  cout << sizeof(a) << " byte" << endl;
  
  // Long
  cout << "--- Long ---" << endl;
  long b = 6; // 64-bit
  cout << b << endl;
  cout << sizeof(b) << " byte" << endl;
  
  // Short
  cout << "--- Short ---" << endl;
  short c = 7; // 16-bit
  cout << c << endl;
  cout << sizeof(c) << " byte" << endl;
  
  // Bilangan decimal/pecahan
  cout << "--- Bilangan Decimal / Pecahan ---" << endl;
  // Float
  cout << "--- Float ---" << endl;
  float d = 8.0; // 32-bit
  cout << d << endl;
  cout << sizeof(d) << " byte" << endl;

  // Double
  cout << "--- Double ---" << endl;
  double e = 8.5; // 64-bit
  cout << e << endl;
  cout << sizeof(e) << " byte" << endl;

  // Character
  cout << "--- Character ---" << endl;
  // Char
  cout << "--- Char ---" << endl;
  char f = 'a'; // 8-bit
  cout << f << endl;
  cout << sizeof(f) << " byte" << endl;

  // Boolean
  cout << "--- Boolean ---" << endl;
  // Char
  cout << "--- Bool ---" << endl;
  bool g = true; // 8-bit
  cout << g << endl;
  cout << sizeof(g) << " byte" << endl;


  cin.get();
  return 0;
}