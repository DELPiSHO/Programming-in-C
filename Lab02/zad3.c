#include <stdio.h>
main()
{
int i,n,k;
n=10;
for (k=0;k<n;k++){ 
	for (i=0;i<n;i++){ printf("%2d ",i*k); 
		if(i == n-1) {printf ("\n");} } }
}
