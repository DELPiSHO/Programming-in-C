#include <stdio.h>
int main(){
char tab[11]={'a','l','a',' ','m','a',' ','k','o','t','a'};
char x;
int i, b=12;
{printf("zgadnij litere\n");
		scanf("%c",&x);
	for(i=0;i<11;i++){ printf("Jest:\n");
		if (x==tab[i]){ 
			printf("%c", x); 
			}
			else{printf("_");}
		}
	printf("\n");
	}
}
