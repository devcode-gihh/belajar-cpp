#include <iostream>

using namespace std;

int x = 10; // Variabel global
int ambil_global() {
  return x; // Mengambil variabel global
}

int x_local() {
  int x = 5; // Variabel local scope x_local()
  return x;
}


int main() {
  cout << "1. Mengambil dari variabel global: " << x << endl;
  int x = 8; // Variabel local untuk main
  cout << "2. Mengambil dari variabel local: " << x << endl;
  cout << "3. Mengambil dari variabel ambil_global: " << ambil_global() << endl;
  cout << "4. Mengambil dari variabel local: " << x << endl;
  cout << "5. Mengambil dari variabel x_local: " << x_local() << endl;
  cout << "6. Mengambil dari variabel local: " << x << endl;
  
  {
    cout << "7. Mengambil dari variabel local dari dalam block: " << x << endl;
    // Block scope
    int x = 1;
    cout << "8. Mengambil dari variabel block: " << x << endl;
    cout << "9. Mengambil dari variabel ambil_global: " << ambil_global() << endl;
  }
  cout << "10. Mengambil dari variabel local: " << x << endl;

  cin.get();
  return 0;
}