#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void rocket(int);


void main()
{
 int gd=DETECT,gm,i=0,x1,y1,j;
 initgraph(&gd,&gm,"C:\TURBOC3\BGI");
//  rocket(0);
 x1=getmaxx()/2-30;
 y1=getmaxy()/2-80;
 gotoxy(x1,y1);
 settextstyle(4,0,10);
 outtextxy(x1,y1,"5");delay(1000);cleardevice();
 outtextxy(x1,y1,"4");delay(1000);cleardevice();
 outtextxy(x1,y1,"3");delay(1000);cleardevice();
 outtextxy(x1,y1,"2");delay(1000);cleardevice();
 outtextxy(x1,y1,"1");delay(1000);cleardevice();
 outtextxy(x1,y1,"0");delay(1000);cleardevice();

for(i=0;i<=420;i+=10)
{
 rocket(i);
 delay(100);
 cleardevice();

}
 getch();
 closegraph();

}

void rocket(int i)
{
  //body
 //right
//  setcolor(4);
ellipse(300,350-i,319,50,70,90);

 //left
  ellipse(300,350-i,-230,-137,70,90);

 line(250,286-i,300,236-i);
 line(300,236-i,350,286-i);
 line(350,286-i,250,286-i);
 setfillstyle(SOLID_FILL,4);
 floodfill(300,240-i,15);
//window
 circle(300,330-i,25);
  setfillstyle(SOLID_FILL,1);
 floodfill(300,330-i,WHITE);
 circle(300,330-i,30);
 setfillstyle(SOLID_FILL,8);
 floodfill(326,330-i,WHITE);

 //left top stand
 ellipse(240,420-i,99,205,45,50);
 //left bottom
 ellipse(240,460-i,80,155,45,50);
 setfillstyle(SOLID_FILL,4);
 floodfill(230,400-i,WHITE);
 //right top
 ellipse(360,420-i,-23,-280,45,50);
 //right bottom
 ellipse(360,460-i,20,-260,45,50);
 setfillstyle(SOLID_FILL,4);
 floodfill(370,400-i,WHITE);
 //middle right
 ellipse(300,410-i,280,80,10,40);
 //left
 ellipse(300,410-i,-280,-80,10,40);
 setfillstyle(SOLID_FILL,4);
  floodfill(300,400-i,WHITE);
 //top left line
 line(243,400-i,290,400-i);
// bottom
 line(246,410-i,290,410-i);
//top right
line(357,400-i,310,400-i);
//bottom
line(355,410-i,310,410-i);
setfillstyle(SOLID_FILL,8);
floodfill(320,405-i,WHITE);
floodfill(280,405-i,WHITE);

 line(350,286-i,250,286-i);
 line(243,400-i,290,400-i);
 line(357,400-i,310,400-i);
 setfillstyle(SOLID_FILL,15);
 floodfill(280,365-i,WHITE);
 //exaust
 //left
 line(260,410-i,250,430-i);
 line(250,430-i,285,430-i);
 line(285,430-i,275,410-i);
 setfillstyle(SOLID_FILL,7);
floodfill(270,420-i,WHITE);
 //right
 line(330,410-i,320,430-i);
 line(320,430-i,355,430-i);
 line(355,430-i,345,410-i);
 setfillstyle(SOLID_FILL,7);
 floodfill(340,420-i,WHITE);
}

