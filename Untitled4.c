#include <stdio.h>

int main(){
    int P1;
    int P2;
    int P3;
    int P4;
    int sum=0;
    printf("Upisi koliko je zadataka Ivan rjesio u svakom tjednu");
    scanf("%d %d %d %d", &P1, &P2, &P3, &P4);
    int p1=P1+P2;
    if(P1>=10){
        sum+=1;
    }
    if(P2>=10){
        sum+=1;
    }
    if(P3>=10){
        sum+=1;
    }
    if(P4>=10){
        sum+=1;
    }
    printf("Ivan je postigao svoj tjedni cilj u %d tjedana", sum);
}
