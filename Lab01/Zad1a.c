#include <stdio.h>
void main(){
int a;

printf("podaj liczbe z od 1 do 3 cyfr");
scanf("%d",&a);

if ((a>0) && (a<10)) {
printf ("%d ma 1 cyfre", a);
}else{
	if ((a>=10) && (a <100)){printf ("%d ma 2 cyfry", a); 
}else{ 
	if (a>100) {printf ("%d ma 3 cyfry", a);}
	else {
		if (a>-10) {printf ("%d ma 1 cyfre", a);
}else{
	if ((a<=-10) && (a>-100)){printf ("%d ma 2 cyfry", a); 
}else{ printf ("%d ma 3 cyfry", a);}
}}
}
}}
