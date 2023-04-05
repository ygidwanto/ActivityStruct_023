#include <iostream>
using namespace std;

struct Mahasiswa
{
	string NIM;
	string Nama;
	string Alamat;
	int umur;

};

int main()
{
	Mahasiswa mhs;

	cout << "Masukkan Nim = ";
	cin >> mhs.NIM;
	cout << "Masukkan Nama = ";
	cin >> mhs.Nama;
	cout << "Masukkan Alamat = ";
	cin >> mhs.Alamat;
	cout << "Masukkan Umur = ";
	cin >> mhs.umur;

	cout << "\nNim = "  << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nAlamat = " << mhs.Alamat;
	cout << "\nUmur = " << mhs.umur;
}