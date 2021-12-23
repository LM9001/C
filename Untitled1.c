#include <stdio.h>
#include <math.h>

main(){
    int F1;
    int F2;
    printf("Unesi broj dvaju sila\n");
    scanf("%d %d", &F1, &F2);
    int a=F1+F2;
    int b=F1-F2;
    int c=sqrt((F1*F1)*(F2*F2));
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    }
