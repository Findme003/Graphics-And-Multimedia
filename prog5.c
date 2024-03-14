
#include<stdio.h> #include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int i,j;
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
for(j=0;j<10;j++)
{
for(i=100;i<400;i++)
{
setcolor(4);
circle(100,i,10);
delay(3);
setcolor(0);
circle(100,i,10);
}

for(i=400;i>100;i--)
{
setcolor(4);
circle(100,i,10);
delay(3);
setcolor(0);
circle(100,i,10);
}
}
getch();
}
