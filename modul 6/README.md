Nama : Maxwell Tumpal Sidabutar

NIM : 2211102137

Kelas : S1IF11-E

MODUL 6

GUIDED 1

![image](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/2b03b92e-879a-416b-a70d-8a36c658baa3)

UNGUIDED 1

![image](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/1e990448-85f8-4a93-9a06-33a44c380a9c)
![image](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/9453a63c-7c07-4327-844e-1b176094ca12)

Header File dan Namespace: Program menggunakan beberapa header file standar C++ seperti <iostream>, <stack>, <string>, dan <cctype>. Header file ini memberikan akses ke fungsi-fungsi yang dibutuhkan seperti input-output, manipulasi string, dan penggunaan stack. Penggunaan using namespace std; memungkinkan penggunaan fungsi-fungsi dari namespace std tanpa harus menuliskan std:: setiap kali.
Fungsi isPalindrome: Ini adalah fungsi yang sebenarnya untuk menentukan apakah sebuah kalimat adalah palindrom atau tidak. Fungsi ini menerima satu parameter, yaitu string sentence, yang merupakan kalimat yang ingin diperiksa.
Pertama, kalimat dimurnikan dari spasi dan diubah menjadi huruf kecil menggunakan loop for.
Kemudian, sebuah stack char_stack dibuat untuk menyimpan setengah karakter pertama dari kalimat.
Setengah karakter pertama dimasukkan ke dalam stack.
Indeks awal untuk membandingkan karakter di stack ditentukan berdasarkan panjang kalimat.
Karakter di stack dibandingkan dengan karakter di sisa kalimat. Jika ada perbedaan, fungsi mengembalikan false, jika tidak ada perbedaan, fungsi mengembalikan true

UNGUIDED 2

![image](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/fe689a05-7cee-42d9-9196-f0f1b6180da2)

Program meminta pengguna untuk memasukkan sebuah kalimat.
Setiap kata dalam kalimat diproses, di mana setiap huruf dalam kata tersebut dibalikkan dan dimasukkan ke dalam stack.
Huruf-huruf tersebut kemudian diambil dari stack untuk membentuk kata-kata terbalik, yang kemudian membentuk kalimat terbalik.
Operasi/Fungsi yang Dibuat:

reverseWordsAndLetters: Fungsi ini menerima sebuah string (kalimat) dan mengembalikan kalimat tersebut dengan setiap kata dan huruf dalam kata tersebut dibalikkan.
main: Fungsi utama yang meminta input dari pengguna dan menampilkan kalimat dengan kata-kata dan huruf-huruf yang telah dibalikkan.
