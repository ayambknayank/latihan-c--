#include<iostream>
#include<iostream>
using namespace std;

struct aktor{
	string nama;
	int tahun_lahir;
};

struct film{
	string judul;
	string genre;
	int tahun;
	//struct aktor
	aktor pemeran_1;
	aktor pemeran_2;
};

int main(){
	
	aktor aktor1, aktor2;
	film film1, film2;
	
	//buat aktor 1
	aktor1.nama = "rafid zaldas";
	aktor1.tahun_lahir = 2006;
	
	//buat aktor 2
	aktor2.nama = "rafiz rahmadani";
	aktor2.tahun_lahir = 2007;
	
	//buat film
	
	film1.judul = "penjaga jodoh orang";
	film1.genre = "komedi";
	film1.tahun = 2019;
	film1.pemeran_1 = aktor1;
	film1.pemeran_2 = aktor2;
	
	film2.judul = "cinta segitiga pangkat 3";
	film2.genre = "horror";
	film2.tahun = 2019;
	film2.pemeran_1 = aktor1;
	film2.pemeran_2 = aktor2;
	
	
	cout << film1.judul << endl;
	cout << film1.pemeran_1.nama << endl;
	cout << film1.pemeran_2.nama << endl;
	
	cout << film2.judul << endl;
	cout << film2.pemeran_1.nama << endl;
	cout << film2.pemeran_2.nama << endl;
	
	cin.get();
	return 0;
}