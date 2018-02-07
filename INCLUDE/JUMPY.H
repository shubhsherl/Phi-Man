/*#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include<stdio.h>
#include<dos.h>
  */
void layd(char U[],int p)
{int xd=getmaxx()/2,yd=getmaxy()/2;
for(int i=10;i>=0;i--)
{settextstyle(0,0,4+i%10);
setcolor(5+i);
outtextxy(xd-285,yd-205,"   JUMPYY   ");
delay(15);
if(i>0)
setcolor(0);
outtextxy(xd-285,yd-205,"   JUMPYY    ");}
setcolor(5);
outtextxy(xd-285,yd-205,"   JUMPYY   ");
setlinestyle(0,0,0);
setfillstyle(1,4);
setcolor(4);
bar3d(xd-315,xd-315,yd+400,yd+235,0,0);
setfillstyle(0,0);
bar3d(xd-310,xd-310,yd+395,yd+230,0,0);
setlinestyle(0,0,3);
setcolor(3);
fillellipse(2*xd-90,2*yd-410,70,45);
line(xd+260,yd-225,xd+190,yd-115);
setcolor(10);
rectangle(xd+150,xd-190,yd+385,yd+40);

settextstyle(0,0,4+i%10);
setcolor(5+i);
outtextxy(xd-285,yd-205,"   JUMPYY   ");

settextstyle(0,0,1);setcolor(14);
outtextxy(xd+185,yd-97,"Score Board");
line(xd+260,yd-104,xd+200,yd-104);
setcolor(12);
delay(150);
outtextxy(xd+157,yd-75,"Your Score");
delay(150);
//outtextxy(xd+157,yd-55,"Time");
//delay(150);
//outtextxy(xd+157,yd-35,"Lives");
//delay(150);
//outtextxy(xd+157,yd-15,"High Score");
//delay(150);
setcolor(11);
settextstyle(0,0,3);
outtextxy(xd+155,yd+10,"LEVEL");
setcolor(5);
rectangle(xd+150,xd-30,yd+385,yd+220);
settextstyle(0,0,1);
setcolor(14);
outtextxy(xd+197,yd+65,"CONTROLS");
line(xd+250,yd+57,xd+205,yd+57);
setcolor(2);
outtextxy(xd+165,yd+90,"Jump");
outtextxy(xd+165,yd+115,"Exit");
//outtextxy(xd+165,yd+140,"Left");
//outtextxy(xd+165,yd+165,"Right");
//outtextxy(xd+165,yd+190,"Hit");
setcolor(1);
outtextxy(xd+245,yd+90,"<space>");
outtextxy(xd+245,yd+115,"0");
//outtextxy(xd+245,yd+140,"A");
//outtextxy(xd+245,yd+165,"D");
//outtextxy(xd+245,yd+190,"X/O");

setcolor(11);
setfillstyle(3,15);
setlinestyle(0,0,1);
//bar3d(xd-300,xd-230,yd+210,yd+80,10,1);
setlinestyle(0,0,3);
rectangle(xd-300,xd+40,yd+220,yd+220);

rectangle(xd-300,xd-300,yd+220,yd-165);
setfillstyle(5,7);
bar(xd-298,yd+105,yd+208,yd+110);

settextstyle(0,0,2);
setcolor(11);
outtextxy(xd-285,yd+145,U);
settextstyle(0,0,1);
setcolor(5);
outtextxy(xd-285,yd+175,"Instructions-");

}
void hin(int j)
{char a[2];int xd=getmaxx()/2,yd=getmaxy()/2;
a[0]=30;
a[1]='\0';

settextstyle(0,0,6);
outtextxy(j,yd+52,a);
outtextxy(j,yd+70,a);
}
void hin1(int j)
{int xd=getmaxx()/2,yd=getmaxy()/2;char a[2];
a[0]=30;
a[1]='\0';
settextstyle(0,0,6);
outtextxy(j,yd+68,a);

}
check(int,int,int,int);
 jump(int b,int &x1,int i)
{int xd=getmaxx()/2,yd=getmaxy()/2;int y=yd+80,u,d;char v,h[2]={2,'\0'};
j:
settextstyle(0,0,3.9);
while(y+60>yd+80)
{settextstyle(0,0,3.9);
setcolor(0);
outtextxy(xd-245,y,h);
setcolor(15);
outtextxy(xd-245,y-=2+i/4,h);
if(b%2)
{setcolor(0);hin(x1);
 setcolor(8);hin(x1-=i);delay(15);d=y+70;}
if(b%2==0)
{setcolor(0);hin1(x1);
 setcolor(8);hin1(x1-=i);delay(15);d=y+68;}

u=check(d,x1,b,y);
if(u==0) return 1;

}
while(!(y==yd+80))
{settextstyle(0,0,3.9);
setcolor(0);
outtextxy(xd-245,y,h);
setcolor(63);
outtextxy(xd-245,y+=2+i/4,h);
if(b%2)
{setcolor(0);hin(x1);
 setcolor(8);hin(x1-=i);delay(15);d=yd+70;}
if(b%2==0)
{setcolor(0);hin1(x1);
 setcolor(8);hin1(x1-=i);delay(15);d=yd+68;}

u=check(d,x1,b,y);
if(u==0)return 1;
}

settextstyle(0,0,3.9);
setcolor(0);
outtextxy(xd-245,y,h);
setcolor(63);
outtextxy(xd-245,y,h);

return 0;}

 check(int y2,int x2,int b,int y1)
{int x1=getmaxx()/2-245;
 if(b%2==0)
 {if((x1<x2+40 && x1>x2-20 &&  y1==y2+12 )||(x1<x2+30 && x1>x2-20 && y1<y2+12 && y1>y2-16))
 return 0; }
 else if((x1<x2+40 && x1>x2-20 && y1==y2+10) || (x1<x2+25 && x1>x2-20 && y1<y2+10 && y1>=y2-27))
 return 0;
 return 1;}


