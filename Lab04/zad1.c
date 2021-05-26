#include <stdio.h>
int main()
{
	int s;
	scanf("%i", &s);
	int tab1[s],tab2[s],a=0,j;
	printf("tab1:\n");
	for(j=0;j<s;j++)
	{
		scanf("%i", &tab1[j]);
	}
	printf("tab2:\n");
	for(j=0;j<s;j++)
	{
		scanf("%i", &tab2[j]);
	}
	for(j=0;j<s;j++)
	{
		a=a+tab1[j]*tab2[j];
	}
	printf("wynik: %i\n", a);
return 0;
}
