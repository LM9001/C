//napisi funkciju za jednodimenzionalno pretrazivanje polja
//u glavnoj funkciji treba generirati poulje pod n slucajnih cijelih brojeva iz intervala 1 do 100
#include <stdio.h>
int search(int A[], int n){
    int i;
    for(i=0;i<n;i++)
        if(A[i]>8&&A[i]<=10)
            return i;
    return-1;
}
int main (){
    int x[50];
    int i, n;
    time_t t;
    srand((unsigned)time(&t));
    scanf("%d", &n);
    for(i=0; i<n;i++){
        x[i]=rand()%100;
    }
    for(i=0;i<n;i++){
        printf("%d\t",x[i]);
    }
    printf("\n%d", search(x,n));
 }
//s pomocu funkcije ispise indeks prve pojave elementa iz intervala od 8 do 10
//ako takva vrijednost nije sadrzana ni uu jednom elementu ispise se -1
