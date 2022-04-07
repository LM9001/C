#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    int e;
    int mlyko;

    printf("Unesi kapacitet posudice a:\n");
    scanf("%d", &a);
    printf("Unesi kapacitet posudice b:\n");
    scanf("%d", &b);
    printf("Unesi kapacitet posudice c:\n");
    scanf("%d", &c);
    printf("Unesi kapacitet posudice d:\n");
    scanf("%d", &d);
    printf("Unesi kapacitet posudice e:\n");
    scanf("%d", &e);
    printf("Unesi kapacitet mlijeka:\n");
    scanf("%d", &mlyko);

    if(mlyko>=a){
        a=a;
        mlyko-=a;
    }else {a=mlyko; mlyko=0;}

    if(mlyko>=b){
        b=b;
        mlyko-=b;
    }else {b=mlyko; mlyko=0;}

      if(mlyko>=c){
        c=c;
        mlyko-=c;
    }else {c=mlyko; mlyko=0;}

      if(mlyko>=d){
        d=d;
        mlyko-=d;
    }else {d=mlyko; mlyko=0;}

      if(mlyko>=e){
        e=e;
        mlyko-=e;
    }else {e=mlyko; mlyko=0;}

    printf("%d %d %d %d %d", a,b,c,d,e);
}
