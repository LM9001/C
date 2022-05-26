#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char odabir[8];
    int nestojeodabrano=1;
    float sum=0;
    int i;
    while(nestojeodabrano){
    system("cls");
    printf("|--------------------|\n");
    printf("|\t     |       |\n");
    printf("|1. kava     | 120kn |\n");
    printf("|\t     |       |\n");
    printf("|2. sladoled | 1,5kn |\n");
    printf("|\t     |       |\n");
    printf("|3. govno    | 25kn  |\n");
    printf("|\t     |       |\n");
    printf("|4. krofna   | 1500kn|\n");
    printf("|\t     |       |\n");
    printf("|--------------------|\n");
    printf("Za prestanak unosa unesite bilo sto drugo\n");
    scanf("%s", odabir);
    for (i=0; odabir[i]!='\0';i++)
        odabir[i]=tolower(odabir[i]);
    if(!strcmp(odabir, "kava")|!strcmp(odabir, "1") ) sum+=120;
    else if(!strcmp(odabir, "sladoled")|!strcmp(odabir, "2")) sum+=1.5;
    else if(!strcmp(odabir, "sladoled")|!strcmp(odabir, "3")) sum+=25;
    else if(!strcmp(odabir, "sladoled")|!strcmp(odabir, "4")) sum+=1500;
    else nestojeodabrano=0;
    }
printf("ukupan promet danas iznosi %.2f",sum);
}
