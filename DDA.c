#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
void main(){
int gd=DETECT,gm;
int x1,y1,x2,y2,dx,dy,x,y,i,length;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
 printf("Enter All four Co-ordinates :- ");
 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
 length=abs(x2-x1)>abs(y2-y1)?abs(x2-x1):abs(y2-y1);
 dx=(x2-x1)/length;
 dy=(y2-y1)/length;
 x=x1+.5;
 y=y1+.5;
 i=1;
 while(i<=length){
   putpixel(x,y,GREEN);
   x=x+dx;
   y=y+dy;
   i++;
 }
  outtextxy(x1+10,y1+10,"Line Draw Completed");


getch();
closegraph();
}