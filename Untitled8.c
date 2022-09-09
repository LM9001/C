#include <stdio.h>

int main(){
    int V;
    int x;
    int y;
    int Z;
    printf("Unesi V,x,y,Z");
    scanf("%V %x %y %Z");
    x=x-V;
    int v=Z*y;
    if(v<x){
        printf("Kanta se jos puni");
    }
    if(v=x){
        printf("Kanta se tocno napunila");
    }else{
        printf("kanta se prelila");
    }
}
