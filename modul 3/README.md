Nama : Maxwell Tumpal Sidabutar

NIM : 2211102137

Kelas : S1IF11-E

Laprak 3

GUIDED 1

![image](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/6870c4d4-9077-4f90-ab84-08f0f740b7bb)

GUIDED 2

![image](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/fcd66730-3d68-4d01-8862-a377aa32d89d)

UNGUIDED 1

![image](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/ff81dd9a-a485-4ef9-8493-5abbf1fa21db)

Program di atas adalah implementasi dari sebuah linked list yang menyimpan data mahasiswa.

Struct Node: Mendefinisikan struktur data untuk node dalam linked list. Setiap node memiliki dua data: nama (nama) dan usia (usia), serta pointer next untuk menunjukkan node berikutnya dalam linked list.
Class LinkedList: Kelas ini mengimplementasikan linked list dan menyediakan fungsi-fungsi untuk operasi-operasi seperti menambahkan node di depan, di belakang, di tengah, menghapus node, memperbarui node, dan menampilkan isi linked list.
insertFront: Menambahkan node baru di depan linked list.
insertEnd: Menambahkan node baru di akhir linked list.
insertAfter: Menambahkan node baru setelah node dengan nama tertentu.
removeNode: Menghapus node berdasarkan nama.
updateNode: Memperbarui data node berdasarkan nama.
displayList: Menampilkan semua data dalam linked list.
Main Function: Fungsi utama (main) inisialisasi objek dari kelas LinkedList, kemudian melakukan operasi-operasi seperti:
Menambahkan beberapa data awal dengan menggunakan method insertFront dan insertEnd.
Menghapus data dengan nama "Akechi" menggunakan method removeNode.
Menambahkan data "Futaba" setelah data "John" menggunakan method insertAfter.
Menambahkan data "Igor" di depan linked list menggunakan method insertFront.
Memperbarui data "Michael" menjadi "Reyn" dan usianya menjadi 18 menggunakan method updateNode.
Menampilkan semua data dalam linked list menggunakan method displayList.

UNGUIDED 2

![image](https://github.com/MaxwellSidabutar/Repository-praktikum-algoritma-dan-struktur-data/assets/163196340/c8cd836c-3439-4652-93df-e95422b86776)

Struct Node: Mendefinisikan struktur data untuk node dalam linked list. Setiap node memiliki dua data: nama produk (productName) dan harga (price), serta dua pointer: prev (pointer ke node sebelumnya) dan next (pointer ke node berikutnya).

Class SkincareStore: Mendefinisikan kelas untuk toko skincare. Kelas ini memiliki beberapa method untuk operasi-operasi seperti menambah data, menghapus data, memperbarui data, menambah data di urutan tertentu, menampilkan data, dan menghapus semua data.

addData: Menambahkan data produk baru ke akhir linked list dengan membuat node baru dan menyesuaikan pointer next dan prev.

deleteData: Menghapus data produk berdasarkan nama produk yang diberikan. Program akan mencari node dengan nama produk yang sesuai dan menghapusnya dari linked list.

updateData: Memperbarui harga produk berdasarkan nama produk yang diberikan. Program akan mencari node dengan nama produk yang sesuai dan mengubah nilai harga produknya.

addDataAtPosition: Menambahkan data produk baru setelah node dengan nama produk tertentu yang diberikan. Program akan mencari node dengan nama produk sebelumnya, kemudian menambahkan node baru setelahnya.

displayData: Menampilkan semua data produk yang ada dalam linked list ke layar.

deleteAllData: Menghapus semua data produk dari linked list.
