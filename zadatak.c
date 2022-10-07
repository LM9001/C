#include <stdio.h>
int bilj(float n){
    int y=n*1000;
    return y/100;
}
int main(){
    float n;
    printf("unesi  kg pulpe");
    scanf("%f", &n);
    printf("%d", bilj(n));
}
