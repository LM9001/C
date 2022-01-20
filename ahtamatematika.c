#include <stdio.h>
#include <math.h>

main(){

    int a;
    int b;
    printf("Unesi 2 prirodna broja\n");
    scanf("%d %d", &a, &b);
    int z=a+b;
    int o=a-b;
    float m=(float)a*b;
    float d=(float)a/b;
    float r=(float)(a+b)/2;
    float g=(float) sqrt(a*b);
    printf("%d\n", z);
    printf("%d\n", o);
    printf("%.2f\n", m);
    printf("%.2f\n", d);
    printf("%.3f\n", r);
    printf("%.3f\n", g);
    }
