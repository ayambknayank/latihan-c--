#include <iostream>
#include <string>
using namespace std;

int main (){
	string kata1 = "saya makan ayam batam";
	string kata2 = "ayam batam bertelur dua";
	cout << "kata 1 : " << kata1 << endl;
	cout << "kata 2 : " << kata2 << endl;
	
	//mengambil kata dari string (substr)

	cout << "setelah diambil : "<< kata1.substr(4,5) << endl;
	
	//menemukan karakter dalam string
	
	cout << kata1.substr(4,5) << " berada pada posisi ke- " << kata1.find("makan") << endl;
	
	//menemukan karakter yang sama di dalam string (find)
	
	int posisi = 0;
	for (int i=0; i<kata1.length(); i++){
		posisi = kata1.find("a",posisi + 1); 
		if(posisi <= -1){
			break;
		}
		cout << posisi << " ";
	}	
	
	//menukar string (swap)
	kata1.swap(kata2);
	
	cout << "\nswap string" << endl;
	cout << "kata 1 : " << kata1 << endl;
	cout << "kata 2 : " << kata2 << endl;
	
	//mengganti string (replace)
	kata1.replace(5,5,"padang");
	kata2.replace(11,4,"bebek");
	
	cout << "replace string" << endl;
	cout << kata1 << endl;
	cout << kata2 << endl;
	
	
	//menambah string (insert)
	kata1.insert(12, "kemaren ");
	kata2.insert(17, "bakar ");
	
	cout << "insert string" << endl;
	cout << kata1 << endl;
	cout << kata2 << endl;
	
	return 0;
}