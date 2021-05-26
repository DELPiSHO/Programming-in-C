#include <stdio.h>
#include <math.h>

#define PI 3.14159265
double sin(double x);
int main ()
{
	double x, y, ret, val, r;

	scanf("%lf",x);
	scanf("%lf",y);
	val = PI / 180;
	ret = sin(x*val);
	printf("The sine of %lf is %lf degrees\n", x, ret);
	
	r=(y+x)/2;
	printf("%lf\n", r);
	
	
	return(0);
}
