#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1416;

// a. Fungsi menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}
// b. Fungsi menghitung radius Lingkaran
double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}
// c. Fungsi menghitung keliling Lingkaran
double circumreference(double r) {
    return 2 * PI * r;
}
// d. Fungsi menghitung luas Lingkaran
double area(double r) {
    return PI * pow(r,2);
}


int main () {
    double x1, y1, x2, y2;
    
    cout << "=== Program Menghitung Lingkaran ===" << endl;
    
    //input koordinat pusat
    cout << "Masukkan koordinat pusat (x1 y1): ";
    cin >> x1 >> y1;
    
    //input koordinat titik di lingkaran 
    cout << "Masukkan koordinat titik di lingkaran (x2 y2): ";
    cin >> x2 >> y2;
    
    //hitung radius, diameter, keliling, dan luas
    double r = radius(x1, y1, x2, y2);
    double d = 2 * r;
    double c = circumreference(r);
    double a = area(r);
    
    //tampilkan hasil
    cout << fixed;
    cout.precision(4); // menampilkan 4 angka di belakang koma
    cout << "/n=== Hasil Perhitungan ===" << endl;
    cout << "Radius (r): " << r << endl;
    cout << "Diameter (d): " << d << endl;
    cout << "Keliling (circumreference): " << c << endl;
    cout << "Luas (area): " << a << endl;
    
    return 0;
}