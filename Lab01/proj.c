#include<stdio.h>
int main()
{
	int a,b;
	printf("która z liczb jest wieksza \n");
	scanf("%i\n",&a);
	scanf("%i",&b);
	if (a>=b) printf("%i",a);
	else printf("%i",b);
}
