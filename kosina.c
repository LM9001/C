#include <stdio.h>
#include <math.h>

int main(){
    float mi;
    int m;
    int h;
    int l;
    int g=10;

    printf("Unesi iznos faktora trenja, masu, visinu kosine i duljinu kosine\n ");
    scanf("%f %d %d %d", &mi, &m,&h,&l);

    float R1=(float) mi*m*g;
    float R2=(float) mi*m*g*h/l;
    printf("Sila trenja na horizontalnoj podlozi je: %.2f N\n", R1);
    printf("Sila trenja na kosini je: %.2f N\n", R2);
    //abs(R1-R2)
    printf("Razlika u iznosu sila je: %.2f N\n", (R1-R2)>0?R1-R2:R2-R1);

    return 0;



}
