#include <stdio.h>
void main(){
int n;
int i;
int suma;
int s;
i = 0;
suma = 0;
printf ("Podaj liczbe");
scanf("%d",&n);
while (i<=n) {
suma = suma + i;
i = i + 1;
}
s = suma/2;
printf ("Suma = %d, Srednia = %d",suma,s);
}
