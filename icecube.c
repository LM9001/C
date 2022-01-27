#include <stdio.h>

main(){
    int r;
    int bl;
    int rl;
    printf("Unesi radius, duzinu boce i dužinu oboda\n");
    scanf("%d %d %d", &r, &bl, &rl);
    int V=(bl-rl)*r*2*r;
    printf("%d", V);
    }
