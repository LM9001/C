#include <stdio.h>

main(){
    int a;
    int b;
    int l;
    printf("Unesi duljinu i sirinu polja i duljinu zeca\n");
    scanf("%d %d %d", &a, &b, &l);

    int O=2*(a+b);
    int S=3*l;
    int skok=round(O/S);
    int t=skok*1+3*(skok-2);
    printf("%d\n", t);
}
