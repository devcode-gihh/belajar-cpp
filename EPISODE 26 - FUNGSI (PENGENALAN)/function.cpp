#include <iostream>
#include <cmath>

using namespace std;

// library cmath:
// ceil(x)   <- pembulatan ke atas
// cos(x)    <- cosinus
// exp(x)    <- exponen
// fabs(x)   <- nilai absolute dalam float
// floor(x)  <- pembulatan ke bawah
// fmod(x)   <- modulud dalam float
// log(x)    <- logaritma dengan basis natural
// log10(x)  <- logaritma dengan basis 10
// pow(x, y) <- x pangkat y
// sin(x)    <- sinus
// sqrt(x)   <- akar kuadrat
// tan(x)    <- tangen

int main() {
  int x;

  cout << "Menghitung akar dari X: ";
  cin >> x;

  double y = sqrt(x);
  cout << "Akar dari " << x << " adalah: " << y << endl;
  
  cin.get();
  return 0;
}