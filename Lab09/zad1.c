#include <stdio.h>

int sil(int n){
	if(n == 0) return 1;
	else return n*sil(n-1);
}
int main()
{
	int x=0;
	scanf("%i", &x);
	printf("%i\n", sil(x));
	return 0;
}
