#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	// STACK
	// menerapkan prinsip LIFO (Last In First Out)
	stack<int> tumpukan;
	tumukan.push(); //masukkan elemn ke dalam 
	tumpukan.pop(); //hapus elemen pertama
	tumpukan.top(); // mengemalikan nilai pertama
	tumpukan.size();// banyak elemen pada stack
	tumpukan.empty();// bernilai true jika stack kosonng
	// 
	
	// QUEUE
	// bersifat FIFO (first in first out)
	queue<int> antri;
	antri.push(); 	//masukkan elemn ke dalam 
	antri.pop();	//hapus elemen ke-0
	antri.front();	// mengembalikan nilai pertama
	antri.back();	// mengembalikan nilai terakhir
	antri.size();	// banyak elemen pada queue
	antri.empty();	// true jika queue kosong
	
	// DEQUE
	// bebas
	deque<int> tumpuk;
	tumpuk.push_back(); 	//masukkan elemn ke dalam 
	tumpuk.push_front();
	tumpuk.pop_back();	//hapus elemen pertama
	tumpuk.pop_back();	//hapus elemen terakhir
	tumpuk.front();	// mengembalikan nilai pertama
	tumpuk.back();	// mengembalikan nilai terakhir
	tumpuk.size();	// banyak elemen pada queue
	tumpuk.empty();	// true jika queue kosong
	
	//BFS (breadth first search)
	//nama lainnya adalah metode banjir
	/*
	deklarasi vaiabel untuk menyimpan node
	deklarasi boolean cek untuk mengecek apakah node sudah pernah dikunjungi atau belu
	deklarasi stack <int> tumpuk;
	
	1. pilih node untuk memeulai pengecekan
	2. tandai node dengan nilai true, tanda sudah dicek;
	3. cek apakah node tersebut memeiliki hubungan ke node lain
			jika ada, stack.push_back(yg memiiki hubungan dengan node utama);
			
	*/
	
	//DFS (deepth first search)
	//sering disebut cek mendalam
	//cara kerja:
	/*
	deklarasi variabel untuk menyimpan node
	deklarasi boolean cek untuk mengecek yg di isi seluruhnya dengan fale
	1. pilih node awal untuk mulai pengecekan
	2. tandai node kalau sudah di cek
	3. cek apakah node tersebut memiliki hubungan ke node lain
			jika ada, ulangin proses 1(satu)
			jika tidak ada maka mulai lah proses yang diinginkan
	4. return 
	*/
}