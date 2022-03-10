#include <stdio.h>

main(){
    int a;
    printf("Unesi kvadrant\n");
    scanf("%d", &a);
    switch(a){
    case 1:
        printf("+ +");
        break;
    case 2:
        printf("- +");
        break;
    case 3:
        printf("- -");
        break;
    case 4:
        printf("+ -");
        break;
    default:
        printf("kvadrant ne postoji");
        break;    }
}
