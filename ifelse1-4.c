#include <stdio.h>

main(){
    int a;
    printf("Unesite kvadrat\n");
    scanf("%d", &a);
    if(a==1)
        printf("+ +");
        else if(a==2)
        printf("- +");
        else if(a==3)
        printf("- -");
        else if(a==4)
        printf("+ -");
        else
        printf("kvadrant ne postoji");

}
