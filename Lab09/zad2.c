#include <stdio.h>

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
	int c, i;
	scanf("%i", &c);
	for(i=1;i<=c;i++)
	{
	printf("%i ", fib(i));
	}
	printf("\n");
}
