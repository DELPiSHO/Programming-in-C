#include <stdio.h>
#include <math.h>

int main()
{
	int n,k=0,p,c=1,f=1,g,l;
	scanf("%i", &n);
	while(n>k*(k+1)/2)
		{
		k++;
		}
		g=k;
	for(f=f;f<=k;f++)
		{
		for(p=1;p<=g;p++)
			{
			printf(" ");
			}
		g--;
		l=1;
		while(c<=n)
			{
			printf("%3i", c);
			c++;
			if(l==f)break;
			l++;
			}
		printf("\n");
		}
	
	
	return 0;
}
