#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

int main(){
	
	string input, text;
	char y = 'Y';
	
	text = "selamat datang di tebakan receh !!!\n";
	 for (char c : text) {
        cout << c;
        cout.flush(); 
        this_thread::sleep_for(chrono::milliseconds(50));
    }this_thread::sleep_for(chrono::seconds(2));
	
	cout << "semoga kalian terhibur ^_^\n" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	
	cout << "oke mari kita kita mulai\n";
	this_thread::sleep_for(chrono::seconds(2));
	
	cout << "artis artis apa yang jago trigonometri??" << endl;
	string jawab = "prilly latuCOSINUS";
	
	while (true){
		
		cout << "jawab : ";
		getline(cin, input) ;
	
		if (input==jawab){
			cout << "yeee benarrr..." << endl;
			this_thread::sleep_for(chrono::milliseconds(100));
			cout << "lanjut? ketik y, kalau udahan ketik g aja" << endl;
			getline(cin, input);
			if (input == "G"||input == "g" ){
				cout << "terimakasih, sampai jumpa lagii...";
				break;
			}
			
		}else if(input == "Y"||input == "y"){
			cout << "jawabannya " << jawab << endl;
			cout << "lanjut? ketik y, kalau udahan ketik g aja" << endl;
			getline(cin, input);
			if (input == "G"||input == "g" ){
				cout << "terimakasih, sampai jumpa lagii...";
				return 0;;
			}else if (input == "Y"||input == "y"){
				
				break;
			}
			
		}else {
			cout << "salah !!, ketik Y untuk menyerah" << endl;
		}
	}
	
	cout << "artis apa yang banyak pahalanya??" << endl;
	string jawab2 = "iqbal ramadhan";
	
	while (true){
		
		cout << "jawab : ";
		getline(cin, input) ;
	
		if (input==jawab2){
			cout << "yeee benarrr..." << endl;
			this_thread::sleep_for(chrono::milliseconds(100));
			cout << "lanjut? ketik y, kalau udahan ketik g aja" << endl;
			getline(cin, input);
			if (input == "G"||input == "g" ){
				cout << "terimakasih, sampai jumpa lagii...";
				break;
			}
			
		}else if(input == "Y"||input == "y"){
			cout << "jawabannya " << jawab2 << endl;
			cout << "lanjut? ketik y, kalau udahan ketik g aja" << endl;
			getline(cin, input);
			if (input == "G"||input == "g" ){
				cout << "terimakasih, sampai jumpa lagii...";
				return 0;
			}else if (input == "Y"||input == "y"){
				break;
			}
		}else {
			cout << "salah !!, ketik Y untuk menyerah" << endl;
		}
	}
	
	
	
	
	return 0;
}