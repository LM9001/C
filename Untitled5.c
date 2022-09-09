#include <stdio.h>

int main(){
    int N;
    int M;
    int K;
    printf("Unesi grupu N, M, K");
    scanf("%d %d %d", &N, &M, &K);
    int P=N+K;
    if(P>=M){
        printf("Svi iz grupe N se nemogu upisati u teèaj");
    }else{
        printf("Svi iz grupe N se mogu upisati u teèaj");
    }
}
