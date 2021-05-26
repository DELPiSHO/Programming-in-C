#include <stdio.h>
#include <string.h>
int main()
{
	char imie[30],nazwisko[30];
	int zarobek;
	FILE * fp;
	fp = fopen("dane.txt","a");
	fprintf(fp, "Jan Kowalski 3000\n");
	fprintf(fp, "Piotr Petla 4500\n");
}
