/*#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<ctype.h>
#include<stdio.h>
#include<dos.h>  */
int a[15],j=0,n;
void laysd(char Un[],int P)
{int x,y;char p[5];itoa(P,p,10);
x=getmaxx()/2;
y=getmaxy()/2;

setlinestyle(0,0,0);
setfillstyle(1,4);
setcolor(4);
bar3d(x-315,x-315,y+400,y+235,0,0);
setfillstyle(0,0);
bar3d(x-310,x-310,y+395,y+230,0,0);
setlinestyle(0,0,3);
setcolor(3);
fillellipse(2*x-90,2*y-410,70,45);
line(x+260,y-225,x+190,y-115);
settextstyle(0,0,4);

for(int i=10;i>=0;i--)
{settextstyle(0,0,4+i%10);
setcolor(5+i);
outtextxy(x-285,y-205,"   SOUNDO");
delay(15);
if(i>0)
setcolor(0);
outtextxy(x-285,y-205,"   SOUNDO");

}
setlinestyle(0,0,3);
setcolor(3);
fillellipse(2*x-90,2*y-410,70,45);
line(x+260,y-225,x+190,y-115);
settextstyle(0,0,1);

setcolor(10);
rectangle(x+150,x-190,y+385,y+40);
setcolor(14);
outtextxy(x+185,y-97,"Score Board");
line(x+260,y-104,x+200,y-104);
setcolor(12);
delay(150);
outtextxy(x+157,y-75,"Your Score");
delay(150);
outtextxy(x+157,y-55,"Time");
delay(150);
outtextxy(x+157,y-35,"Lives");
delay(150);
outtextxy(x+157,y-15,"Coins");outtextxy(x+207,y-15,p);

delay(150);
outtextxy(x+157,y+5,"High Score");
delay(150);

setcolor(5);
rectangle(x+150,x-30,y+385,y+220);
settextstyle(0,0,1);
setcolor(14);
outtextxy(x+197,y+65,"CONTROLS");
line(x+250,y+57,x+205,y+57);

setcolor(11);
//setfillstyle(9,15);
setlinestyle(0,0,1);
for(int j=0;j<1000;j++)
{putpixel(y+220-random(430),y+80-random(230),11);}
setlinestyle(0,0,3);
rectangle(x-300,x+10,y+220,y+220);
rectangle(x-300,x-300,y+220,y-165);
setcolor(2);
outtextxy(x+165,y+90,"GREEN");
outtextxy(x+165,y+115,"RED");
outtextxy(x+165,y+140,"BLUE");
outtextxy(x+165,y+165,"YELLOW");
outtextxy(x+165,y+190,"EXIT");
setcolor(1);
outtextxy(x+265,y+90,"Q");
outtextxy(x+265,y+115,"A");
outtextxy(x+265,y+140,"W");
outtextxy(x+265,y+165,"S");
outtextxy(x+265,y+190,"0");
settextstyle(0,0,2);
setcolor(11);
outtextxy(x-285,y+105,Un);
settextstyle(0,0,1);
setcolor(5);
outtextxy(x-285,y+135,"Instructions-");

}
void sq()
{int x,y;
x=getmaxx()/2;
y=getmaxy()/2;
setfillstyle(1,2);
bar(x+100-200,x-100-20,y+100-200,y-100-20);
setfillstyle(1,4);
bar(x+100-200,x-20,y+100-200,y-20);
setfillstyle(1,1);
bar(x+200-200,x-100-20,y+200-200,y-100-20);
setfillstyle(1,14);
bar(x+200-200,x-20,y+200-200,y-20);
}
void wh(char v,int p)
{int x,y;
x=getmaxx()/2;
y=getmaxy()/2;
setfillstyle(1,p);
setcolor(0);
setlinestyle(0,0,3);
if(v=='Q')
{bar3d(x+80-200,x-120-20,y+120-200,y-80-20,0,0);}
if(v=='W')
{bar3d(x+180-200,x-120-20,y+220-200,y-80-20,0,0);}
if(v=='A')
{bar3d(x+80-200,x-20-20,y+120-200,y+20-20,0,0);}
if(v=='S')
{bar3d(x+180-200,x-20-20,y+220-200,y+20-20,0,0);}
}
int so(int s)
{  if(s==1)
  { sound(200);
   delay(300);
   nosound();
   return 0;
}  else if(s==2)
   {sound(300);
   delay(300);
   nosound();
   return 0;
}else if(s==3)
  { sound(400);
   delay(300);
   nosound();
   return 0;
}else if(s==4)
   {sound(500);
   delay(300);
   nosound();
   return 0;
}
}

void in()
{int r,p;char v;
randomize();
r=(rand()%4)+1;
switch(r)
{case 1:
{v='Q';
a[j]=1;
}
break;
case 2:
{v='W';
a[j]=2;
}
break;
case 3:
{v='A';
a[j]=3;}
break;
case 4:
{v='S';
a[j]=4;}
break;
}
n=j+1;
a[++j]=0;
}
void disp()
{int i,g,p;char v;
delay(1000);
p=15;
for(i=0,g=0;i<100;i++,g++)
{if(a[i]==1)
{v='Q';
wh(v,p);
so(1);
}
if(a[i]==2)
{v='W';
wh(v,p);
so(2);}
if(a[i]==3)
{v='A';
wh(v,p);
so(3);}
if(a[i]==4)
{v='S';
wh(v,p);
so(4);}
if(a[i]==0)
{break;
}
delay(500);
sq();
delay(100);
}}
soun(char Un[],int &P, int &S,int &S1)
{int gd=DETECT,gm,x,y,m,i,p,b[100],T=2,s=0;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
laysd( Un, P);
sq();
char U[5]={'0','\0'};        outtextxy(x+247,y-75,U);
char v,T1[4]={234,234,234,'\0'};
outtextxy(x+215,y-35,T1);int t=0;
up:
while(t<=j)
{in();
disp();
for(i=0;i<=t;i++)
{v=getch();v=toupper(v);
if(v=='Q')
{b[i]=1;
so(1);
wh(v,15);}
else if(v=='W')
{b[i]=2;
so(2);
wh(v,15);}
else if(v=='A')
{b[i]=3;
so(3);
wh(v,15);}
else if(v=='S')
{b[i]=4;
so(4);
wh(v,15);}
else if(v=='0')
{setcolor(14);outtextxy(x+157,y+25,"Sure to Quit? Y\N");
sti:v=getch();
if(v=='y' || v=='Y')return -1;
else if(v=='n' || v=='N'){setcolor(0);outtextxy(x+157,y+25,"Sure to Quit? Y\N");goto up;}
else goto sti;}
else
{outtext("INVALID");}
delay(500);
sq();}

for(m=0;m<=t;m++)
{if(b[m]!=a[m])
{setcolor(15);
outtextxy(x+95-200,y-13-20,"WRONG");
delay(100);setcolor(0);outtextxy(x+215,y-35,T1);
T1[T]='\0';T--;
outtextxy(x+95-200,y-13-20,"WRONG");setcolor(15);outtextxy(x+215,y-35,T1);
if(T==-1){getch();return -1;if(s>S){S=s;}P+=s; S1=s;}goto up;
}
}
//outtextxy(0,0,"COUNT--");
//gotoxy(7,0);
//cout<<t+1;
setcolor(0);outtextxy(x+247,y-75,U);
t++;s+=t;itoa(s,U,10); setcolor(5);
outtextxy(x+247,y-75,U);}

}