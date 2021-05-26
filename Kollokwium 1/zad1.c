#include <stdio.h>
int arg(int n)
{
	if(n == 1) return 2;
	if(n == 2) return 3;
	if(n >= 3) return 7*arg(n-1)+3*arg(n-2);
}
int main()
{
	int c, i;
	scanf("%i", &c);
	for(i=1;i<=c;i++)
	{
	printf("%i ", arg(i));
	}
	printf("\n");
	return 0;
}
