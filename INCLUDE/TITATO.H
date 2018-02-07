/*#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>*/
#define  C(x,y)   moveto(x,y)
int x1t,y1t;
class t3
{ char v[2],h[2],b[2];int c,x,y;
 public:char d[11];
  t3()
 { v[0]=186,h[0]=205,b[0]=206,c=0;v[1]='\0',h[1]='\0',b[1]='\0';}
void disp(char U[],int p)
 {cleardevice();
x=getmaxx()/2,y=getmaxy()/2;
setlinestyle(0,0,0);
setfillstyle(1,4);
setcolor(4);
bar3d(x-315,x-315,y+400,y+235,0,0);
setfillstyle(0,0);
bar3d(x-310,x-310,y+395,y+230,0,0);
for(int i=10;i>=0;i--)
{settextstyle(0,0,4+i%10);
setcolor(5+i);
outtextxy(x-285,y-205," TIC-TAC-TOE ");
delay(15);
if(i>0)
setcolor(0);
outtextxy(x-285,y-205," TIC-TAC-TOE ");

}
setcolor(4+i);
//outtextxy(x-285,y-200," __________ ");
settextstyle(0,0,1);
setlinestyle(0,0,3);
setcolor(3);
fillellipse(2*x-90,2*y-410,70,45);
line(x+260,y-225,x+190,y-115);

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

setcolor(5);
rectangle(x+150,x-30,y+385,y+220);
settextstyle(0,0,1);
setcolor(14);
outtextxy(x+197,y+65,"CONTROLS");
line(x+250,y+57,x+205,y+57);
setcolor(11);
setfillstyle(3,15);
setlinestyle(0,0,1);
//bar3d(x-300,x-230,y+210,y+80,10,1);
setlinestyle(0,0,3);
rectangle(x-300,x+50,y+220,y+220);

rectangle(x-300,x-300,y+220,y-165);
setcolor(2);
outtextxy(x+165,y+90,"Up");
outtextxy(x+165,y+115,"Down");
outtextxy(x+165,y+140,"Left");
outtextxy(x+165,y+165,"Right");
outtextxy(x+165,y+190,"Hit");
setcolor(1);
outtextxy(x+265,y+90,"W");
outtextxy(x+265,y+115,"S");
outtextxy(x+265,y+140,"A");
outtextxy(x+265,y+165,"D");
outtextxy(x+265,y+190,"X/O");
settextstyle(0,0,2);
setcolor(11);
outtextxy(x-285,y+145,U);
settextstyle(0,0,1);
setcolor(5);
outtextxy(x-285,y+175,"Instructions-");


for(int j=0; j<=1000; j++)
   putpixel(random(y-x+510)+x-302,random(y-x+350)+x-228,15);
x=(x+y)/2-150;
y=(getmaxx()/2+y)/2-120;
    setcolor(11);
    settextstyle(0,0,3);
    C(x+46,y);outtext(v);
    C(x+142,y);outtext(v);
    C(x+46,y+15);outtext(v);
    C(x+142,y+15);outtext(v);
    C(x-2,y+=30);outtext(h);outtext(h);outtext(b);outtext(h);outtext(h);outtext(h);outtext(b);outtext(h);outtext(h);
    C(x+46,y+15);outtext(v);
    C(x+142,y+15);outtext(v);
    C(x+46,y+=30);outtext(v);
    C(x+142,y);outtext(v);
    C(x+46,y+15);outtext(v);
    C(x+142,y+15);outtext(v);
    C(x+46,y+50);outtext(v);
    C(x+142,y+50);outtext(v);
    C(x-2,y+=35);outtext(h);outtext(h);outtext(b);outtext(h);outtext(h);outtext(h);outtext(b);outtext(h);outtext(h);
    C(x+46,y+=30);outtext(v);
    C(x+142,y);outtext(v);

 for( i=1;i<10;i++)
 d[i]=i;   }
 void input(int i,char k)
  {int x2t=getmaxx()/2,y2t=getmaxy()/2;
  d[i]=k;c++;if(i==1 ||i==7||i==4)x=(x2t+y2t)/2-150;else if(i==2 ||i==5||i==8)x=(x2t+y2t)/2-60;else x=(x2t+y2t)/2+30;
    if(i<4)y=(x2t+y2t)/2-120;else if(i<7)y=(x2t+y2t)/2-60;else y=(x2t+y2t)/2;char h[2];h[0]=k;h[1]='\0';
      setcolor(12);
    settextstyle(0,0,3.5);outtextxy(x,y,h);
      } }O;
  char exe(char d[])
  {
    for(int i=1;i<8;i++)
   if(d[i]==d[i+1] && d[i+1]==d[i+2] && (i==4 ||i==7||i==1))
      return d[i];
   else if(d[i]==d[i+3] && d[i+3]==d[i+6] && (i==1 ||i==2||i==3))
       return d[i];
   else if(d[i]==d[i+4] && d[i+4]==d[i+8] && i==1)
       return d[i];
   else if(d[i]==d[i+2] && d[i+2]==d[i+4] && i==3)
       return d[i];
    return 'c';}


