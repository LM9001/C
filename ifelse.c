#include <stdio.h>

main(){
    int a;
    int b;
    printf("Unesi 2 broja\n");
    scanf("%d %d", &a, &b);
    if(a<b)
        printf("%d je veci od %d", b, a);
            else
                printf("%d je veci od %d", a, b);
}
