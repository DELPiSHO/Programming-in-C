#include <stdio.h>
#include <string.h>
int main()
{
	char imie[30],nazwisko[30];
	int zarobek;
	FILE * fp;
	fp = fopen("dane.txt","r");
	while( fscanf(fp, "%s %s %d \n", imie, nazwisko, &zarobek)==3)
	{
		printf("%s %s %d \n", imie, nazwisko, zarobek);
	}
	
}
