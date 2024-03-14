
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
void main()
{
char *p;
char a[80];
int x=100;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
clrscr();
printf("\n Enter a sentence:");
gets(a);
p=strtok(a," ");
if(p)
{
outtextxy(0,472,p);
}
while(p!='\0')
{
sleep(2);
p=strtok(NULL," ");
if(p)
{
outtextxy(x,472,p);
x=x+100;
}
}
getch();
}

