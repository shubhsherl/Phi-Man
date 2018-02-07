#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<time.h>

#define pi  M_PI
int xo,yo,i=0;double x1,x2,y1,y2;
int co[70][4]=
{
{124,394,233,383},
{125,400,232,377},
{127,406,230,371},
{130,412,227,365},
{133,417,224,360},
{136,422,221,355},
{140,426,217,351},
{145,430,212,347},
{150,434,207,343},
{155,437,202,340},
{160,439,197,338},
{166,441,191,336},
{172,442,185,335},
{178,443,179,334},
{184,443,173,334},
{190,442,167,335},
{196,441,161,336},
{201,439,156,338},
{207,437,150,340},
{212,434,145,343},
{217,430,140,347},
{221,426,136,351},
{225,422,132,355},
{229,417,128,360},
{232,412,125,365},
{234,406,123,371},
{236,400,121,377},
{237,394,120,383},
{238,389,119,388},
{238,383,119,394},
{237,377,120,400},
{236,371,121,406},
{234,365,123,412},
{232,359,125,418},
{229,354,128,423},
{225,349,132,428},
{221,345,136,432},
{217,341,140,436},
{212,337,145,440},
{207,334,150,443},
{201,332,156,445},
{196,330,161,447},
{190,329,167,448},
{184,328,173,449},
{178,328,179,449},
{172,329,185,448},
{166,330,191,447},
{160,332,197,445},
{155,334,202,443},
{150,337,207,440},
{145,341,212,436},
{140,345,217,432},
{136,349,221,428},
{133,354,224,423},
{130,359,227,418},
{127,365,230,412},
{125,371,232,406}
};
void lay(char U[],int P)
{setlinestyle(0,0,0);
setfillstyle(1,4);
setcolor(4);
bar3d(xo-315,xo-315,yo+400,yo+235,0,0);
setfillstyle(0,0);
bar3d(xo-310,xo-310,yo+395,yo+230,0,0);
for(int i=10;i>=0;i--)
{settextstyle(0,0,4+i%10);
setcolor(5+i);
outtextxy(xo-285,yo-205,"    DUOO   ");
delay(15);
if(i>0)
setcolor(0);
outtextxy(xo-285,yo-205,"    DUOO   ");
}
setcolor(4+i);
//outtextxy(xo-285,yo-198,"    ____   ");
settextstyle(0,0,1);

setlinestyle(0,0,3);
setcolor(3);
fillellipse(2*xo-90,2*yo-410,70,45);
line(xo+260,yo-225,xo+190,yo-115);
setcolor(10);
rectangle(xo+150,xo-190,yo+385,yo+40);
setcolor(14);
int x5=xo+50;
outtextxy(x5+135,yo-97,"Score Board");
line(x5+207,yo-104,x5+147,yo-104);
setcolor(12);
delay(150);
outtextxy(x5+107,yo-75,"Your Score");
delay(150);
outtextxy(x5+107,yo-55,"Time");
setcolor(11);
settextstyle(0,0,2);
outtextxy(x5+105,yo+10,U);
setcolor(5);
rectangle(xo+150,xo-30,yo+385,yo+220);
settextstyle(0,0,1);
setcolor(14);
outtextxy(xo+197,yo+65,"CONTROLS");
line(xo+250,yo+57,xo+205,yo+57);

//rectangle(xo-3000,xo+10,yo+220,yo+220);
//rectangle(xo-300,xo-300,yo+220,yo-165);
setcolor(2);
outtextxy(xo+165,yo+95,"LEFT");
outtextxy(xo+165,yo+135,"RIGHT");
outtextxy(xo+165,yo+180,"EXIT");
//outtextxy(xo+165,yo+165,"YELLOW");
//outtextxy(xo+165,yo+190,"EXIT");
setcolor(1);
outtextxy(xo+265,yo+95,"A");
outtextxy(xo+265,yo+135,"D");
outtextxy(xo+265,yo+180,"0");
//outtextxy(xo+265,yo+165,"S");
//outtextxy(xo+265,yo+190,"0");
settextstyle(0,0,2);
setcolor(11);

settextstyle(0,0,1);
//setcolor(5);
//outtextxy(xo-285,yo+135,"Instructions-");
setcolor(11);
setfillstyle(3,15);
setlinestyle(0,0,1);
//bar3d(xo-300,xo-230,yo+210,yo+80,10,1);
setlinestyle(0,0,3);
//rectangle(xo-300,xo+10,yo+220,yo+220);

rectangle(xo-300,xo-300,yo+220,yo-165);
}

