#include <stdio.h>
#include <stdlib.h>

struct crvic{
	char ime[25];
	int duljina;
	char stovolijesti[25];
	char mozeliubitisvinju[3];
}c[5];
void ispisi(struct crvic c[]){
	
	int i,j,min_idx;
	struct crvic temp;
	
	for(i=0;i<4;i++){
		min_idx=i;
		for(j=i+1;j<5;j++)
			if(c[j].duljina<c[min_idx].duljina)
		min_idx=j;
		
		temp=c[min_idx];
		c[min_idx]=c[i];
		c[i]=temp;
	}
	for(i=0;i<4;i++)
		printf("%s,\t %s,\t %s\t, %d\n", c[i].ime, c[i].stovolijesti, c[i].mozeliubitisvinju, c[i].duljina);
	}
int main(){
	struct crvic c[5]={
		"ime1", 50,"Burek","Da",
		"ime2",69,"Krumpir","Da",
		"ime3",35,"Salata","Ne",
		"ime4",12,"Mrkva","Ne"
	};
	printf("Unesi i,d,s,m");
	scanf("%s, %d, %s, %s", c[5].ime, &c[5].duljina, c[5].stovolijesti, c[5].mozeliubitisvinju);
	ispisi (c);
	
}
