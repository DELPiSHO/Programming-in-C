#include<stdio.h>

int main () {
int z;
scanf("%i", &z);
double x; 
int k, n, m, tab[z];

if(z%2==0)break;
if(z<0);

printf("\nSORTOWANIE BABELKOWE Z PRZYSPIESZENIEM");
printf("\nPodaj %i liczb rzeczywistych: ", z);
for (k=0; k<z; k=k+1)
scanf("%i", &tab[k]);

n=z;
while (n>1) {
m=1;
for (k=1; k<n; k=k+1)
if (tab[k-1] > tab[k]) {
x=tab[k-1]; tab[k-1]=tab[k]; tab[k]=x;
m=k;
}
n=m;
}

printf("\nWynik sortowania:\n");
for (k=0; k<z; k=k+1)
printf(" %lf\n", tab[k]);
printf("\n");
z=(z-1)/2;
printf("Mediana to %i",tab[z]);
return 0;
}
