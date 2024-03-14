
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int j,x1,x2;
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
for(j=0;j<3;j++)
{
for(x1=100,x2=150;x1<=500;x1++,x2++)
{
setcolor(4);
rectangle(x1,50,x2,75);
rectangle(x1-25,75,x2+25,100);
circle(x1,105,5);
circle(x2,105,5);
delay(10);
setcolor(0);
rectangle(x1,50,x2,75);
rectangle(x1-25,75,x2+25,100);
circle(x1,105,5);
circle(x2,105,5);
}
for(x1=500,x2=550;x1>=100;x1--,x2--)
{
setcolor(4);
rectangle(x1,50,x2,75);

rectangle(x1-25,75,x2+25,100);
circle(x1,105,5);
circle(x2,105,5);
delay(10);
setcolor(0);
rectangle(x1,50,x2,75);
rectangle(x1-25,75,x2+25,100);
circle(x1,105,5);
circle(x2,105,5);
}
}
getch();
}
