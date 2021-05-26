#include <stdio.h>
void sort(int tab[], int n)
{
	int i, j, k;
	for(i=2;i<n;i++)
	{
		k=tab[i];
		j=i-1;
		while(j>=0 && tab[j]>k)
		{
			tab[j+1]=tab[j];
			j--;
		}
		tab[j+1]=k;
	}
}
int main ()
{
	int x,y;
	scanf("%i", &x);
	int T[x];
	for(y=0;y<x;y++)
	{
		scanf("%i", &T[y]);
	}
	printf("\n");
	sort(T,x);
	for(y=0;y<x;y++)
	{
		printf("%i\n", T[y]);
	}
}
