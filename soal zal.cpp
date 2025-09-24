#include<cstdio>

int main(){
	int n, temp;
	scanf("%d", &n);
	while(n>=10){
		temp=1;
	while(n>0){
		temp = temp*(n%10);
		n = n/10; 
	}
	n = temp;
	}	
		
	printf("%d", &n);
}