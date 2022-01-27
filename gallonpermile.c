#include <stdio.h>

main(){
    int gal;
    int mil;
    printf("unesi broj gallona i milja:\n");
    scanf("%d %d", &gal, &mil);
    float lit=(float)gal*4.55;
    float km=(float)mil*1.61;
    float mpg=(float)mil/gal;
    float kmpl=(float)km/lit;
    printf("%.2f\n", mpg);
    printf("%.2f\n", kmpl);
    }
