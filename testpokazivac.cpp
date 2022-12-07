#include <stdio.h>
#include <stdlib.h>

int main(){
	int* ptr;
	int n,i;
	printf("Enter number of elements:");
	scanf("%d", &n);
	printf("Entered number of elements:%d\n",n);
	ptr=(int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++){
	printf("unesi %d broj:", i);
	scanf("%d",&ptr[i]);
}	
for(i=0;i<n;i++){
	printf("\n%d", ptr[i]);
}
	free(ptr);
	printf("\n nakon free\n");
for(i=0;i<n;i++){
	printf("\n%d", ptr[i]);
}
}
