A. Stack

Kaidah utama dalam konsep stack adalah LIFO yang merupakan singkatan dari Last In First Out, artinya adalah data yang terakhir kali dimasukkan tau disimpan, maka data tersebut adalah yang pertama kali akan diakses atau dikeluarkan. Gambar di bawah ini mengilustrasikan kerja sebuah stack.
Sebuah stack di dalam program komputer dideklarasikan sebagai sebuah tipe bentukan baru, di dalam Bahasa C, biasa disebut struct. Sebuah struktur data dari sebuah stack setidaknya harus mengandung dua buah variabel, yakni variabel TOP yang akan berguna sebagai penanda bagian atas tumpukan dan ARRAY DATA dari yang akan menyimpan data-data yang dimasukkan ke dalam stack tersebut.
Dalam tulisan ini, sebuah stack didefinisikan dengan array berukuran MAX + 1, maksudnya
adalah agar elemen array ke-0 tidak digunakan untuk menyimpan data, melainkan hanya sebagai tempat „singgah‟ sementara untuk variabel TOP. sehingga, jika TOP berada pada elemen array ke-0, berarti stack tersebut dalam kondisi kosong (tidak ada data yang disimpan).

Operasi-operasi dasar dalam Stack :
-> Prosedur createEmpty
-> Prosedur push
-> Prosedur pop
-> Fungsi IsEmpty
-> Fungsi IsFull

B. Queue

Kaidah utama dalam konsep queue adalah FIFO yang merupakan singkatan dari First In First Out, artinya adalah data yang pertama kali dimasukkan atau disimpan, maka data tersebut adalah yang pertama kali akan diakses atau dikeluarkan. Analoginya sama dengan antrian di sebuah loket pembelian tiket kereta, orang yang datang lebih dahulu, maka akan dilayani terlebih dahulu, dan akan selesai lebih dulu dari orang-orang yang datang setelahnya.
Sebuah queue di dalam program komputer dideklarasikan sebagai sebuah tipe bentukan baru, di dalam Bahasa C, biasa disebut struct. Sebuah struktur data dari sebuah queue setidaknya harus mengandung dua tiga variabel, yakni variabel HEAD yang akan berguna sebagai penanda bagian depan antrian, variabel TAIL yang akan berguna sebagai penanda bagian belakang antrian dan ARRAY DATA dari yang akan menyimpan data-data yang dimasukkan ke dalam queue tersebut.
sebuah queue didefinisikan dengan array berukuran MAX + 1, maksudnya adalah agar elemen array ke-0 tidak digunakan untuk menyimpan data, melainkan hanya sebagai tempat „singgah‟ sementara untuk variabel HEAD dan TAIL. Sehingga, jika HEAD dan TAIL berada pada elemen array ke-0, berarti queue tersebut dalam kondisi kosong (tidak ada data yang disimpan).

Operasi-operasi dalam Queue
-> Prosedur createEmpty
-> Prosedur enqueue
-> Prosedur dequeue
-> Fungsi IsEmpty
-> Fungsi IsFull
