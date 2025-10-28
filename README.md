# Program Menghitung Sifat Lingkaran (C++)
Program ini berfungsi untuk menentukan jari-jari, diameter, keliling, serta luas suatu lingkaran berdasarkan dua titik masukan, yaitu titik pusat (centroid) dan satu titik pada kelilingnya. Struktur program dibuat dengan menggunakan user-defined functions agar kode lebih terorganisasi, modular, dan mudah dipahami.
![image alt](https://github.com/AwaliyaShabrina/494095_W9/blob/80e904676cede52e2d929b32c6ea01352e8db0f9/I%3AO%20Function.png)

## Fungsi getCoordinates()
Fungsi ini bertugas untuk meminta input koordinat dari pengguna, yaitu titik pusat dan satu titik pada keliling lingkaran. Parameter fungsi menggunakan double& (pass by reference), sehingga nilai yang dimasukkan oleh pengguna langsung tersimpan dan dapat digunakan oleh fungsi lain tanpa perlu dikembalikan terlebih dahulu. Fungsi ini meminta dua jenis input, yaitu koordinat pusat lingkaran (cx, cy) dan koordinat titik pada keliling lingkaran (px, py).

## Fungsi displayResults()
Fungsi ini berfungsi untuk menampilkan seluruh hasil perhitungan lingkaran ke layar. Di dalamnya, format tampilan angka diatur hingga empat digit di belakang koma menggunakan setprecision(4). Fungsi ini menampilkan nilai jari-jari (r), menghitung serta menampilkan diameter (2 * r), kemudian memanggil fungsi circumference(r) untuk menampilkan keliling dan area(r) untuk menampilkan luas lingkaran. Seluruh hasil perhitungan tersebut dicetak ke layar dalam format yang rapi dan mudah dibaca.

## Fungsi distance()
Fungsi ini digunakan untuk menghitung jarak antara dua titik (x1, y1) dan (x2, y2) menggunakan rumus jarak Euclidean, yaitu distance = √((x2 - x1)² + (y2 - y1)²). Proses perhitungannya dimulai dengan mencari selisih antara koordinat sumbu X dan Y (disebut deltaX dan deltaY), kemudian masing-masing selisih tersebut dikuadratkan dan dijumlahkan. Hasil penjumlahan tersebut diakarkan menggunakan fungsi sqrt() untuk memperoleh jarak sebenarnya antara kedua titik. Nilai jarak yang diperoleh kemudian dikembalikan sebagai return value dari fungsi ini.

## Fungsi radius() 
Fungsi ini menentukan jari-jari lingkaran, yaitu jarak antara titik pusat (cx, cy) dan titik pada keliling (px, py). Perhitungan dilakukan dengan memanggil fungsi distance(), dan hasilnya dikembalikan sebagai nilai jari-jari r.

## Fungsi circumference()
Fungsi ini digunakan untuk menghitung keliling lingkaran dengan menggunakan rumus K = 2 × π × r. Fungsi ini menerima nilai jari-jari (r) sebagai parameter, kemudian mengalikannya dengan konstanta PI dan angka 2 untuk mendapatkan hasil keliling. Nilai keliling yang telah dihitung tersebut kemudian dikembalikan sebagai return value dari fungsi.

## Fungsi area()
Fungsi ini berfungsi untuk menghitung luas lingkaran dengan menggunakan rumus L = π × r². Prosesnya dimulai dengan mengkuadratkan nilai jari-jari (r), kemudian hasilnya dikalikan dengan konstanta PI. Nilai akhir dari perhitungan tersebut merupakan luas lingkaran yang kemudian dikembalikan sebagai return value dari fungsi ini.

## Fungsi main()
Fungsi ini merupakan fungsi utama program yang berperan dalam mengatur urutan eksekusi seluruh fungsi yang ada. Di dalamnya, dideklarasikan beberapa variabel untuk menyimpan koordinat titik pusat (centerX, centerY), titik pada keliling (pointX, pointY), serta nilai jari-jari r. Fungsi getCoordinates() kemudian dipanggil untuk menerima input dari pengguna. Setelah itu, jari-jari lingkaran dihitung dengan memanggil fungsi radius(centerX, centerY, pointX, pointY). Terakhir, fungsi displayResults(r) digunakan untuk menampilkan hasil perhitungan secara lengkap ke layar.
