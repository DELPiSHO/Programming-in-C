#include <stdio.h>
#include <math.h>
int symbol(int n, int k)
{
	if(k == 0) return 1;
	else if(k == n) return 1;
			else return symbol(n-1,k)+symbol(n-1,k-1);
}
double Cumulative(int n, int k, double p)
{
	int i=k;
	if(i < 0) return 0;
	else return symbol(n,i)*pow(p,i)*pow(1-p,n-i)+Cumulative(n,k-1,p);
}
double Hoeffding(int n, int k, double p)
{
	return exp((-2)*pow(n*p-k,2)/n);
}
int main()
{
	int n, k;
	double p;
	printf("Podaj n:");
	scanf("%i", &n);
	printf("Podaj k:");
	scanf("%i", &k);
	printf("Podaj p:");
	scanf("%lf", &p);
	if (p<=1 && p>=0)
	{
		if(Cumulative(n,k,p) <= Hoeffding(n,k,p))
		{
			printf("Prawiedlowe, ze Hoeffding >= Cumulative\n");
		}
	}
	else printf(" P musi byc w przedziale [0,1]\n");
}
