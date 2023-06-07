#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>

int main(void)
{
	
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	int i=0,j=0,k=0,h=0,b=0,n=0;
	rectangle(10,10,510,310);
	line(270,300,270,240);
	line(400,300,400,240);
	line(270,240,400,240);
	line(215,265,240,290);
	line(215,265,190,290);
	line(215,265,215,220);
	line(215,240,190,200);
	line(215,240,240,200);
	circle(215,213,7);
	line(208,210,215,195);
	line(221,210,215,195);
	circle(215,195,2);
	for(;;){
	char j=getch();
	if(j=='q'){
		for(int i=0;i=1;i){
		int j=5;
		rectangle(10+j,10,510+j,310);
		line(270+j,300,270+j,240);
		line(400+j,300,400+j,240);
		line(270+j,240,400+j,240);
		line(215+j,265,240+j,290);
		line(215+j,265,190+j,290);
		line(215+j,265,215+j,220);
		line(215+j,240,190+j,200);
		line(215+j,240,240+j,200);
		circle(215+j,213,7);
		line(208+j,210,215+j,195);
		line(221+j,210,215+j,195);
		circle(215+j,195,2);
		cleardevice();
		rectangle(10-j,10,510-j,310);
		line(270-j,300,270-j,240);
		line(400-j,300,400-j,240);
		line(270-j,240,400-j,240);
		line(215-j,265,240-j,290);
		line(215-j,265,190-j,290);
		line(215-j,265,215-j,220);
		line(215-j,240,190-j,200);
		line(215-j,240,240-j,200);
		circle(215-j,213,7);
		line(208-j,210,215-j,195);
		line(221-j,210,215-j,195);
		circle(215-j,195,2);
		cleardevice();
		}
	}

}
	getch();
	closegraph();
	return 0;
	}
