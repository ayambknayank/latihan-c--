#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	//string
	//deklarasi
	string s = "dengklek";
	string s;
	cin >> s;
	
	//mencari panjnag string O(1)
	int panjang_string = s.length();
	//atau
	int panjang_string = s.size();
	
	//mencari substring di dalam string O(N)
	string t;
	cin >> string t;
	cout << s.find(t);
	
	// mengambil susbtring O(N)
	string s_baru = s.substr(4, 4);
	cout << s_baru << ' ' << s.substr(4, 4); 
	
	// menghapus substring O(N)
	string t = "halo zaldas";
	t.erase(0,5);
	cout << t;  //cout = zaldas
	
	//menyisipkan string O(N)
	string t, r;  t = "makan minum"
	cin >> t;
	r = " dan ";
	t.insert(4, r);//cout = "makan dan minum"
	
	//menempelkan string O(N)
	string t, r;  //t = "halo" r = " zaldas"
	cin >> t >> r;
	string gabung = t+r;  //gabung = "halo zaldas"
	cout << gabung << t+r;
	
	//mencari kode ASCII dari suatu karakter O(1);
	char c='A';
	cout << (int)c;
	
	//menambah dan mengurangkan kode dari suatu karakter O(1)
	string t = "abc";
	t[0]++;
	t[1]+=3;
	t[2]-=2;
	cout << t;
	
	
	
	//
	//vector
	//
	
	// deklarasi
	vector<int> a;
	
	//menambahkan elemen O(1)
	a.push_back(1);
	v[0]=10;
	v.push_back{5};
	cout << a[0] << ' ' << a[1];
	
	//menghapus elemen
	v.pop_back();
	cout << a[1];
	
	//mencari size/ukuran vector O(1)
	int size = a.size();
	cout << v.size();
	
	//cek vector kosong atau tidakO(1)
	cout << a.empty(); //true = kosongg, false = ada isi
	
	//set ukuran dan nilai saat deklarasi O(N) lebih cepat dari pada satu satu
	vector <int> a(5, 10);
	cout << a[0];
	p.push_back(15);
	
	vector <int> b;
	b.assign(5,10);
	
	//penambahan ukuran vector O(N)
	bresize(10, 20);
	for(int i=-; i<10; i++){
		cout << b[i] << ' ';
	}
	
	//set ukuran dan nilai sewenang wenang O(N)
	b.assign(10, 25);
	for(int i=0; i<10; i++){
		cout << b[i] << ' ';
	}
	
	
	//mengosongkan vector O(N) lebih cepat
	b.clear();
	cout << b.size();
	
	//akses elemen pertama dan terakhir O(1)
	vector <int> x(5, 10);
	cout << x[0] << ' ' << x.front();
	x.back()=115;
	cout << x[x.size()-1] << ' ' << x.back();
	
}