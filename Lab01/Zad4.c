#include <stdio.h>
void main(){
int n;
int r;
scanf ("%d",&n);
r = n%8;
n = n-r;
printf("%d,%d",n,r);
}