jump(char U[],int &P, int &S,int &S1)
{int gd=DETECT,gm,i=2,maxx,maxy,b,u,d,c,p=0;char v,s[2]={'1','\0'},h[2]={2,'\0'},sq[5];
initgraph(&gd,&gm,"C:\\turboC3\\BGI");
int xd,yd;xd=getmaxx()/2,yd=getmaxy()/2;
int x1=xd-245,y1=yd+80,ss=-1;
layd(U,P);
setcolor(15);
settextstyle(0,0,3.9);
outtextxy(x1,y1,h);
ag: if(p>=9)
{p=0;
setcolor(0);
settextstyle(0,0,3);
outtextxy(xd+280,yd+10,s);
s[0]++;i+=2;}
x1=yd+160;
itoa(ss,sq,10);
settextstyle(0,0,1);setcolor(0);outtextxy(xd+257,yd-75,sq);
ss+=s[0]-48;
b=random(10)+1;
itoa(ss,sq,10);
setcolor(15);outtextxy(xd+257,yd-75,sq);
while(!kbhit())
{ float D4=293.66,E4=329.63,FS4=369.99,G4=392,A4=440,B4=493.88,C5=523.25,D5=587.33,E5=659.25,FS5=739.99,G5=783.99,A5=880,B5=987.77,C6=1046.5,D6=1174.66;
float a1[150]={G4,D4,G4,D4,G4,D4,G4,B4,D5,0,C5,A4,C5,A4,C5,A4,FS4,A4,D4,0,G5,0,G5,B5,A5,G5,A5,G5,A5,G5,FS5,A5,C6,FS5,G5,0,G5,B5,A5,G5,A5,G5,A5,G5,FS5,A5,C6,FS5,G5,0,G5,0,G5,FS5,E5,FS5,G5,0,G5,B5,A5,G5,A5,B5,0,B5,D6,C6,B5,C6,D6,0,D5,0,E5,0,D5,C5,0,C5,0,C5,B4,0,B4,0,B4,A4,0,A4,G4,FS4,E4,FS4,G4,0,G4,A4,FS4,G4,0,D5,0,E5,0,D5,C5,0,C5,0,C5,B4,0,B4,0,B4,A4,0,A4,G4,FS4,E4,FS4,G4,0,G4,A4,FS4,G4,0};
float b1[150]={3,1,3,1,1,1,1,1,3.5,.5,3,1,3,1,1,1,1,1,3.5,.5,1.75,.25,3,1,1,1,.5,.5,.5,.5,3,1,1,1,1.75,.25,3,1,1,1,.5,.5,.5,.5,3,1,1,1,.8,.2,.8,.2,.5,.5,.5,.5,.8,.2,1,.5,.5,.5,.5,.8,.2,1,.5,.5,.5,.5,3.25,.75,3.25,.75,3.25,.75,1,.8,.2,1.75,.25,1,.8,.2,1.75,.25,1,.8,.2,2,1,1,1,1,.8,.2,1,1,1,3.25,.75,3.25,.75,3.25,.75,1,.8,.2,1.75,.25,1,.8,.2,1.75,.25,1,.8,.2,2,1,1,1,1,.8,.2,1,1,1,3.25,.75};
sound(a1[i]);
delay(b1[i++]*220);
nosound();
}

ag1:
setcolor(11);
settextstyle(0,0,3);
outtextxy(xd+280,yd+10,s);


while(!kbhit())
{
if(b%2)
{setcolor(0);hin(x1);
 setcolor(8);hin(x1-=i);delay(15);d=yd+70;}
if(b%2==0)
{setcolor(0);hin1(x1);
 setcolor(8);hin1(x1-=i);delay(15);d=yd+68;}
u=check(d,x1,b,y1);
if(u==0)goto end;
if(x1<=xd-270)
{p++;
setcolor(15);
settextstyle(0,0,3.9);
outtextxy(xd-245,y1,h);break;}

}
if(x1<=xd-300)
{setcolor(0);if(b%2)hin(x1);if(b%2==0)hin1(x1);goto ag;}

v=getch();
if(v==32)
{c=jump(b,x1,i);
if(c==0)
goto ag1;
}
else if(v=='0')
goto down;
else goto ag1;

end:
if(ss>S){S=ss;P+=S/2;}S1=ss;
settextstyle(0,0,1);outtextxy(xd+157,yd-15,"gameover");
while(!kbhit());
down:



return -1;

}