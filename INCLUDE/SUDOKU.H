/*#include<iostream.h>
#include<stdio.h>
#include<dos.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<graphics.h>
#include<time.h> */

#define C(x,y)   moveto(x,y)
int x1s=11,y1s=6,u[10][10],xs,ys;char g[2]={4,'\0'};
 class sudoku
 {
   int xs;
   char a[2],b[2],c[2],d[2];
   public:int ch[10][10],a1[10][10];
   sudoku()
   {a[0]=205,b[0]=203,c[0]=186,d[0]=206;xs=6;a[1]='\0',b[1]='\0',c[1]='\0',d[1]='\0';
   unsigned int t,i,r;randomize();t=random(12)+rand()%53+1+random(23);
    int b[9][9]={   {3,7,1,6,8,2,4,5,9},
		   {9,5,2,7,4,3,6,1,8},
		   {6,4,8,1,5,9,2,7,3} ,
		   {5,1,4,8,3,7,9,2,6},
		   {2,8,6,4,9,1,5,3,7},
		   {7,3,9,5,2,6,8,4,1},
		   {1,2,5,3,6,8,7,9,4},
		   {8,9,7,2,1,4,3,6,5},
		   {4,6,3,9,7,5,1,8,2}};
    if(t%2==0)
    for( i=1;i<10;i++)
    for( r=1;r<10;r++)
    a1[10-i][r]=b[i-1][r-1];
    else if(t%3==0)
    for(i=1;i<10;i++)
    for(r=1;r<10;r++)
    a1[i][r]=b[i-1][r-1];
    else
    for(i=1;i<10;i++)
    for(r=1;r<10;r++)
    a1[i][10-r]=b[i-1][r-1];






    for( i=1;i<10;i++)
    for( r=1;r<10;r++)
    ch[i][r]=0,u[i][r]=0;


   }

void disp(char U[],int S)
{cleardevice();
xs=getmaxx()/2,ys=getmaxy()/2;
setlinestyle(0,0,0);
setfillstyle(1,4);
setcolor(4);
bar3d(xs-315,xs-315,ys+400,ys+235,0,0);
setfillstyle(0,0);
bar3d(xs-310,xs-310,ys+395,ys+230,0,0);
for(int i=10;i>=0;i--)
{settextstyle(0,0,4+i%10);
setcolor(5+i);
outtextxy(xs-285,ys-200,"   SUDOKU    ");
delay(15);
if(i>0)
setcolor(0);
outtextxy(xs-285,ys-200,"   SUDOKU    ");
}
setcolor(4+i);
//outtextxy(xs-285,ys-198,"   ______   ");

setlinestyle(0,0,3);
setcolor(3);
fillellipse(2*xs-90,2*ys-410,70,45);
line(xs+260,ys-225,xs+190,ys-115);

settextstyle(0,0,1);
setcolor(10);
rectangle(xs+155,xs-190,ys+385,ys+40);
setcolor(14);
outtextxy(xs+185,ys-97,"Score Board");
line(xs+260,ys-104,xs+200,ys-104);
setcolor(12);
delay(150);
outtextxy(xs+162,ys-75,"Your Score");
delay(150);
outtextxy(xs+162,ys-55,"Time");
delay(150);
outtextxy(xs+162,ys-35,"High Score");
delay(150);
setcolor(5);
rectangle(xs+155,xs-30,ys+385,ys+220);
settextstyle(0,0,1);
setcolor(14);
outtextxy(xs+197,ys+65,"CONTROLS");
line(xs+250,ys+57,xs+205,ys+57);

setcolor(2);
outtextxy(xs+165,ys+90,"Move");
outtextxy(xs+165,ys+115,"Hit");
outtextxy(xs+165,ys+140,"Mark");
outtextxy(xs+165,ys+165,"Check");
outtextxy(xs+165,ys+190,"Submit");
setcolor(1);
outtextxy(xs+250,ys+90,"WASD");
outtextxy(xs+250,ys+115,"1-9");
outtextxy(xs+250,ys+140,"<space>");
outtextxy(xs+250,ys+165,"I");
outtextxy(xs+250,ys+190,"O");
settextstyle(0,0,2);
setcolor(11);
outtextxy(xs-285,ys+155,U);
settextstyle(0,0,1);
setcolor(5);
outtextxy(xs-285,ys+185,"Instructions-");


setcolor(11);
setfillstyle(3,15);
setlinestyle(0,0,1);
//bar3d(xs-300,xs-230,ys+210,ys+80,10,1);
setlinestyle(0,0,3);
rectangle(xs-300,xs+70,ys+220,ys+220);

rectangle(xs-300,xs-300,ys+220,ys-145);

char t[2]={201,'\0'};int j=xs-220;
    setcolor(12);
    settextstyle(0,0,2);
    C(xs-297,j);
    outtext(t);
   for(int e=0;e<9;e++)
   {outtext(a);outtext(a);if(e!=8)outtext(b);};t[0]=187;outtext(t);
   setcolor(11);
    for( i=0;i<9;i++)
    { C(xs-297,j+=15);
     for(int r=0;r<9;r++)
   {if(r==0||r==3 ||r==6)setcolor(12);else setcolor(11);
    outtext(c);outtext("  ");}setcolor(12);
    outtext(c);
      C(xs-297,j+=15);
	if(i!=8){t[0]=204;outtext(t);}if(i==8){t[0]=200;outtext(t);}
	setcolor(11);
	if(i==2 || i==5)setcolor(12);

     for(r=0;r<9;r++)
  if(i==8){setcolor(12);outtext(a);outtext(a);if(r!=8){t[0]=202;outtext(t);}}
  else {outtext(a);outtext(a);if(r!=8){if(r==2 ||r==5 ||i==2 ||i==5)setcolor(12);else setcolor(11);outtext(d);if(i==2 ||i==5)setcolor(12);else setcolor(11);}}setcolor(12);if(i!=8){t[0]=185;outtext(t);}if(i==8){t[0]=188;outtext(t);}
   }


   }
   r1input()
 {   int ys[4]={0,0,0,0},r,m;
    for(int i=1;i<5;i++,ys[0]=0,ys[1]=0,ys[2]=0)
    {   switch(i)
       {case 1:
	ys[0]=2,ys[1]=8,m=0;break;
	case 2:
	ys[0]=3,ys[1]=5,ys[2]=7,m=1;break;
	case 3:
	ys[0]=1,ys[1]=4,ys[2]=6,ys[3]=9,m=2;break;
	case 4:
	ys[0]=3,ys[1]=4,ys[2]=6,ys[3]=7,m=2;break;}
      for(r=0;r<2+m;r++)
     {input(a1[i][ys[r]],ys[r],i);ch[i][ys[r]]=1;u[i][ys[r]]=a1[i][ys[r]];}
     for(r=0;r<3+m;r++)
     {input(a1[10-i][10-ys[r]],10-ys[r],10-i);ch[10-i][10-ys[r]]=1;u[10-i][10-ys[r]]=a1[10-i][10-ys[r]];}}
    ys[0]=2,ys[1]=8;
    for(r=0;r<2;r++)
      {ag1: randomize();
      // ys[r]=rand()%9+1;
       for(int t=r-1;t>=0;t--)
       if(ys[r]==ys[t])goto ag1;}
      for(r=0;r<2;r++)
     {input(a1[5][ys[r]],ys[r],5);ch[5][ys[r]]=1;u[5][ys[r]]=a1[5][ys[r]];
     input(a1[5][10-ys[r]],10-ys[r],5);ch[5][10-ys[r]]=1;u[5][10-ys[r]]=a1[5][10-ys[r]];}}



}S;

