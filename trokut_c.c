#include <stdio.h>
#include <math.h>

int main(void)
{

int a;
int b;
int c;
int sum;

printf("Unesi broj a: ");
scanf("%d", &a);

printf("Unesi broj b: ");
scanf("%d", &b);

printf("Unesi broj c: ");
scanf("%d", &c);

for(int i=1; i<=c;i++){
    sum=0;
    for(int j=0; j<i; j++){
         sum+=a;
        a+=b;}
}
printf("%d\n",sum);
}
