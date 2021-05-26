#include <stdio.h>
#include <math.h>

int fib(int x)
{
	if(x == 0) return 0;
	else 
	{
		if(x == 1) return 1;
			else
			{
				if(x == 2) return 1;
					else
					{
						return fib(x-1)+fib(x-2);
					}
			}
	}
}

int main()
{
	int i, k;
	scanf("%i",&k);
	i = ((1/sqrt(5))*pow((1+sqrt(5))/2, k)) - ((1/sqrt(5))*pow((1-sqrt(5))/2, k));
	printf("i=%i, fib=%i\n", i, fib(k));
	if (i == fib(k)) printf("mozna\n");
}
	