void input(int v,int xa,int ya)
{int y2=getmaxx()/2-205+(ya-1)*30,x2=getmaxx()/2-273+48*(xa-1);char g[2];g[0]=v+48;g[1]='\0';
 setcolor(11);
 C(x2,y2);
 outtext(g);}

check1(char v)
{ char h[2]={'_','\0'};
setcolor(0);settextstyle(0,0,2);outtextxy(x1s,y1s,h);
  v=toupper(v);
  if(v=='D' && x1s<xs+111){x1s+=48;return 0;}
  if(v=='W' && y1s>xs-205){y1s-=30;return 0;}
  if(v=='A' && x1s>xs-273){x1s-=48;return 0;}
  if(v=='S' && y1s<xs+35){y1s+=30;return 0;}
  setcolor(15);outtextxy(x1s,y1s,h);
  if(v<=57 && v>=49)return 2;
  else return 1;}


sudo(char U[],int &P, int &s,int &S1)
{ int gd=DETECT,gm,a,b,qz=0,T=0;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
xs=getmaxx()/2;ys=getmaxy()/2;x1s=xs-273,y1s=xs-205;
 char h[2]={'_','\0'},h1[2]={5,'\0'},v,time[10];

  int i,x2,y2,p,q,r,i4=0,tim;S.disp(U,P);S.r1input();
xs=getmaxx()/2;ys=getmaxy()/2;
setcolor(15);outtextxy(x1s,y1s,h);
clock_t e1=clock();
up:C(x1s,y1s);
float C=523.25,D=587.33,DS=622.25,F=698.46,G=783.99,GS=830.61,AS=932.33;
//C=261.63,D=293.66,DS=311.13,F=349.23,G=392,GS=415.30,AS=466.16;
int d=400;

float a14[50]={G,0,G,0,G,0,AS,0,GS,0,G,0,G,0,G,0,AS,0,GS,0,D,0,D,0,D,0,F,0,DS,0,C,0,C,0,D,0,D,0,DS,0,DS,0,F,0,DS,0};
float b14[50]={1.5,.5,1.5,.5,1.5,.5,.75,.25,.75,.25,1.5,.5,1.5,.5,1.5,.5,.75,.25,.75,.25,1.5,.5,1.5,.5,1.5,.5,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25};
while(!kbhit())
{
sound(a14[i4]);
delay(b14[i4]*d);
nosound();
i4++;
if(i4==46)
{i4=0;
}
   clock_t e=clock();int r;char U[5];
   r=(e -e1)/18;

   if(r==60){T++;r=0;e1=e;}
setcolor(3);
setfillstyle(0,0);
bar(xs+230,ys-60,xs+270,ys-45);
settextstyle(0,0,1);itoa(T,U,10);outtextxy(xs+238,ys-55,U);outtextxy(xs+248,ys-55,":");itoa(r,U,10);outtextxy(xs+256,ys-55,U);
}v=getch();i=check1(v);
 x2=(x1s-xs+273)/48+1;
  y2=(y1s-xs+205)/30+1;
 g[0]=v;
 if(v==32)
 {if(S.ch[y2][x2]==0){if(u[y2][x2]!=0){setcolor(0);h1[0]=u[y2][x2]+48;outtextxy(x1s,y1s,h1);}if(u[y2][x2]==-1){setcolor(0);h1[0]='?';outtextxy(x1s,y1s,h1);u[y2][x2]=0;}else {g[0]='?';setcolor(14);outtextxy(x1s,y1s,g);u[y2][x2]=-1;}}goto up;}

 if(v=='o')goto dow;
 else if(v=='i')goto dow1;
 else if(v=='0')return -1;
 if(i==0 ||i==1){setcolor(15);settextstyle(0,0,2);outtextxy(x1s,y1s,h);goto up;}
 else if(i==2)
 {if(S.ch[y2][x2]==0){if(u[y2][x2]==-1){setcolor(0);h1[0]='?';outtextxy(x1s,y1s,h1);u[y2][x2]==-2;}else if(u[y2][x2]!=0){setcolor(0);h1[0]=u[y2][x2]+48;outtextxy(x1s,y1s,h1);}setcolor(15);outtextxy(x1s,y1s,g);u[y2][x2]=v-48;}goto up;}


dow1:
 for( a=1;a<10;a++)
    for( b=1;b<10;b++)
 {if(u[a][b]>0)if(S.a1[a][b]!=u[a][b]){qz++;
 setcolor(11);
settextstyle(0,0,3);
outtextxy(xs+160,ys+10,"WRONG");
sound(329*2);
delay(200);
nosound();
sound(293*2);
delay(200);
nosound();
delay(100);setcolor(0);outtextxy(xs+160,ys+10,"WRONG");}
  else continue;}
if(qz==0){setcolor(11);
settextstyle(0,0,2);
outtextxy(xs+160,ys+10,"CORRECT");
sound(293*2);
delay(200);
nosound();
sound(329*2);
delay(200);
nosound();

delay(100);setcolor(0);outtextxy(xs+160,ys+10,"CORRECT");}
qz=0;
goto up;
dow:
 for( a=1;a<10;a++)
    for( b=1;b<10;b++)
    if(u[a][b]==0){setcolor(11);
settextstyle(0,0,1);
outtextxy(xs+160,ys+10,"INCOMPLETE");delay(500);setcolor(0);outtextxy(xs+160,ys+10,"INCOMPLETE");goto up;}
   for( a=1;a<10;a++)
    for( b=1;b<10;b++)
   if(!(S.a1[a][b]==u[a][b])){setcolor(11);
settextstyle(0,0,3);
outtextxy(xs+160,ys+10,"WRONG");delay(500);setcolor(0);outtextxy(xs+160,ys+10,"WRONG");goto up;}

setcolor(11);
settextstyle(0,0,3);
outtextxy(xs+160,ys+10,"COMPLETE");
if(T<5)S1=200;
else if(T>=5 && T<10)S1=200-5*T;
else if(T>=20)S1=50-T;
else if(T>=10 && T<15)S1=150-5*T;
else if(T>=15 && T<20)S1=100-5*T;
if(S1<20)S1=20;
if(s<S1)s=S1;P+=S1;
int x1s=11,y1s=6,u[10][10],xs,ys;char g[2]={4,'\0'};

down:
 return 0;
 }