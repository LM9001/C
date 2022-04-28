#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int n,i=0,x=2,y=1,sum=0;
printf("Unesi koliko ima gradova\n");
scanf("%d",&n);
n=n-1;
while(n>0){
	n--;
	printf("Unesi razmak izmedu %d i %d grada \n",y++,x++);
	scanf("%d",&i);
	sum+=i;
}
printf("%d",sum);
return 0;
}
