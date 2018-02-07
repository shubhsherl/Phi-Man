/*#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include<stdio.h>
#include<dos.h>  */
void go()
{int x,y;
for(int i=150;i>=0;i-=3
)
{x=getmaxx()/2-28;
y=getmaxy()/2;
setcolor(4);
settextstyle(0,0,6);
outtextxy(x-170-i,y-15,"G");
outtextxy(x-120-i,y-15+i,"A");
outtextxy(x-70-i,y-15-i,"M");
//settextstyle(0,0,i+6);
outtextxy(x-20-i*2,y-15-i/4,"E");
settextstyle(0,0,6);
outtextxy(x+30+i,y-15-i,"O");

outtextxy(x+80+i,y-15+i,"V");
outtextxy(x+130+i,y-15,"E");
outtextxy(x+180+i,y-15-i*2,"R");
delay(10);
if(i>0)
{setcolor(0);
outtextxy(x-170-i,y-15,"G");
outtextxy(x-120-i,y-15+i,"A");
outtextxy(x-70-i,y-15-i,"M");
settextstyle(0,0,6);
outtextxy(x-20-i*2,y-15-i/4,"E");
settextstyle(0,0,6);
outtextxy(x+30+i,y-15-i,"O");
outtextxy(x+80+i,y-15+i,"V");
outtextxy(x+130+i,y-15,"E");
outtextxy(x+180+i,y-15-i*2,"R");
}
}
delay(500);
}
class hscore2
{public:char n[8][5][12];int s[8][5];};

void update(int p,char U[],int i)
{hscore2 H;
fstream sc;sc.open("score.dat",ios::in|ios::out|ios::binary);
sc.seekg(0,ios::beg);
 sc.read((char*)&H,sizeof(H));sc.seekg(0,ios::beg);

 for(int r=0;r<5;r++)
  if(p>=H.s[i][r] && strcmpi(H.n[i][r],U)!=0)
   {for(int y=4;y>r;y--)
    {char N[15];int t;
     strcpy(N,H.n[i][y-1]);t=H.s[i][y-1];
     strcpy(H.n[i][y],N);H.s[i][y]=t;}
    strcpy(H.n[i][r],U);H.s[i][r]=p;r=5;
    }
sc.write((char*)&H,sizeof(H));

int x=getmaxx()/2,y=getmaxy()/2;
setcolor(3);
 for(int g=0;g<5;g++)
 {setcolor(5);
settextstyle(0,0,1);
outtextxy(x-110,y+120+g*15,H.n[i][g]);
char n[5];itoa(H.s[i][g],n,10);setcolor(4);
outtextxy(x+70,y+120+g*15,n);
}





sc.close();
}



gover(int S,int I,char U[])
{
int gd=DETECT,gm,x,y,i,maxx,maxy;update(S,U,I);
initgraph(&gd,&gm,"C:\\turboC3\\BGI");
//setbkcolor(0);
x=getmaxx()/2-28;
y=getmaxy()/2;
maxx=2*x;maxy=2*y;
go();
setcolor(4);
for(i=0;i<100;i+=2)
{outtextxy(x-170,y-15-i,"G");
outtextxy(x-120,y-15-i,"A");
outtextxy(x-70,y-15-i,"M");
outtextxy(x-20,y-15-i,"E");
outtextxy(x+30,y-15-i,"O");
outtextxy(x+80,y-15-i,"V");
outtextxy(x+130,y-15-i,"E");
outtextxy(x+180,y-15-i,"R");
//delay();
}
for(i=0;i<=100;i+=5)
{setcolor(4);
outtextxy(x-170,y-15-i,"G");
outtextxy(x-120,y-15-i,"A");
outtextxy(x-70,y-15-i,"M");
outtextxy(x-20,y-15-i,"E");
outtextxy(x+30,y-15-i,"O");
outtextxy(x+80,y-15-i,"V");
outtextxy(x+130,y-15-i,"E");
outtextxy(x+180,y-15-i,"R");
//delay(5);
if(i<100)
{setcolor(0);
outtextxy(x-170,y-15-i,"G");
outtextxy(x-120,y-15-i,"A");
outtextxy(x-70,y-15-i,"M");
outtextxy(x-20,y-15-i,"E");
outtextxy(x+30,y-15-i,"O");
outtextxy(x+80,y-15-i,"V");
outtextxy(x+130,y-15-i,"E");
outtextxy(x+180,y-15-i,"R");
}}
int x1=x+23;
rectangle(x1-150,y+220,x1+150,y);
rectangle(x1-145,y+215,x1+145,y+5);
setcolor(12);
settextstyle(0,0,2);
outtextxy(x-100,y+20,"Your Score:"); char D[5];itoa(S,D,10);
outtextxy(x+120,y+20,D);

settextstyle(0,0,1);
setcolor(5);
rectangle(x1-140,y+50,x1-30,y+80);
outtextxy(x1-125,y+61,"Play Again");
outtextxy(x1-125,y+61,"_");
settextstyle(0,0,2);

setcolor(1);
rectangle(x1-20,y+50,x1+140,y+80);
outtextxy(x1-10,y+58,"GAME ROOM");
outtextxy(x1-10,y+58,"_");
setcolor(3);
rectangle(x1-140,y+200,x1+140,y+112);
rectangle(x1-135,y+205,x1+135,y+107);
outtextxy(x1-77,y+90,"HIGHSCORES");




update(S,U,I);




int qw=0;
ag:char v=getch();
 if(v=='P'||v=='p')
{qw=1; setcolor(2);settextstyle(0,0,1);
rectangle(x1-140,y+50,x1-30,y+80);
outtextxy(x1-125,y+61,"Play Again");
outtextxy(x1-125,y+61,"_");
settextstyle(0,0,2);
setcolor(1);
rectangle(x1-20,y+50,x1+140,y+80);
outtextxy(x1-10,y+58,"GAME ROOM");
outtextxy(x1-10,y+58,"_");
setcolor(3);
goto ag;}
else if(v=='g'||v=='G')
{qw=2; setcolor(5);settextstyle(0,0,1);
rectangle(x1-140,y+50,x1-30,y+80);
outtextxy(x1-125,y+61,"Play Again");
outtextxy(x1-125,y+61,"_");
settextstyle(0,0,2);
setcolor(14);
rectangle(x1-20,y+50,x1+140,y+80);
outtextxy(x1-10,y+58,"GAME ROOM");
outtextxy(x1-10,y+58,"_");
setcolor(3);
goto ag;}
else if(qw>0 && v==13)
return qw-3;
else goto ag;



}