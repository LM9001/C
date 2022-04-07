#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,d;
    do{
        a=b;
        b=c;
        c=d;
        scanf("%f",&d);
    }while(d);

    float r=a-c;

    printf("Razlika iznosi:%.2f", r);
}
