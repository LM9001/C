#include <stdio.h>
float mintrosak(int N, float x){                                //definicija funkcije
    return N*x;
}
//float mintrosak2(int N, float x=15.99){     //x ima zadani argument
  //  return N*x;
//}
void mintrosak3(int *N, float *x, float *rez){
    *rez=*N * *x;
}
int main(){
    int brPrijatelja;
    float cijena, trosak;
    printf("Unesi broj broj prijatelja: ");
    scanf("%d", &brPrijatelja);
    printf("Unesi cijenu pretplate: ");
    scanf("%f", &cijena);
    trosak = mintrosak(brPrijatelja, cijena);                   //poziv funkcije
    printf("Ukupni trosak iznosi %.2f novaca", trosak);
    //trosak = mintrosak2(brPrijatelja);                   //poziv funkcije
    //printf("\nUkupni trosak iznosi %.2f novaca", trosak);
    mintrosak3(&brPrijatelja, &cijena, &trosak);                   //poziv funkcije
    printf("\nUkupni trosak iznosi %.2f novaca", trosak);
    return 0;
}
