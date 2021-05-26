#include <stdio.h>
int main(){
char tab[11]={'a','l','a',' ','m','a',' ','k','o','t','a'};
char x;
int i, j=0;
scanf("%c",&x);
for(i=0;i<11;i++){ 
	if (tab[i]==x) {j=j+1;}
	}
	printf(" znak '%c' znaleziony %i raz(y)\n", x, j);
}
