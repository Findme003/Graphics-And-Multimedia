
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int i,steps,dx,dy,xa,xb,ya,yb,d,m;
int xinc,yinc,x,y;
void main()
{
d=DETECT;
initgraph(&d,&m,"c:\\turboc3\\bgi");
printf("\n Enter values x1,x2,y1,y2 \n");
scanf("%d %d %d %d",&xa,&xb,&ya,&yb);
outtextxy(150,150,"DDA line drawing algorithm \n");
dx=xb-xa;
dy=yb-ya;
if(abs(dx)>abs(dy))
{
steps=abs(dx);
}
else
{
steps=abs(dy);
xinc=dx/steps;
yinc=dy/steps;
x=xa;
y=ya;
putpixel((int)x,(int)y,15);
}
for(i=1;i<=steps;i++)
{
x=x+xinc;
y=y+yinc;
putpixel((int)x,(int)y,15);
}
getch();
}

