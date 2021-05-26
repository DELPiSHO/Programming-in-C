#include <stdio.h>
#include <math.h>
int fun(int x)
{
	return x*x;
}
double fun2(int k, double x){
	double y;
	int i;
	y=fun(x);
	for(i=1;i<k;i++)y=fun(y);
	return y;	
}
int main ()
{
int k;
double x;
scanf("%i %lf", &k, &x);
printf("%i\n", (int)fun2(k,x));
}
