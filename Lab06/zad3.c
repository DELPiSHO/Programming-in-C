#include <stdio.h>
int main()
{
	int n=0, i=0, j=0, s=0, l=0;
	printf("Wpisz rozmiar pierwszej macierzy");
	scanf("%i",&n);
	int tab1[n][n], tab2[n][n], tab3[n][n];
        printf("Wpisz pierwszu macierz: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%i", &tab1[i][j]);
		}
	}
	printf("Wpisz drugu macierz: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%i", &tab2[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			tab3[i][j]=0;
			for(l=0;l<n;l++)
			{
				tab3[i][j]=tab3[i][j]+tab1[i][l]*tab2[l][j];
			}
			printf("%3i",tab3[i][j]);
		}
		printf("\n");
	}
}