int think(int i,char d[],int f[])
 { if(i%2 && i!=5)
   {d[5]='O';O.input(5,'O');
    f[2]=5; return 5;}
   if(i==5)
   {d[1]='O';O.input(1,'O');
    f[2]=1; return 1;}
   if(i%2==0)
   {d[5]='O';O.input(5,'O');
    f[2]=5; return 5;} }

 void think1(int l,char f[],int o[],int a)
 { char d[11];int c=0,g=0;
    for(int y=1;y<11;y++)
     d[y]=f[y];
      for( y=1;y<10;y++)
     { if(d[y]==y){d[y]='O';if(g==1)d[y]='X';
   for(int i=1;i<8;i++)
   if(d[i]==d[i+1] && d[i+1]==d[i+2] && (i==4 ||i==7||i==1))
     {f[y]='O';O.input(y,'O');o[a]=y;c++;goto end; }
   else if(d[i]==d[i+3] && d[i+3]==d[i+6] && (i==1 ||i==2||i==3))
      {f[y]='O';O.input(y,'O');o[a]=y;c++;goto end;  }
   else if(d[i]==d[i+4] && d[i+4]==d[i+8] && i==1)
      { f[y]='O';O.input(y,'O');o[a]=y;c++;goto end; }
   else if(d[i]==d[i+2] && d[i+2]==d[i+4] && i==3)
      {f[y]='O';O.input(y,'O');o[a]=y;c++;goto end;} d[y]=y; }
    }
    for( y=1;y<10;y++)
     { if(d[y]==y){d[y]='X';
   for(int i=1;i<8;i++)
   if(d[i]==d[i+1] && d[i+1]==d[i+2] && (i==4 ||i==7||i==1))
     {f[y]='O';O.input(y,'O');o[a]=y;c++;goto end; }
   else if(d[i]==d[i+3] && d[i+3]==d[i+6] && (i==1 ||i==2||i==3))
      {f[y]='O';O.input(y,'O');o[a]=y;c++;goto end;  }
   else if(d[i]==d[i+4] && d[i+4]==d[i+8] && i==1)
      { f[y]='O';O.input(y,'O');o[a]=y;c++;goto end; }
   else if(d[i]==d[i+2] && d[i+2]==d[i+4] && i==3)
      {f[y]='O';O.input(y,'O');o[a]=y;c++;goto end;} d[y]=y; }

    } end:
    if(c==0){
int v=l-2;
if(l==1)v=2;if(l<=3 && a>=4)v=9;

  ag:
  int y=v--;
  for(int g=1;g<10;g++)
   if(y==o[g] || y==10)goto ag;
   f[y]='O';O.input(y,'O');o[a]=y;}
}


check(char v)
{ int x2t=getmaxx()/2,y2t=getmaxy()/2;char h[2]={'_','\0'};
setcolor(0);settextstyle(0,0,3);outtextxy(x1t,y1t,h);
  v=toupper(v);
  if(v=='D' && x1t!=(x2t+y2t)/2+30){x1t+=90;return 0;}
  if(v=='W' && y1t!=(x2t+y2t)/2-120){y1t-=60;return 0;}
  if(v=='A' && x1t!=(x2t+y2t)/2-150){x1t-=90;return 0;}
  if(v=='S' && y1t!=(x2t+y2t)/2){y1t+=60;return 0;}
  setcolor(15);outtextxy(x1t,y1t,h);
  if(v=='X' || v=='O')return 2;
  else return 1;}

void pos(int &i)
{int x2t=getmaxx()/2,y2t=getmaxy()/2;
if (y1t==(x2t+y2t)/2-120 && x1t==(x2t+y2t)/2-150)i=1;
 if (y1t==(x2t+y2t)/2-120 && x1t==(x2t+y2t)/2-60)i=2;
 if (y1t==(x2t+y2t)/2-120 && x1t==(x2t+y2t)/2+30)i=3;
 if (y1t==(x2t+y2t)/2-60 && x1t==(x2t+y2t)/2-150)i=4;
 if (y1t==(x2t+y2t)/2-60 && x1t==(x2t+y2t)/2-60)i=5;
 if (y1t==(x2t+y2t)/2-60 && x1t==(x2t+y2t)/2+30)i=6;
 if (y1t==(x2t+y2t)/2 && x1t==(x2t+y2t)/2-150)i=7;
 if (y1t==(x2t+y2t)/2 && x1t==(x2t+y2t)/2-60)i=8;
 if (y1t==(x2t+y2t)/2 && x1t==(x2t+y2t)/2+30)i=9;
 }

