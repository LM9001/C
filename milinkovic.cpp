#include <graphics.h>
#include <conio.h>

int main(){
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	setbkcolor(3);
	setfillstyle(2,5);
	char kretanje;
	int yp=0;

	while(kretanje != 'q')
	rectangle(10,10,410,410);
	circle(80+yp,210,20);
	line(80+yp,230,80+yp,310);
	line(80+yp,245,40+yp,220);
	line(80+yp,245,120+yp,220);
	line(80+yp,300,60+yp,350);
	line(80+yp,300,100+yp,350);
	cleardevice();
		kretanje = getch();
	if(kretanje == 'd')
	yp=yp+20;
				
	if(kretanje == 'a')
	yp=yp-20;
	cleardevice();


	

	getch();
	closegraph;
	return 0;
}
