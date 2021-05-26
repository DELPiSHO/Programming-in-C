#include <stdio.h>
#include <math.h>
int bit(int numer, int liczba)
{
	if(liczba<0 && numer==31) return 1;
	if( (liczba & (int)pow(2, numer)) > 0) return 1;
	else return 0;
}
int main()
{
	int n,l;
	scanf("%i", &l);
	for(n=31;n>=0;n--)
	{
		printf("%i", bit(n,l));
		if(n%8 == 0) printf(" ");
	}
	printf("\n");
	return 0;
}