int rot(char v)
{setcolor(8);setlinestyle(2,3,1);
circle(xo-140,yo+150,60);

if(v=='a')
{setcolor(0);setfillstyle(1,0);
pieslice(x2,y2,0,360,10);
setfillstyle(1,0);
pieslice(x1,y1,0,360,10);
setcolor(8);setlinestyle(2,3,1);
circle(xo-140,yo+150,60);
if(i==56)i=-1;
i++;x1=co[i][0],y1=co[i][1],x2=co[i][2],y2=co[i][3];
//t+=5;tr=(t/180)*pi;q+=5;qr=(q/180)*pi;x1+=5*sin(tr);y1+=5*cos(tr);x2+=5*sin(qr);y2+=5*cos(qr);
setcolor(0);
setfillstyle(1,4);
pieslice(x2,y2,0,360,10);
setfillstyle(1,1);
pieslice(x1,y1,0,360,10);
return 1;

}
if(v=='d')
{setcolor(0);setfillstyle(1,0);
pieslice(x2,y2,0,360,10);
setfillstyle(1,0);
pieslice(x1,y1,0,360,10);
setcolor(8);setlinestyle(2,3,1);
circle(xo-140,yo+150,60);
if(i==0)i=57;
i--;x1=co[i][0],y1=co[i][1],x2=co[i][2],y2=co[i][3];
//t-=5;tr=(t/180)*pi;q-=5;qr=(q/180)*pi;x1-=5*sin(tr);y1-=5*cos(tr);x2-=5*sin(qr);y2-=5*cos(qr);
setcolor(0);
setfillstyle(1,4);
pieslice(x2,y2,0,360,10);
setfillstyle(1,1);
pieslice(x1,y1,0,360,10);
return 1;}
return 0;
}
void box(int b[][4])
{int a[10][4]={{xo-135,yo-145,xo-25,yo-125},
	       {xo-135,yo-145,xo-25,yo-125}, //ll
	       {xo-135,yo-145,xo-25,yo-125},
	       {xo-250,yo-145,xo-140,yo-125},  //lr
	       {xo-125,yo-150,xo-50,yo-90},      //bl
	       {xo-220,yo-150,xo-145,yo-90},    //br
	       {xo-180,yo-145,xo-100,yo-125},   //sc
	       {xo-135,yo-145,xo-55,yo-125},    //sl
	       {xo-250,yo-145,xo-140,yo-125},
	       {xo-220,yo-145,xo-140,yo-125}};   //sr
for(int i=0;i<10;i++)
for(int r=0;r<4;r++)
b[i][r]=a[i][r];

setfillstyle(1,15);
bar3d(xo-135,yo-145,xo-55,yo-125,0,0);
}

check(int a[][4],int r)
{for(int i=0;i<r;i++)
{if(x1+8>a[i][0] && x1-8<a[i][2] && y1+10>a[i][1] && y1-10<a[i][3])
 return 1+i;
if(x2+8>a[i][0] && x2-8<a[i][2] && y2+10>a[i][1] && y2-10<a[i][3])
 return 1+i;
}
return 0;
}
void main(char U[],int &P, int &S,int &S1)
{int gd=DETECT,gm,i,r,d=0,a[10][4],b[10][4],T=0,M;S1=0;

initgraph(&gd,&gm,"c:\\turboc3\\bgi");
xo=getmaxx()/2;
yo=getmaxy()/2;
char v;
lay(U,P);
setcolor(8);setlinestyle(2,3,1);
circle(xo-140,yo+150,60);
setcolor(0);
setfillstyle(1,4);
pieslice(x2=xo-85,y2=yo+150,0,360,10);
setcolor(0);
setfillstyle(1,1);
pieslice(x1=xo-195,y1=yo+150,0,360,10);

float C=261.63,D=293.66,E=329.63,F=349.23,G=392,A=440,B=493.88,C5=523.25,E5=659.25;
//float C=523.25,D=587.33,E=659.25,F=698.46,G=783.99,A=880,B=987.77,C5=1046.50,E5=1318.51;
int d12=250;

float a12[50]={C5,B,G,E,0,E,A,G,A,E,0,E,D,C,D,0,B,C5,E5,B,G,E,0,E,A,G,A,E,0,E,D,C,D,E,F,G,A,B};
float b12[50]={6,2,3,2.8,.2,1,.5,.5,3,.8,.2,1,1,1,6.25,1.75,1,5,1,2,3,2.8,.2,1,.5,.5,3,.8,.2,1,1,1,2,2,2,1,1,1};
for(int i8=0;i8<38;i8++)
{sound(a12[i8]);
delay(b12[i8]*d12);
nosound();
if(kbhit())
{break;} }

box(a);
clock_t e1=clock();
rota:
for(i=0;i<yo+1130;i+=2)
{clock_t e=clock();int r;char U[5];
   r=(e -e1)/18;
   delay(0);
   if(r==60){T++;r=0;e1=e;}
setcolor(3);
setfillstyle(0,0);
bar(xo+230,yo-60,xo+270,yo-45);
settextstyle(0,0,1);itoa(T,U,10);outtextxy(xo+238,yo-55,U);outtextxy(xo+248,yo-55,":");itoa(r,U,10);outtextxy(xo+256,yo-55,U);

if(d){d=0;delay(0);} else delay(15);
for( r=0;r<=i/120 && r<10;r++)
{setfillstyle(1,0);
 bar(a[r][0],a[r][1]+i-2-r*120,a[r][2],a[r][3]+i-2-r*120);
 setfillstyle(1,15);
 bar(b[r][0]=a[r][0],b[r][1]=a[r][1]+i-r*120,b[r][2]=a[r][2],b[r][3]=a[r][3]+i-r*120);}
if(kbhit())
{v=getch();
if(rot(v))d=1;}
else
{setcolor(8);setlinestyle(2,3,1);
circle(xo-140,yo+150,60);
setfillstyle(1,4);
pieslice(x2,y2,0,360,10);
setfillstyle(1,1);
pieslice(x1,y1,0,360,10);}
if(M=check(b,r)){::i=0;outtextxy(xo+157,yo-15,"Game Over");goto end;}

}
end:
if((M-1)*10>S)S=(M-1)*10;S1=(M-1)*10;P+=S1;char Q[5];itoa(S1,Q,10);
outtextxy(xo+250,yo-75,Q);
delay(3000);
return -1;
}
