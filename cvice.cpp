#inlcude <stdio.h>
#include <stdlib.h>

struct cvice{
	int br;
	int m;
	int j;
	char bo[50];
};
	
void filter_boja(){
	    for (int i = 0; i < size; i++) {
        if (strcmp(cvices[i].bo, target_color) == 0) {
            printf("cvice number %d with color %s\n", i+1, cvices[i].color);
        }
    }
}

void filter_jelidrvo(struct cvice c[], int size){
    for (int i = 0; i < size; i++) {
        if (cvices[i].j == 1) {
            printf("cvice number %d is a tree\n", i+1);
        }
    }
}

void sort_broj_latica(struct cvice c[], int size){
	for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (cvices[j].br > cvices[j+1].br) {
                struct cvice temp = cvices[j];
                cvices[j] = cvices[j+1];
                cvices[j+1] = temp;
            }
        }
    }
}

void sort_max_visina(struct cvice c[], int size){
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (cvices[j].m > cvices[j+1].m) {
                struct cvice temp = cvices[j];
                cvices[j] = cvices[j+1];
                cvices[j+1] = temp;
            }
        }
    }	
}	

void print(){
	    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (cvices[j].br > cvices[j+1].br) {
                struct cvice temp = cvices[j];
                cvices[j] = cvices[j+1];
                cvices[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        print(cvices[i]);
    }
}
int main(){
	struct cvice c[6]={56,13,0,"crvena",
					 100,10,0,"roza",
					 150,25,1,"zelena",
					 43,5,0,"ljubicasta",
					 15,7,0,"grimizna"};
	printf("Unesi brojlatica,maxvisina,jelidrvo,boju\n");
	scanf("%d %d %d %s", &c[5].br, &c[5].m, &c[5].j, c[5].bo);
	printf("%d\t %d\t %d\t %s\n %d\t %d\t %d\t %s\n %d\t %d\t %d\t %s\n %d\t %d\t %d\t %s\n %d\t %d\t %d\t %s\n %d\t %d\t %d\t %s\n"
	c[1].br, c[1].m, c[1].j, c[1].bo, c[2].br, c[2].m, c[2].j, c[2].bo, c[3].br, c[3].m, c[3].j, c[3].bo, c[4].br, c[4].m, c[4].j, c[4].bo, c[5].br, c[5].m, c[5].j, c[5].bo, c[6].br, c[6].m, c[6].j, c[6].bo);
	int size = sizeof(cvice) / sizeof(cvice[0]);
    filter_boja(cvice, size, "zelena");
    printf("\n");
    filter_jelidrvo(cvice, size);
    printf("\n");
    sort_broj_latica(cvice, size);
    printf("\n");
    sort_max_visina(cvice, size);

    return 0;	
}	





