#include <stdio.h>
int Lovro(int X){
    return 100-X;
}
int main(){
    float X;
    printf("Unesi cijenu kupljenih stvari: ");
    scanf("%d", &X);
    printf("%d", Lovro(X));
}