tic3(char U[],int &P, int &S,int &S1)
{  int gd=DETECT,gm,x,y,T=0;clock_t e1=clock();int i7=0;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x2t=getmaxx()/2,y2t=getmaxy()/2;y1t=(x2t+y2t)/2-120,x1t=(x2t+y2t)/2-150;
 int i;char e=88,t[2]={7,'\0'},v;
  O.disp(U,P);


 int f[10]={0,0,0,0,0,0,0,0,0,0};

{ C(10,4);
int o[10]={0,0,0,0,0,0,0,0,0,0};char h[2]={'_','\0'};
setcolor(15);
    settextstyle(0,0,3);outtextxy(x1t,y1t,h);
 for(int a=1;a<10;a++)
 {C(x2t+155,y2t+10); setcolor(0);
 settextstyle(0,0,2);
a%2?outtext("C(O) turn"):outtext("P(X) turn");
 again1: setcolor(11);
 C(x2t+155,y2t+10);  settextstyle(0,0,2);
   a%2?outtext("P(X) turn"):outtext("C(O) turn");if(a%2==0)delay(150);
   C(x1t,y1t);
   if(a%2)
{while(!kbhit())
   {float C4=261.63,DS4=311.13,F4=349.23,C=523.25,DS=622.25,F=698.46,G=783.99,GS=783.99,AS=932.33,C6=1046.50;
 int d=200;if(i7==90)i7=0;
float a1[90]={F,DS,F,G,DS,C,0,C,0,C,F,DS,F,0,F,DS,F,C,DS,F,0,F,DS,F,G,DS,C,0,C,0,C,F,DS,F,0,F,DS,F,C4,DS4,F4,C6,AS,GS,F,G,DS,C,0,C,0,C,F,DS,F,0,F,DS,F,C4,DS4,F4,F,DS,F,G,DS,C,0,C,0,C,F,0,F,DS,F,DS,F,0};
float b1[90]={1,1,3,2,2,1.75,.25,.75,.25,2,1,1,1.75,.25,2,1,4,2,2,1.75,.25,1,1,3,2,2,1.75,.25,.75,.25,2,1,1,1.75,.25,2,1,4,2,2,2,1,1,1,2,2,2,1.75,.25,.75,.25,2,1,1,1.75,.25,2,1,4,2,2,2,1,1,3,2,2,1.75,.25,.75,.25,2,1.75,.25,1,1,2,1,2.5,1.5};
sound(a1[i7]);
delay(b1[i7++]*d);
nosound();

clock_t e=clock();int r;char U[5];
   r=(e -e1)/18;
   //delay(100);
   if(r==60){T++;r=0;e1=e;}
setcolor(3);
setfillstyle(0,0);
bar(x2t+230,y2t-60,x2t+270,y2t-45);
settextstyle(0,0,1);itoa(T,U,10);outtextxy(x2t+238,y2t-55,U);outtextxy(x2t+248,y2t-55,":");itoa(r,U,10);outtextxy(x2t+256,y2t-55,U);
}v=getch();}
   else if(a==2){think(i,O.d,o);}
   else
   {think1(i,O.d,o,a);}
  if(a%2){
   i=check(v);
   if(i==0)
   {
   setcolor(15);
    settextstyle(0,0,3);outtextxy(x1t,y1t,h);}

   if(i==2)
   {pos(i);
   for(int g=1;g<10;g++)
   if(i==o[g]){setcolor(4);settextstyle(0,0,2);outtextxy(x2t+157,y2t-10,"ERROR");getch();setcolor(0);outtextxy(x2t+157,y2t-10,"ERROR");goto again1;}O.input(i,e);o[a]=i;}else if(i<=1)goto again1;}
   t[0]=exe(O.d);

    if(t[0]=='X'||t[0]=='O')
    {if(t[0]=='X'){if(15-i>S)S=15-i;S1=15-i;P=P+S;}
    C(x2t+155,y2t+10); setcolor(0);
 settextstyle(0,0,2);
a%2?outtext("C(O) turn"):outtext("P(X) turn");
C(x2t+158,y2t+10); setcolor(10);
 settextstyle(0,0,2);
 outtext(t); outtext(" WINS");if(t[0]=='O'){sound(329);delay(100);nosound();sound(293);delay(100);nosound();}
if(t[0]=='X'){sound(293);delay(100);nosound();sound(329);delay(100);nosound();}

goto down;}

}
if(t[0]=='c')
 {C(x2t+155,y2t+10); setcolor(0);
 settextstyle(0,0,2);
a%2?outtext("C(O) turn"):outtext("P(X) turn");
C(x2t+155,y2t+10); setcolor(10);
 settextstyle(0,0,2);
 outtext("GAME TIE");
goto down;}
}
  down: getch();


  return -1;


}