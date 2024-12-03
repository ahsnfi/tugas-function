#include <iostream>
#include <cmath>
using namespace std;

//rumus Persegi
void hitungPersegi(double sisi) {
	double luas = sisi * sisi;
	double keliling = 4 * sisi;
	cout << "   Luas persegi: " << luas << "\n"  << "   Keliling persegi:" << keliling << "\n";
}

//rumus Persegi panjang
void persegiPanjang(double panjang,double lebar) {
	double luas = panjang * lebar;
	double keliling = 2 * (panjang + lebar);
	cout << "   Luas persegi panjang: " << luas << "\n" << "   Keliling: " << keliling << "\n";
}

//rumus Segitiga siku-siku
void segitigaSikuSiku(double alas, double tinggi) {
	double luas = 0.5 * alas * tinggi;
	double keliling = alas + tinggi + sqrt(alas * alas + tinggi * tinggi);
	cout << "   Luas Segitiga Siku-Siku: " << luas << "\n" << "   Keliling: " << keliling << "\n";
}
//rumus lingkaran
void lingkaran(double JariJari) {
	const double Phi = 3.14;
	double luas = Phi * JariJari * JariJari;
	double keliling = 2 * Phi * JariJari;
	cout << "   Luas Lingkaran: " << luas << "\n" << "   Keliling: " << keliling << "\n";
}

void main() {
	double sisi, panjang, lebar, alas, tinggi, JariJari;

	//Input dan Output Persegi
	cout << "1. Masukkan sisi persegi: ";
	cin >> sisi;
	hitungPersegi(sisi);

	//Input dan Output Persegi panjang
	cout << "\n" << "2. Masukkan panjang persegi panjang: ";
	cin >> panjang;
	cout << "   Masukkan lebar persegi panjang: ";
	cin >> lebar;
	persegiPanjang(panjang,lebar);

	//Input dan Output Segitiga siku-siku
	cout << "\n" << "3. Masukkan alas segitiga siku-siku: ";
	cin >> alas;
	cout << "   Masukkan tinggi sigitiga siku-siku: ";
	cin >> tinggi;
	segitigaSikuSiku(alas,tinggi);

	//Input dan Output Lingkaran
	cout << "\n" << "4. Masukkan jari-jari lingkaran: ";
	cin >> JariJari;
	lingkaran(JariJari);

}