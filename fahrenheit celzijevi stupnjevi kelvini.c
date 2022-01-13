#include <stdio.h>

int main() {
    float F;
    float C;
    float K;

    printf("Unesi temperaturu u Fahrenheitima\n");
    scanf("%d", &F);

    C=(F-32)*9/5;
    K=C+273.15;

    printf("%.2f\n", C);
    printf("%.2f\n", K);
    }
