#include <stdio.h>

int main(){
    int x;
    printf("Unesi kreditnu ocjenu");
    scanf("%d", &x);
    if(x<750){
        printf("Nema pristup");
    }else{
    printf("Dobrodosli u KRED program");
    }
}
