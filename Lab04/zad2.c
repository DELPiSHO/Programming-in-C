#include <stdio.h>
int main()
{
	int i;
	scanf("%i",&i);
	char tab[i],c;
	int j;
	printf("podaj slowo\n");
	for(j=0;j<i;j++)
	{
		scanf("%c", &tab[j]);
		c=getchar();
	}
	printf("Slowo od konca:  ");
	for(j=i;j>=0;j--)
	{
		printf("%c ", tab[j]);
	}
return 0;
}
