#include <stdio.h>
int main()
{
	int liczba, n;
	n=2;
	scanf("%i",&liczba);
	while(n < liczba)
	{
		if(liczba%n == 0) printf(" %i", n);
		n++;
	}
	printf("\n");
	return 0;
}
		
