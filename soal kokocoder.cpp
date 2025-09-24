#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> rob[100000000];

bool ggbbxx(int dna, int ditc){
    int cl, lid, ga;
    cl = lid = ga = 0;
    
    while(cl < rob[dna].size() && lid < rob[ditc].size()){
        if (rob[dna][cl] < rob[ditc][lid]){
            cl++;
        }
        else if (rob[dna][cl] > rob[ditc][lid]){
            lid++;
        }
        else{
            ga++;
        }
    }
    
    return (ga <= 1);
}

int main(){
    int nmlbu = 100000000;
    for (int i = 1; i <= nmlbu; i++){
        for (int j = i; j <= nmlbu; j+=i){
            rob[i].push_back(j); 
        }
    }
    
    int utm = 0;
    for (int i = 1; i <= nmlbu; i++){
    	int ans;
        ans += ggbbxx(i,nmlbu);
    }
    
    cout << utm << endl;
}