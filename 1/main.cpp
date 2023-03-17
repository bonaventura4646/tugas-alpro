#include <iostream>

using namespace std;

void penjumlahan(int a, int b) {
   int hasil = a + b;

   cout << "Hasil penjumlahan dari " << a << " dan " << b << " adalah " << hasil << endl;
}

int main() {
   int bilangan1, bilangan2;

   cout << "Masukkan bilangan pertama: ";
   cin >> bilangan1;

   cout << "Masukkan bilangan kedua: ";
   cin >> bilangan2;

   penjumlahan(bilangan1, bilangan2);

   return 0;
}
