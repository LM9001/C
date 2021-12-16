#include <stdio.h>
#include <stdlib.h>

int main (){
    int a=4;
    int b=3;
    a=b++;
    b=a--;
    printf("%d %d", a,b);
    }
