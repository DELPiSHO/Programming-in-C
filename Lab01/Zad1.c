#include <stdio.h>
void main(){
float a;
float b;
float c;
float d;
printf("podaj trzy liczby");
scanf("%f%f%f",&a,&b,&c);
d = b*b - 4*a*c;
if (d>=0) {
printf ("pierwiastki istnieją");
}else{
printf ("pierwiastki nie istnieją");
}
}


