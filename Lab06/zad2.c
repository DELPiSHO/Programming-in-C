#include <stdio.h>
int main()
{
int jeden,dwa,trzy,tab[3][3],zle,i,j, tab1[3],tab2[3],tab3[3];
zle=0;
for(i=0;i<3;i++)
{
	tab1[i]=0; tab2[i]=0; tab3[i]=0;
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&tab[i][j]);
}
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		
		if(tab[i][j] == 1)tab1[i]++;
		if(tab[i][j] == 2)tab2[i]++;
		if(tab[i][j] == 3)tab3[i]++;
	}
	if(jeden!=1 || dwa!=1 || trzy!=1){zle++;break;}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	}
	printf("\n");
}


//kod
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		
		if(tab[j][i] == 1)tab1[j]++;
		if(tab[j][i] == 2)tab2[j]++;
		if(tab[j][i] == 3)tab3[j]++;
	}
	if(jeden!=1 || dwa!=1 || trzy!=1){zle++;break;}
}

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%i ",tab[i][j]);
	}
	printf("\n");
}
if(!zle) printf("dobrze");
else printf("Zle");
system("pause");
}
