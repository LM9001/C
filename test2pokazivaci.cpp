#include <stdio.h>
#include <stdlib.h>

int main(){
	int* ptr;
	int n,i;
	n=5;
	printf("Enter number of elements:%d\n", n);
	
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL){
		printf("Memory not allocated.\n");
		exit(0);
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
