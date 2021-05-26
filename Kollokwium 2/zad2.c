#include <stdio.h>
#include <math.h>
double rownoleglobok(double d1, double d2, double gamma)
{
	double gammar;
	gammar=((gamma*M_PI)/180);
	return 1/2*d1*d2*gammar;
}
int main()
{
	double d1,d2,gamma;
	scanf("%lf %lf %lf", &d1, &d2, &gamma);
	printf("%lf \n", rownoleglobok(d1,d2,gamma));
	return 0;
}
