#include <iostream>
using namespace std;
 
int main(){
   int hasil, b, a;
   bool ini= true;
   int i=2;
   
   while (i>1){
   
   for (a=0; a<=255; a++){
   	for (b=0; b<=255; b++){
	   hasil = a | b;
	   if (ini){
	   	cout << hasil;
	   }
	   else {
	   	break;
	   }
	   
	   
	   
	   
   /*
   while (cin>>x){
   	while (cin>>y){
   		   
   		cout<<"Hasil dari "<<x<<" | "<<y<<" = "<<hasil<<endl;
   		break;
	   }   	
   }*/
}
}
}
   
   return 0;
}