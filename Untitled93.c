#include <stdio.h>

main(){
     int H1;
     int M1;
     int S1;
     int H2;
     int M2;
     int S2;
     int T;
     printf("Unesi od kad do kad traje film i koliko traju reklame\n");
     scanf("%d %d %d %d %d %d %d", &H1, &M1, &S1, &H2, &M2, &S2, &T);

     int timeS=H2*3600+M2*60+S2-S1-M1*60-H1*3600-T*60;

     int H=timeS/3600;
     int M=(timeS%3600)/60;
     int S= timeS%60;

     printf("%d\n", timeS);
     printf("%d : %d : %d\n", H,M,S);
     }
