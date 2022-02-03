#include <stdio.h>
#include <math.h>

main(){
    int AX;
    int AY;
    int BX;
    int BY;
    int CX;
    int CY;
    printf("Unesi koordinatne tocki A,B,C\n");
    scanf("%d %d %d %d %d %d", &AX, &AY, &BX, &BY, &CX, &CY);
    float a=(float)sqrt(((BX-CX)*(BX-CX))+(BY-CY)*(BY-CY));
    float b=(float)sqrt(((CX-AX)*(CX-AX))+(CY-AY)*(CY-AY));
    float c=(float)sqrt(((BX-AX)*(BX-AX))+(BY-AY)*(BY-AY));
    float D=(a+b+c)/2;
    float P=sqrt(D*(D-a)*(D-b)*(D-c));
    printf("%.2f", P);
}
