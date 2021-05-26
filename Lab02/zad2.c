#include <stdio.h>
main()
{
int k, n, r, c;
scanf("%d%d",&k, &n);
c = 1;
r = 0;
while (c<=k) { r = r +1; if (r%n == 0){ printf("%d ", r); c = c + 1;} }
}
