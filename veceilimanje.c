#include <stdio.h>
#include <math.h>

int main(){

    float prvibr;
    float drugibr;
    float rjesenje;

    printf("Unesi prvi pribrojnik:\n");
    scanf("%f", &prvibr);
    printf("Unesi drugi pribrojnik:\n");
    scanf("%f", &drugibr);
    printf("Unesi rjesenje:\n");
    scanf("%f", &rjesenje);

    printf("Provjeri rezultat zbrajanja:\n");

    if(abs(rjesenje-(prvibr+drugibr))<0.0001)
        printf("=");
    else if(rjesenje>(prvibr+drugibr))
        printf(">");
    else
        printf("<");
}
