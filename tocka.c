#include <stdio.h>

main(){
    int x;
    int y;
    printf("Unesi koordinate neke tocke\n");
    scanf("%d %d", &x, &y);
    if(x>0 && y>0){
        printf("tocka se nalazi u prvom kvadrantu\n");
    }
    if(x<0 && y<0){
        printf("tocka se nalazi u trecem kvadrantu\n");
    }
    if(x>0 && y<0){
        printf("tocka se nalazi u cetvrtom kvadrantu");
    }
    if(x<0 && y>0){
        printf("tocka se nalazi u drugom kvadrantu\n");
    }
}
