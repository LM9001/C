#include <stdio.h>

int main(){
    int x;
    int y;
    printf("Unesi cijenu prve i druge tvrtke");
    scanf("%d %d", &x, &y);
    if(x<y){
        printf("Marko æe odabrati x tvrtku");
    }else{
        printf("Marko æe odabrati y tvrtku");
    }
}
