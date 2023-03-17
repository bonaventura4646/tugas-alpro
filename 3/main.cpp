#include <iostream>

using namespace std;

void hitungTotal(int arr[], int n) {
   int total = 0;

   for(int i = 0; i < n; i++) {
      total += arr[i];
   }

   cout << "Total jumlah array adalah: " << total << endl;
}

int main() {
   int arr[4];

   for(int i = 0; i < 4; i++) {
      cout << "Masukkan angka ke-" << i+1 << ": ";
      cin >> arr[i];
   }

   hitungTotal(arr, 4);

   return 0;
}
