#include <stdio.h>
int f(int n)
{
	if ( n==1 ) return 1;
	if ( n==2 ) return 2;
	if ( n==3 ) return 3;
	if ( n>=4 ) return 3*(n-1)-5*(n-2)+7*(n-3);
	
	
}
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%i \n", f(i));
	}
	return 0;
}
