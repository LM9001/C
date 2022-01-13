#include <stdio.h>

int main(){
    float staracijena;
    float novacijena;
    printf("Unesi staru i novu cijenu proizvoda\n");
    scanf("%f %f", &staracijena, &novacijena);

    int postotaksnizenja=((float)(staracijena-novacijena)/staracijena)*100;
    printf("%d\n", postotaksnizenja);
    return 0;
    }
