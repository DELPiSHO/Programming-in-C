#include <stdio.h>
#include <math.h>
int bit_liczby (int numer, int liczba)
{
	if( (liczba & (int)pow(2, numer)) > 0) return 1;
	else return 0;
}
int main()
{
	int a, b;
	printf("Podaj liczbe\n");
	scanf("%i", &a);
	printf("Podaj numer bitu\n");
	scanf("%i", &b);
	printf("rezultat - %i\n", bit_liczby(b,a));
	return 0;
}
