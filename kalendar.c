#include <stdio.h>

main(){

    int d;
    int m;
    int g;
    int n;

    printf("Unesi dan datuma, mjesec, godinu i redni broj dana u tjednu\n");
    scanf("%d", &d);
    int KojiJeOvoDan=(n-1+d)%7;

    switch(KojiJeOvoDan){
    case 1:
    printf("Ponedjeljak");
    break;
    case 2:
    printf("Utorak");
    break;
    case 3:
    printf("Srijeda");
    break;
    case 4:
    printf("Cetvrtak");
    break;
    case 5:
    printf("Petak");
    break;
    case 6:
    printf("Subota");
    break;
    case 0:
    printf("Nedjelja");
    break;
    }}
