#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  int jumlah_simpul_2211102137;
  cout << "Silakan masukan jumlah simpul : ";
  cin >> jumlah_simpul_2211102137;

  vector<string> nama_simpul(jumlah_simpul_2211102137);
  cout << "Silakan masukan nama simpul" << endl;
  for (int i= 0; i < jumlah_simpul_2211102137; i++) {
    cout << "Simpul " << i + 1 << endl;
    cin >> nama_simpul[i];
  }

  vector<vector<double>> bobot(jumlah_simpul_2211102137, vector<double>(jumlah_simpul_2211102137));
  cout << "Silakan masukkan bobot antar simpul" << endl;
  for (int i = 0; i < jumlah_simpul_2211102137; i++) {
    for (int j = 0; j < jumlah_simpul_2211102137; j++) {
      cin >> bobot[i][j];
    }
  }

  cout << "Silakan tunggu, program sedang memproses data..." << endl;

  // Menampilkan hasil dengan format seperti gambar yang tertera
  for (int i = 0; i < jumlah_simpul_2211102137; i++) {
    for (int j = 0; j < jumlah_simpul_2211102137; j++) {
      if (i == j) {
        cout << nama_simpul[i] << " ";
      } else {
        cout << bobot[i][j] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}