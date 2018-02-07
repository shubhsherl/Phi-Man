/*#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include<math.h>  */
int x1m=11,y1m=65,h_=1,h1=1,c=0;long ab[2][12];
void layout(char U[],int P)
{char t[2];t[0]=2;t[1]='\0';
int w=0;long x=90, y=95;
settextstyle(0,0,2);
setcolor(10);
rectangle(0,0,getmaxx()-5,25);
setcolor(14);
//outtextxy(x+185,y-97,"Score Board");
//line(x+260,y-104,x+200,y-104);
setcolor(12);
outtextxy(2,5,"Score");
if(h1)delay(150);
setcolor(11);outtextxy(440,5,U);setcolor(12);
if(h1)delay(150);
outtextxy(227,5,"Time");
settextstyle(0,0,2);
if(h1)delay(150);
 setfillstyle(6,5);
setcolor(63);
bar(10,x,620,y);
bar(10,x+=95,620,y+=95);
bar(10,x+=95,620,y+=95);
bar(10,x+=95,620,y+=95);
bar(10,x+=95,620,y+=95);
settextstyle(0,0,3.8);
if(h1)outtextxy(x1m,y1m,t);
t[0]=30;
x=350,y=-23;
settextstyle(0,0,3.8);
setcolor(56);
outtextxy(x,y+=95,t);ab[0][w++]=x*1000+y;
outtextxy(x+=15,y+=95,t);ab[0][w++]=x*1000+y;
outtextxy(x-=30,y+=95,t);ab[0][w++]=x*1000+y;
outtextxy(x+130,y,t);    ab[0][w++]=(x+130)*1000+y;
outtextxy(x+=30,y+=95,t);ab[0][w++]=x*1000+y;
outtextxy(x,y+=95,t);    ab[0][w++]=x*1000+y;
outtextxy(x+=60,y,t);ab[0][w++]=x*1000+y;
x=130;y=-23;
outtextxy(x,y+=95,t); ab[0][w++]=x*1000+y;
outtextxy(x+=15,y+=95,t);ab[0][w++]=x*1000+y;
outtextxy(x-=30,y+=95,t);ab[0][w++]=x*1000+y;
outtextxy(x+=30,y+=95,t);ab[0][w++]=x*1000+y;
outtextxy(x,y+=95,t); ab[0][w++]=x*1000+y;
if(h1)
{x=190,y=72,w=0;
setcolor(14);
setfillstyle(1,14);
pieslice(x, y,0, 360,11 ); ab[1][w++]=x*1000+y;
pieslice(x+220, y,0, 360,11 );ab[1][w++]=(x+220)*1000+y;
pieslice(x+25, y+=95,0, 360,11 ); ab[1][w++]=(x+25)*1000+y;
pieslice(x-80, y,0, 360,11 ); ab[1][w++]=(x-80)*1000+y;
pieslice(x+340, y,0, 360,11 ); ab[1][w++]=(x+340)*1000+y;
pieslice(x-110, y+=95,0, 360,11 );ab[1][w++]=(x-110)*1000+y;
pieslice(x+30, y,0, 360,11 );  ab[1][w++]=(x+30)*1000+y;
pieslice(x+230, y,0, 360,11 ); ab[1][w++]=(x+230)*1000+y;
pieslice(x+30, y+=95,0, 360,11 );ab[1][w++]=(x+30)*1000+y;
pieslice(x+320, y,0, 360,11 ); ab[1][w++]=(x+320)*1000+y;
pieslice(x, y+=95,0, 360,11 ); ab[1][w++]=x*1000+y;
pieslice(x+215, y,0, 360,11 ); ab[1][w++]=(x+215)*1000+y; }
x=45,y=89;
setfillstyle(9,56);
bar(580,40,619,y);
bar(580,40+190,619,y+190);
bar(580,40+380,619,y+380);
bar(10,40+90,49,y+95);
bar(10,40+285,49,94+280);
}
void jump(char *,char *,int,int ,clock_t);


