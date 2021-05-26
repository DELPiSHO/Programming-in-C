#include <stdio.h>
int main(){
int n, l, k=1, d=0, j=1;
scanf("%i",&n);
while(j<n+1){
 l=j;
 while(k<j){
  l=l*j;k=k+1;
  }
 k=1;
 d=d+l;
 j=j+1;}
printf("suma = %i\n",d);}

