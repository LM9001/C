#include <stdio.h>
#include <math.h>

void main(){
    int stranicaA=90;
    int stranicaB=50;
    int stranicaC=30;
    printf("Unesi stranice:\n");
    scanf("%d %d %d",
          &stranicaA,
          &stranicaB,
          &stranicaC);
    int V=stranicaA*stranicaB*stranicaC;
    printf("Volumen je %d cm na treæu",V);
    }
