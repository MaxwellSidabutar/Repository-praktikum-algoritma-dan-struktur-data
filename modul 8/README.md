Nama : Maxwell Tumpal Sidabutar

NIM : 2211102137

Kelas : S1IF11-E

Modul 8

guided 1

![Screenshot 2024-05-23 005448](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/2bdc737e-7939-4f88-80af-211118963038)


guided 2

![Screenshot 2024-05-23 005810](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/e7ba489b-7676-4718-be51-240073eb7410)


unguided 1

![Screenshot 2024-05-23 011043](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/b2b92f25-8259-4a5f-94ec-4ef9ff05478a)
input: Terima input berupa kalimat (misalnya dalam bentuk array karakter) dan huruf yang ingin dicari.

Inisialisasi: Tentukan indeks awal (start) dan indeks akhir (end) dari array.

Iterasi: Selama start kurang dari atau sama dengan end, lakukan langkah-langkah berikut:
Hitung indeks tengah (mid) dengan rumus mid = (start + end) / 2.

Bandingkan karakter pada indeks mid dengan huruf yang ingin dicari:
    Jika karakter pada indeks mid sama dengan huruf yang dicari, kembalikan mid.
    Jika karakter pada indeks mid lebih kecil dari huruf yang dicari, perbarui start = mid + 1.
    Jika karakter pada indeks mid lebih besar dari huruf yang dicari, perbarui end = mid - 1.
    
Keluaran: Jika tidak ditemukan huruf yang dicari, kembalikan -1.


unguided 2

![Screenshot 2024-05-23 011354](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/a613814d-0250-4671-a1b9-9e73ce905e24)
Menghitung Huruf Vokal:

Program menggunakan loop for untuk mengiterasi melalui setiap karakter dalam kalimat.

Jika karakter adalah huruf vokal (‘a’, ‘i’, ‘u’, ‘e’, atau ‘o’), maka variabel vokal akan bertambah satu


unguided 3

![Screenshot 2024-05-23 012503](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/42626734-a46a-4fa8-a251-1ff7f8b8cac7)
menggunakan loop for untuk mengiterasi melalui setiap elemen dalam array data. Pada setiap iterasi:

Jika elemen saat ini adalah 4, kita menambahkan 1 ke countFour.

