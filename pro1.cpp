#include<stdio.h> 
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define xr 320
#define yr 240 void main(){
int x=520,y=240,xp=0,yp=0; 
double ang;
int gd=DETECT,gm,errorcode; 
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(4);
line(320,240,520,240);
printf("\n Enter the angle to rotate:");
scanf("%lf",&ang);
setcolor(0); line(320,240,520,240);
setcolor(4); ang=ang/57.3;
xp=xr+(x-xr)*cos(-ang)-(y-yr)*sin(-ang);
yp=yr+(x-xr)*sin(-ang)-(y-yr)*cos(-ang); line(xr,yr,xp,yp);
getch();
}