check(char v,char t[],char U[],int P,int T,clock_t e1)
{
  v=toupper(v);
  if(v=='D' && x1m!=615){if(h_){putpixel(x1m-random(2),y1m+random(25),15);setcolor(0);outtextxy(x1m,y1m,t);}x1m+=2;return 0;}
  if(v=='W' && ((580<x1m && x1m<619 && (y1m==160 || y1m==350 )) || (10<x1m && x1m<49 && (y1m==255 || y1m==445))) && h_){putpixel(x1m-random(5),y1m+random(25),15);setcolor(0);outtextxy(x1m,y1m,t);y1m-=95;h_=2;return 0;}
  if(v=='A' && x1m!=10){if(h_){putpixel(x1m+random(30),y1m+random(25),15);setcolor(0);outtextxy(x1m,y1m,t);}x1m-=2;return 0;}
  if(v=='S' && ((580<x1m && x1m<619 && (y1m==65 || y1m==255)) || (10<x1m && x1m<49 && (y1m==160|| y1m==350))) && h_){putpixel(x1m-random(5),y1m+random(25),15);setcolor(0);outtextxy(x1m,y1m,t);y1m+=95;return 0;}
  if(v=='W'){putpixel(x1m-random(5),y1m+random(25),15);setcolor(0);if(h_)jump(t,U,P,T,e1);return 0;}
  else if(v=='0') return 2;
  return 1;}

check1()
{for(int j=0;j<12;j++)
 if((x1m<ab[0][j]/1000+23 && x1m>ab[0][j]/1000-22 && y1m==(ab[0][j]%1000)-7) ||(x1m<ab[0][j]/1000+15 && x1m>ab[0][j]/1000-13 && y1m<=(ab[0][j]%1000)-7 && y1m>(ab[0][j]%1000)-15))
 return 0;
 else if((x1m<ab[1][j]/1000+12 && x1m>ab[1][j]/1000-35 && y1m==(ab[1][j]%1000)-7) ||(x1m<ab[1][j]/1000+12 && x1m>ab[1][j]/1000-35 && y1m<=(ab[1][j]%1000)-7 && y1m>(ab[1][j]%1000)-20))
 {setlinestyle(3,1,1);
setfillstyle(1,0);pieslice(ab[1][j]/1000,ab[1][j]%1000,0, 360,12 );
putpixel(x1m-random(5),y1m+random(20),15);ab[1][j]=0;
  return 1;}
 return 2;}

void jump(char t[],char U[],int P,int T,clock_t e1)
{int x=x1m,y=y1m,i,j=0,y2=y1m; long ay[1][12];char v;
j:while(!kbhit())
{{clock_t e=clock();int r;char U[5];
   r=(e -e1)/18;
   delay(0);
   if(r==60){T++;r=0;e1=e;}
setcolor(3);
setfillstyle(0,0);
bar(290,5,400,20);
settextstyle(0,0,2);itoa(T,U,10);outtextxy(307,5,U);outtextxy(325,5,":");itoa(r,U,10);outtextxy(343,5,U);
settextstyle(0,0,3);}
if(j<22)
{putpixel(x1m+random(20),y+random(30),15);
setcolor(0);
outtextxy(x,y,t);
setcolor(63);
outtextxy(x,y-=2,t);delay(25);j++;h1=0;layout(U,P);
}
if(j>=22)
{putpixel(x1m+random(20),y-random(2),15);
setcolor(0);
outtextxy(x,y,t);
setcolor(63);
outtextxy(x,y+=2,t);delay(25);j++;layout(U,P);}if(y==y1m)goto j1;
y1m=y;i=check1();
if(i==0)goto j1; if(i==1){
c++;setcolor(6);setfillstyle(0,0);
bar(85,3,110,20);
char C[3];itoa(c,C,10);
settextstyle(0,0,2);  outtextxy(90,5,C);settextstyle(0,0,3);
setcolor(63);outtextxy(x1m,y1m,t);
sound(1000);delay(8);nosound();
  sound(1330);delay(80);nosound();}
y1m=y2;
}
h_=0;i=check(getch(),t,U,P,T,e1);if(i==0){
putpixel(x1m-random(2),y+random(25),15);setcolor(0);
outtextxy(x,y,t);x=x1m;goto j;}
j1:
h_=1;
setcolor(0);
outtextxy(x,y,t);

}


