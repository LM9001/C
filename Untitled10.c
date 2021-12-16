#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);

    int z=x*y;
    int a=x+y;
    int b=x-y;
    int c=x/y;
    int d=x%y;

    printf("zbrajanje %d\n",a);
    printf("oduzimanje %d\n",b);
    printf("mnozenje %d\n",z);
    printf("dijeljenje %d\n",c);
    printf("ostatak cjelobrojnog dijeljenja%d\n",d);
    }
