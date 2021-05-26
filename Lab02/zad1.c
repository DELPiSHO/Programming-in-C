#include <stdio.h>
main()
{
int k, n, r;
n = 1;
r = 2;
scanf("%d",&k);
while (n<=k) {r = r*n; printf("%d ", r); n = n + 1; r = 2;}
}
