#include <stdio.h>
main() {
int a,b,i,p;
printf("wpiszcie liczbę naturalną k większą od 0 oraz liczbę naturalną większą od 1:");
scanf("%d%d",&a,&b);
if (a<0) {
	printf("wpiszcie wykladnik ponownie");
	scanf("%d",&a);}
if (b<1) {
	printf("wpiszcie liczbe ponownie");
	scanf("%d",&b);}
p=b;
i=1;
while (i<a) {p = b*p; i = i+1;}
printf("%d \n", p);}
