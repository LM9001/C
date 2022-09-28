#inlude <stdio.h>

int F(int a){
	return a==1?1:a*F(a-1);
}
int main(){
	int n;
	printf("unesi n");
	scanf("%d", &n);
	printf("%d", F(n));
}
