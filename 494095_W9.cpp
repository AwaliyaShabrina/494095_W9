// ------------------------------------------------------------
// Tugas: User-Defined Function
// Chapter 6 - Problem Exercise No. 8
// Nama    : Awaliya Shabrina
// NIM     : 22/494095/TK/54174
// ------------------------------------------------------------
// Program ini menghitung jari-jari, diameter, keliling, dan luas
// sebuah lingkaran berdasarkan input koordinat pusat (center)
// dan satu titik pada lingkaran.
// ------------------------------------------------------------

#include <iostream>
#include <cmath>      // untuk sqrt() dan pow()
#include <iomanip>    // untuk format output
using namespace std;

// Konstanta global
const double PI = 3.1416;

// ------------------- Deklarasi Fungsi -----------------------
void getCoordinates(double& cx, double& cy, double& px, double& py);
double distance(double x1, double y1, double x2, double y2);
double radius(double cx, double cy, double px, double py);
double circumference(double r);
double area(double r);
void displayResults(double r);
// ------------------------------------------------------------


// =================== Fungsi Input ============================
// Fungsi: getCoordinates
// Deskripsi: Meminta input koordinat pusat dan satu titik pada lingkaran
void getCoordinates(double& cx, double& cy, double& px, double& py) {
    cout << "=== Kalkulator Sifat-Sifat Lingkaran ===" << endl;
    cout << "Masukkan koordinat pusat lingkaran (x y): ";
    cin >> cx >> cy;

    cout << "Masukkan koordinat titik pada lingkaran (x y): ";
    cin >> px >> py;
}
// =============================================================


// =================== Fungsi Output ===========================
// Fungsi: displayResults
// Deskripsi: Menampilkan hasil perhitungan radius, diameter,
//            keliling, dan luas lingkaran.
void displayResults(double r) {
    cout << fixed << setprecision(4);
    cout << "\n=== Hasil Perhitungan ===" << endl;
    cout << "Jari-jari (Radius)      : " << r << endl;
    cout << "Diameter                : " << 2 * r << endl;
    cout << "Keliling (Circumference): " << circumference(r) << endl;
    cout << "Luas (Area)             : " << area(r) << endl;
}
// =============================================================


// ================= Fungsi Perhitungan ========================
// a. distance → menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;
    return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}

// b. radius → memanggil distance untuk menentukan jari-jari
double radius(double cx, double cy, double px, double py) {
    return distance(cx, cy, px, py);
}

// c. circumference → menghitung keliling lingkaran
double circumference(double r) {
    return 2 * PI * r;
}

// d. area → menghitung luas lingkaran
double area(double r) {
    return PI * pow(r, 2);
}
// =============================================================


// ===================== Fungsi main() =========================
int main() {
    double centerX, centerY;  // koordinat pusat
    double pointX, pointY;    // titik pada lingkaran
    double r;                 // radius

    // Ambil input dari pengguna
    getCoordinates(centerX, centerY, pointX, pointY);

    // Hitung jari-jari menggunakan fungsi radius
    r = radius(centerX, centerY, pointX, pointY);

    // Tampilkan hasil perhitungan
    displayResults(r);

    cout << "\nProgram selesai. Terima kasih telah menggunakan kalkulator lingkaran :) !" << endl;
    return 0;
}
// =============================================================
