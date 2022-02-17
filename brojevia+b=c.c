//a,b,c
//a+b=c

//krivo uneseni brojevi
#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;

    printf("Unesi brojeve a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a+b==c){
        printf("%d + %d = %d", a,b,c);
    } else if (c+a==b){
        printf("%d + %d = %d", c,a,b);
    } else if (c+b==a){
        printf("%d + %d = %d", c,b,a);
    } else
        printf("Krivo zadani brojevi.");
