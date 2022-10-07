#include <stdio.h>

int dionice(int S, int C, int min, int max){
    int zavrsna_cijena=S*(100+C)/100;
    return zavrsna_cijena >= min && zavrsna_cijena <= max;
}

int main(){
    int s;
    int c;
    int min;
    int max;
    printf("unesi podatke o dionicama");
    scanf("%d %d %d %d", &s, &c, &min, &max);
    if(dionice(s,c,min,max)){ printf("kupice dionice");}
    else{printf("nece kupit dionice");}
}
