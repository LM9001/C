#include<graphics.h>
#include<conio.h>
#include <math.h>

int main(void)
{
	int gd=DETECT, gm;
	int i;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	setbkcolor(4);
	cleardevice();
	settextstyle(2, 0, 15);
	outtextxy(50, 290, "Volimo brze traktore!");
	getch();
	
	setfillstyle(1, 5);
	for(;;){
		for(i=0; i<=380; i+=15){

			circle(50+i, 390, 30);
			circle(150+i, 400, 20);
			rectangle(35+i,390,170+i,350);
			rectangle(40+i,350,100+i,295);
			rectangle(145+i,350,150+i,300);
			
			line(getmaxx() /3, getmaxy() /1,
           getmaxx() / 390 + 15 * sin(90+i),
           getmaxy() / 390 - 15 * cos(90+i));	
			
			
			
			delay(100);
			cleardevice();
		}
	}

	getch();
	closegraph();
	return 0;
	}
