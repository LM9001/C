#include <stdio.h>

int par(int a, int b){
    return (a+b)%2? 0:1;
}

int main(){
    int a;
    int b;
    printf("unesi 2 broja");
    scanf("%d %d", &a, &b);
    printf(par(a,b)?"zvonimir":"tatjana");
}
