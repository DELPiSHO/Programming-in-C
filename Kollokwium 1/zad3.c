#include <stdio.h>
int main()
{
	char a, tab[9];//={'a','l','a','m','a','k','o','t','a'}
	int n, i;
	a='a';
	i=0;
	for(n=0;n<9;n++)
	{
		scanf("%c", &tab[n]);
		getchar();
	}
	printf("Oto pozycje litery a: ");
	for(n=0;n<9;n++)
	{
		if(tab[n] == a)
		{
			printf("%i,", n);
			i++;
		}
	}
	if(i == 0) printf("brak liter a");
	printf("\n");
	return 0;
}

	
	
