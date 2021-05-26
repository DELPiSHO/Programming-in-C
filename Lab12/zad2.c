#include<stdio.h>
#include<string.h>
int main(){
FILE *fp, *ofp;
char imie[30],nazwisko[30];
int wysokie_zarobki,zarobek;
printf("podaj pensje: ");
scanf("%d",&wysokie_zarobki);
fp = fopen("dane.txt","r");
ofp = fopen("wysokie-zarobki.txt","w");
while ( fscanf(fp,"%s %s %d\n",imie , nazwisko , &zarobek) == 3){
if ( zarobek >= wysokie_zarobki){
fprintf(ofp,"%s %s %d\n",imie,nazwisko,zarobek);
        }
}
fclose(fp);
fclose(ofp);
}

