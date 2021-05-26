#include <stdio.h>
int pw(double a, double b, double c){
	b=b*b-4*a*c;
	if (b > 0) return 2;
	else if (b < 0)return 0;
		 else return 1;
	 }
int main()
{
	double x, y, z;
	scanf("%lf %lf %lf", &x, &y, &z);
	printf("%i\n", pw(x, y, z));
}
