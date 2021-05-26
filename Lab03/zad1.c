#include <stdio.h>
int main(){
int h, a, t, e;
scanf("%i%i", &h, &a);
e=h;
t=1;
while(e>0){
	e=e-1;
	t=1;
	while(t<=e){
		printf(" ");
		t=t+1;}
		
		t=1;
	while(t<=a){
		printf("*");
		t=t+1;
}
	printf("\n");
}
}
