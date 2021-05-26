#include <stdio.h>
#include <math.h>
int liczba_z_bitow (int tab[k])
{
	if(k=0) return 0;
	if(k>0) return tab[k-1]*2+liczba_z_bitow(tab[k-1]);
}

int main()
{
	int n;
	int tab[31];
	for(n=0;n<30;n++)
	{
		printf("bit %i = ", n);
		scanf("%1i", &tab[n]);
	}
	printf("%i", liczba_z_bitow(tab[31]));
	return 0;
}
