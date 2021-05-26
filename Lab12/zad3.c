#include<stdio.h>
#include<string.h>
int main(){
FILE *fp, *ofp;
char imie[30],nazwisko[30];
char drugieImie[30],drugieNazwisko[30];
int nowyZarobek,zarobek;
printf("podaj Imie: ");
scanf("%s",drugieImie);
printf("podaj Nazwisko: ");
scanf("%s",drugieNazwisko);
printf("podaj zarobek: ");
scanf("%d",&nowyZarobek);
fp = fopen("dane.txt","r");
ofp = fopen("nowe-dane.txt","w");
while ( fscanf(fp,"%s %s %d\n",imie , nazwisko , &zarobek) == 3){
if(strcmp(nazwisko,drugieNazwisko)>0){
fprintf(ofp,"%s %s %d\n",drugieImie,drugieNazwisko,nowyZarobek);
else 
fprintf(fp,"%s %s %d\n",imie,nazwisko,zarobek);
		}
}
fclose(fp);
fclose(ofp);
}

