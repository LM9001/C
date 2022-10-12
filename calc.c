#include <stdio.h>

float Calc(float a, char O, float b){
    if(O=='*')
        return a*b;
        	else if(O=='+')
            	return a+b;
            		else if(O=='-')
                		return a-b;
                    		else if(O=='/')
                        		return a/b;
}
int main(){
    float a;
    char O;
    float b;
    printf("unesi a,O,b");
    scanf("%f %c %f", &a, &O, &b);
	printf("%f", Calc(a,O,b));
}
