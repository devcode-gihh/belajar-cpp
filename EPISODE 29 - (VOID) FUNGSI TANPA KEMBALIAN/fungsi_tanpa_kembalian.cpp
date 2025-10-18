#include <iostream>

using namespace std;

int kuadrat(int x) { // Fungsi kembalian
  int y;
  y = x * x;
  return y;
}

void tampilkan(int input) { // Fungsi tanpa kembalian
  cout << "Ini ditampilkan menggunakan fungsi tanpa kembalian" << endl;
  cout << "Nilai kuadrat nya adalah: " << input << endl << endl;
}

int main() {
  int input, hasil;
  cout << "--- PEMAKAIAN FUNGSI KUADRAT ---" << endl;
  cout << "Masukan nilai kuadrat: ";
  cin >> input;
  
  hasil = kuadrat(input);
  tampilkan(hasil);
  cout << "Ini ditampilkan menggunakan fungsi kembalian" << endl;
  cout << "Nilai kuadrat dari " << input << " = " << hasil << endl;

  cin.get();
  return 0;
}