#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <functional> // Diperlukan untuk menggunakan std::function

using namespace std;

int main() {
  int jumlah_simpul;
  cout << "Silakan masukkan jumlah simpul: ";
  cin >> jumlah_simpul;

  vector<string> nama_simpul(jumlah_simpul);
  cout << "Silakan masukkan nama simpul" << endl;
  for (int i = 0; i < jumlah_simpul; i++) {
    cout << "Simpul " << i + 1 << ": ";
    cin >> nama_simpul[i];
  }

  map<string, map<string, double>> bobot;
  cout << "Silakan masukkan bobot antar simpul" << endl;
  for (int i = 0; i < jumlah_simpul; i++) {
    for (int j = 0; j < jumlah_simpul; j++) {
      string simpul_awal = nama_simpul[i];
      string simpul_tujuan = nama_simpul[j];
      double bobot_nilai;
      cout << simpul_awal << " --> " << simpul_tujuan << " = ";
      cin >> bobot_nilai;
      bobot[simpul_awal][simpul_tujuan] = bobot_nilai;
    }
  }

  cout << "Silakan tunggu, program sedang memproses data..." << endl;

  // Menu program
  int pilihan;
  cout << "Menu Program:" << endl;
  cout << "1. Tampilkan tree" << endl;
  cout << "2. Tampilkan node child" << endl;
  cout << "3. Tampilkan node descendant" << endl;
  cout << "4. Keluar" << endl;
  cout << "Pilihan: ";
  cin >> pilihan;

  // Deklarasi variabel di luar loop switch
  string node;
  vector<string> descendant_temp;
  function<void(string)> dfs;

  while (pilihan != 4) {
    switch (pilihan) {
      case 1:
        // Menampilkan tree
        for (int i = 0; i < jumlah_simpul; i++) {
          for (int j = 0; j < jumlah_simpul; j++) {
            if (i == j) {
              cout << nama_simpul[i] << " ";
            } else {
              if (bobot[nama_simpul[i]][nama_simpul[j]] != 0) {
                cout << bobot[nama_simpul[i]][nama_simpul[j]] << " ";
              } else {
                cout << "  ";
              }
            }
          }
          cout << endl;
        }
        break;
      case 2:
        // Menampilkan node child
        cout << "Masukkan nama node: ";
        cin >> node;
        cout << "Node child dari " << node << ":" << endl;
        for (int i = 0; i < jumlah_simpul; i++) {
          if (bobot[node][nama_simpul[i]] != 0) {
            cout << nama_simpul[i] << " ";
          }
        }
        cout << endl;
        break;
      case 3:
        // Menampilkan node descendant
        cout << "Masukkan nama node: ";
        cin >> node;
        dfs = [&](string node) {
          if (bobot[node].empty()) {
            descendant_temp.push_back(node);
          } else {
            for (auto child : bobot[node]) {
              dfs(child.first);
            }
          }
        };
        dfs(node);
        cout << "Node descendant dari " << node << ":" << endl;
        for (string descendant_node : descendant_temp) {
          cout << descendant_node << " ";
        }
        cout << endl;
        break;
      default:
        cout << "Pilihan tidak valid" << endl;
        break;
    }
    cout << "Pilihan: ";
    cin >> pilihan;
  }
  cout << "Terima kasih, program telah berhenti" << endl;
  return 0;
}
