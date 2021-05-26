#include <stdio.h>
void main(){
int n;
int s;
s = 0;
scanf("%d",&n);
printf ("Ostatnia cyfra %d",n%10);
s = (n - n%10)/10;
printf ("Liczba bez ostatniej cyfry: %d", s);
}
