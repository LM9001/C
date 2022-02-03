#include <stdio.h>

main(){
    int broj1;
    int broj2;
    int broj3;
    int broj4;
    int broj5;
    int broj6;
    printf("Unesi broj telefona\n");
    scanf("%d %d %d %d %d %d", &broj1, &broj2, &broj3, &broj4, &broj5, &broj6);
    int broj=(broj1*100000)+(broj2*10000)+(broj3*1000)+(broj4*100)+(broj5*10)+broj6;
    printf("%d\n", broj);
    int krivibroj=broj-292;
    printf("%d\n", krivibroj);

}
