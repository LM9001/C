#include <stdio.h>

main(){
    int n;
    int a;
    int b;
    int t;
    float k;
    printf("-------------------------------\n");
    printf("\t 1. Zbrajanje\n");
    printf("\t 2. Oduzimanje\n");
    printf("\t 3. Množenje\n");
    printf("\t 4. Dijeljenje\n");
    printf("-------------------------------\n");
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    switch(n){
    case 1:
        t=a+b;
        printf("%d", t);
        break;
    case 2:
        t=a-b;
        printf("%d", t);
        break;
    case 3:
        t=a*b;
        printf("%d", t);
        break;
    case 4:
        k=(float)a/b;
        printf("%.2f", k);
        break;
    default: printf("Odaberi broj od 1 do 4");
        break;}
}
