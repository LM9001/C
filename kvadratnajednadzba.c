#include <stdio.h>
#include <math.h>

float kvadrat(float a, float b, float c){

    return (-b+sqrt((b*b)-4*a*c))/(2*a);
}
float kvadrat_1(float a, float b, float c){

    return (-b-sqrt((b*b)-4*a*c))/(2*a);
}
int main(){
    float a;
    float b;
    float c;
    printf("unesi abc");
    scanf("%f %f %f", &a, &b, &c);
    printf("%.2f", kvadrat(a,b,c));
    printf("%.2f", kvadrat_1(a,b,c));
}
