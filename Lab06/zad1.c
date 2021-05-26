#include <stdio.h>
int main()
{
int i, j, tab[4][4];
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		scanf("%i", &tab[i][j]);
	}
}
printf("Oto kolejne wiersze tablicy:\n");
for(i=0;i<4;i++)
{
	printf("wiersz%i:", i+1);
	for(j=0;j<4;j++)
	{
		printf(" %2i", tab[i][j]);
	}
	printf("\n");
}
printf("Oto kolumny tablicy:\n");
for(j=0;j<4;j++)
{
	printf("kolumna%i:", j+1);
	for(i=0;i<4;i++)
	{
		printf(" %2i", tab[i][j]);
	}
	printf("\n");
}
}
