
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int poly[8],x,y,c;
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
poly[0]=300;
poly[1]=200;
poly[2]=300;
poly[3]=100;
poly[4]=500;
poly[5]=200;
poly[6]=poly[0];
poly[7]=poly[1];
drawpoly(4,poly);
setcolor(11);
fillpoly(4,poly);
setcolor(4);
printf("\n Enter the values of x & y");
scanf("%d %d",&x,&y);
c=getpixel(x,y);
circle(x,y,1);
if(c==15)
printf("\n Pixel is in inside");
if(c==11)
printf("\n Pixel is in border");
if(c==0)
printf("\n Pixel is in outside");
getch();
}
