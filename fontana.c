#include <stdio.h>
#include <math.h>

int main(){

    float rf;
    float rt;


    printf("Polumjer fontane:\n");
    scanf ("%f", &rf);
    printf("Polumjer travnjaka:\n");
    scanf("%f", &rt);
    float povrsinaFontane = rf*rf*3.14159;
    float povrsinaTravnjaka = rt*rt*3.14159;
    printf ("Povrsina travnjaka %.0f",povrsinaTravnjaka-povrsinaFontane);

    return 0;


}
