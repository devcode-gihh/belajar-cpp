#include <iostream>

using namespace std;

// Fungsi prototipe
double volume_kubus(double p = 5, double l = 3, double t = 2);

int main() {
  cout << "--- Mengisi semua nilai fungsi ---" << endl;
  cout << "Volume kubus: " << volume_kubus(3,4,5) << endl << endl;
  cout << "--- Mengisi sebagian nilai fungsi ---" << endl;
  cout << "Volume kubus: " << volume_kubus(3,4) << endl;
  cout << "Volume kubus: " << volume_kubus(3) << endl << endl;
  cout << "--- Tidak mengisi nilai fungsi ---" << endl;
  cout << "Volume kubus: " << volume_kubus() << endl;

  cin.get();
  return 0;
}

// Default argumen / nilai standar
double volume_kubus(double p, double l, double t) {
  double hitung = p * l * t;
  return hitung;
}