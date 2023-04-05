#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string Nama;
	DetailAlamat Alamat;
	int umur;

};

int main()
{
	Mahasiswa mhs;

	cout << "Masukkan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukkan Nama = ";
	cin >> mhs.Nama;
	cout << "Alamat = " << endl;
	cout << "\tMasukkan Desa = ";
	cin >> mhs.Alamat.desa;
	cout << "\tMasukkan Kota = ";
	cin >> mhs.Alamat.kota;
	cout << "Masukkan Umur = ";
	cin >> mhs.umur;

	cout << "\nNim = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nDesa = " << mhs.Alamat.desa;
	cout << "\nKota = " << mhs.Alamat.kota;
	cout << "\nUmur = " << mhs.umur;
}