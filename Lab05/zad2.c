#include <stdio.h>
int main()
{
	int tab1[30], tab2[30], tab3[31], i, l, d1, d2, max, min, j, k, p;
	for(i=0;i<30;i++)
	{
		tab1[i]=0; tab2[i]=0; tab3[i]=0;
	}
	i=0;
	tab3[30]=0;
	printf("liczba 1:\n");
	while(scanf("%1i", &l) == 1)
	{
		tab1[i]=l;
		i++;
	}
	d1=i;
	i=0;
	getchar();
	printf("liczba 2:\n");
	while(scanf("%1i", &l) == 1)
	{
		tab2[i]=l;
		i++;
	}
	d2=i;
	if(d1 > d2)
	{
		max=d1; min=d2;
	}
	else
	{
		max=d2; min=d1;
	}
	i=max;
	p=0;
	k=d1-1;
	j=d2-1;
	while(min>0)
	{
		tab3[i]=(tab1[k]-tab2[j])%10;//+tab3[i];
		if(tab3[i]<0)
		{
			tab3[i]=tab3[i]*-1;
		}
		k--; j--; i--; min--;
	}
//	if(d1>d2)
//	{
//		for(k=d1-d2-1;k>=0;k--)
//		{
//			tab3[i]=tab3[i]+(tab1[k]+p)%10;
//			p=(tab1[k]+p)/10;i--;
//		}
//		
		tab3[0]=p;
		for(i=(1-p);i<=d1;i++)
		{
			printf("%d", tab3[i]);
		}
//	}
	printf("\n");
	return 0;
}
