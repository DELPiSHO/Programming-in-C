#include <stdio.h>
char fn(int a, int b){
	a=a*b;
	if (a > 100) return 'a';
	else if (a < 100)return 'b';
		 else return 'c';
	 }
int main()
{
int x,y;
scanf("%i%i",&x,&y);
printf("%c\n",fn(x,y));
return 0;
}
