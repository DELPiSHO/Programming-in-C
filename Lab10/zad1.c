#include <stdio.h>
int symbol(int n, int k){
	if(k == 0) return 1;
	else if(k == n) return 1;
			else return symbol(n-1,k)+symbol(n-1,k-1);
}
int main()
{
	int n, k;
	scanf("%i", &n);
	k=n;
	while(k>=0){
		printf("%i ", symbol(n,k));
		k--;
	}
	printf("\n");
}
	
