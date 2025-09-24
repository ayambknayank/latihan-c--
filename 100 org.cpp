#include <stdio.h>
using namespace std;
 
int main()
{
	int res = 0;
	for(int i = 1; i <= 100; i++)
		for(int j = i+2; j <= 100; j++)
			for(int k = j+2; k <= 100; k++)
				for(int l = k+2; l <= 100 && (l+1)%100 != i; l++)
					res++;
 
	printf("%d\n", res);
}