#include <stdio.h>

int main(){
    int a;
    printf("Unesi neki broj");
    scanf("%d", &a);
    int b=a%10;
    while(a>10){
        a=a/10;
    }
    int c=a+b;
    printf("%d", c);
}
