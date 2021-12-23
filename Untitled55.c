#include <stdio.h>

main(){
    int x;
    printf("Unesi broj sa 6 znamenki\n");
    scanf("%d", &x);

    int x1= x%10;
    int x2=(x/10)%10;
    int x3=(x/100)%10;
    int x4=(x/1000)%10;
    int x5=(x/10000)%10;
    int x6=(x/100000)%10;
    printf("%d",x1+x2+x3+x4+x5+x6);
}