boo(char U[],int &P, int &S,int &S1)
{ char v,t[2];t[0]=2;t[1]='\0';int q,w,T=0;h_=1;
int gdriver = DETECT, gmode,y;
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
cleardevice();
setbkcolor(0);
char C[3];itoa(c,C,10);
setcolor(6);settextstyle(0,0,2);  outtextxy(90,5,C);settextstyle(0,0,3);

for(int i=0;i<2500;i++)
{putpixel(random(getmaxx()),random(getmaxy()),15);
   }
layout(U,P);
int i9=0;
while(!kbhit())
{if(i9==40)i9=0;
float a1[40]={523.25,440,659.25,440,523.25,440,659.25,440,493.88,392,587.33,392,493.88,392,587.33,392,440,349.23,523.25,349.23,440,349.23,523.25,349.23,392,329.63,493.88,329.63,392,329.63,493.88,329.63};
{sound(a1[i9++]);
delay(350);
nosound();
}}

getch();
clock_t e1=clock();
up:
while(!kbhit())
   {clock_t e=clock();int r;char U[5];
   r=(e -e1)/18;
   delay(0);
   if(r==60){T++;r=0;e1=e;}
setcolor(3);
setfillstyle(0,0);
bar(290,5,400,20);
settextstyle(0,0,2);itoa(T,U,10);outtextxy(307,5,U);outtextxy(325,5,":");itoa(r,U,10);outtextxy(343,5,U);
settextstyle(0,0,3);}
v=getch();v=toupper(v);
i=check(v,t,U,P,T,e1);
if(!i)
{
y=check1();
if(y==0){if(c>S)S=c;P+=S;S1=c;
setcolor(63);outtextxy(200,5,"GAME OVER");
setcolor(0);outtextxy(x1m,y1m,t);

while(!kbhit())
{setcolor(63);
outtextxy(q=x1m-random(4)+2,w=y1m-random(12),t);delay(40);
setcolor(0);outtextxy(q,w,t);
 sound(75);
  delay(42);
  nosound();
 sound(203);
  delay(60);
  nosound();
}x1m=11,y1m=65,h_=1,h1=1,c=0;
goto down;}
if(y==1){
c++;setcolor(63);outtextxy(x1m,y1m,t);
sound(1000);delay(8);nosound();
  sound(1333);delay(80);nosound();
setcolor(6);setfillstyle(0,0);
bar(85,3,130,20);
char C[3];itoa(c,C,10);
settextstyle(0,0,2);  outtextxy(90,5,C);settextstyle(0,0,3);}

h1=0;
setcolor(63);
outtextxy(x1m,y1m,t);

 layout(U,P);
 setcolor(63);
outtextxy(x1m,y1m,t);
delay(5);
if(x1m>582 && y1m==445)
{int j=0;
while(!kbhit())
{
if(j<22)
{setcolor(0);
outtextxy(x,y,t);
setcolor(63);
outtextxy(x,y-=2,t);delay(25);j++;
}
if(j>=22)
{setcolor(0);
outtextxy(x,y,t);
setcolor(63);
outtextxy(x,y+=2,t);delay(25);j++;if(j==43)j=0;}
}if(c>S)S=c;P+=S;S1=c;x1m=11,y1m=65,h_=1,h1=1,c=0;
goto down;}
goto up; }
if(i==1)goto up;
down:
getch();
return -1;
}
