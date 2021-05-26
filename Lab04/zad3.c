#include <stdio.h>
int main()
{
	char tab1[7],tab2[7],c;
	int j,g=0;
	printf("podaj slowo\n");
	for(j=0;j<7;j++)
	{
		scanf("%c", &tab1[j]);
		c=getchar();
	}
	for(j=6;j>=0;j--)
	{
		tab2[g]=tab1[j];
		g++;
	}
	for(j=0;j<7;j++)
	{
		if(tab1[j]!=tab2[j])
		{
			printf("nie jest palindromem\n");
			break;
			g=0;
		}
	}
	if(g!=0)
	{
		printf("jest palindromem\n");
	}
return 0;
}
