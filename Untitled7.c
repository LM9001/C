#include <stdio.h>

int main(){
    int N;
    int K;
    printf("Unesi broj N i K");
    scanf("%d %d", &N, &K);
    N=N+1;
    if(N<=K){
        printf("Svi mogu posjetiti sajam");
    }else{
        printf("Nemogu svi posjetiti sajam");
    }
}
