//napisi funkciju za slijedno pretrazivnje jendodimenzionalong polja x u main funkciji treba ucitati od n cijelih brojeva iz cega n treba biti u intervalu od 3 do 10
//s pomocu funkcije trazi pronade se indeks prve pojave elementa koji ima vrijednost koja je jednaka sumi prva 2 elementa
//ako je element pronaden u novo polje spremi sve elemente nakon pronadenog elementa te ispisi polje
#include <stdio.h>
int search(int A[], int n){
    int i;
    for(i=0;i<n;i++)
        if(A[i]>3&&A[i]<=10)
            return i;
    return-1;
}
int main (){
    int x[50];
    int i, n;
    time_t t;
    srand((unsigned)time(&t));

    while(n<3||n>10)
    scanf("%d", &n);

    for(i=0; i<n;i++){
        x[i]=(rand()%12)+7;
    }
    for(i=0;i<n;i++){
        printf("%d\t",x[i]);
    }
    printf("\n%d", search(x,n));
 }
