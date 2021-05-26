#include <stdio.h>
int main ()
{
	int n, k, c;
	printf("Podaj dwie liczby naturalne: ");
	scanf("%i", &n); scanf("%i", &k);
	if (n<0  ||  k<0  ||  n+k == 0) 
	{
		printf ("\n  Argumenty maja byc nieujemne");
		printf ("\n  i nie jednoczesnie zerowe\n\n");
		exit(1);
	}
	else {
		if (n<k) {  c=n; n=k; k=c; }
		else {
			
		
	}
}
