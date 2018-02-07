#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include<stdio.h>
#include<dos.h>

class musico
{public:
float a[220],b[220];int d;
jan()
{float B3=246.94,C=261.63,D=293.66,E=329.63,F=349.23,G=392,A=440,B=493.88,C5=523.25,E5=659.25;
//float C=523.25,D=587.33,E=659.25,F=698.46,G=783.99,A=880,B=987.77,C5=1046.50,E5=1318.51;
d=300;
float a1[220]={C,D,E,0,E,0,E,0,E,0,E,0,E,0,E,0,E,0,E,D,E,F,0,E,0,E,0,E,D,0,D,0,D,B3,D,C,0,C,G,0,G,0,G,0,G,0,G,0,G,0,G,0,G,0,G,F,A,G,0,F,0,F,0,F,E,0,E,0,E,D,F,E,0,E,0,E,0,E,0,E,0,E,D,G,0,G,0,G,F,0,F,0,F,0,E,0,E,0,E,D,0,D,0,D,B3,D,C,0,C,D,E,0,E,0,E,0,E,D,E,F,0,E,F,G,0,G,0,G,F,0,F,D,F,E,0,E,0,E,D,0,D,0,D,0,D,B3,D,C,0,C,0,C,G,0,G,0,G,0,G,0,G,0,G,0,G,0,G,F,A,G,F,0,F,0,F,E,0,E,0,E,D,F,E,C5,B,C5,B,A,B,A,G,A,C,0,C,D,0,D,E,0,E,D,E,F};
float b1[220]={1,1,.8,.2,.8,.2,.8,.2,.8,.2,.8,.2,.8,.2,1.5,.5,.8,.2,1,1,1,1.3,.7,1.75,.25,.8,.2,1,1.75,.25,.8,.2,1,1,1,3.25,.25,2,1.75,.25,.8,.2,1.75,.25,.8,.2,.8,.2,.8,.2,1.75,.25,.8,.2,1,1,1,1.8,.2,1.75,.25,.8,.2,1,1.75,.25,.8,.2,1,1,1,3.25,.75,1.75,.25,.8,.2,.8,.2,1.75,.25,1,1,.8,.2,.8,.2,1,.8,.2,1.8,.2,1.8,.2,1.75,.25,.8,.2,1,1.75,.25,.8,.2,1,1,1,2,2,1,1,.8,.2,.8,.2,1.8,.2,2,1,1,4.25,1.75,1,1,.8,.2,.8,.2,2,.8,.2,1,1,1,2,2,1.8,.2,2,.8,.2,.8,.2,.8,.2,1,1,1,2,2,.8,.2,1,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,.8,.2,1,1,1,2,1.8,.2,.8,.2,1,1.8,.2,.8,.2,1,1,1,4,1,1,6,1,1,6,1,1,8,.8,.2,1,.8,.2,1,.8,.2,1,1,1,4.25};
for(int i=0;i<220;i++)
{a[i]=a1[i];b[i]=b1[i];}}
sare()
{float G3=196,A3=220,B3=246.94,C=261.63,D=293.66,DS=311.13,E=329.63,F=349.23,G=392,A=440;
 d=300;
float a1[100]={DS,0,DS,D,C,D,B3,C,0,C,0,G3,A3,C,D,E,F,E,0,E,D,F,E,D,C,DS,0,DS,D,C,D,B3,C,0,C,0,E,F,G,0,G,0,G,E,F,A,G,0,E,F,G,F,E,D,C,0,C,0,C,0,C,B3,A3,G3,DS,0,DS,D,C,D,B3,C,0,C,0,G3,A3,C,D,E,F,E,0,E,D,F,E,D,C,DS,0,DS,D,C,D,B3,C,0,C};
float b1[100]={1.75,.25,1,1,1,2,1,1.75,.25,2.25,3.25,1,1,2,1,2,1,1.75,.25,1,1,1,1,1,1,1.75,.25,1,1,1,2,1,1.75,.25,2.25,3.25,1,1,1.8,.2,.8,.2,2,1,1,1,4.25,1.75,1,1,2,1,2,1,1.8,.2,.8,.2,.8,.2,1,1,1,1,1.75,.25,1,1,1,2,1,1.75,.25,2.25,3.25,1,1,2,1,2,1,1.75,.25,1,1,1,1,1,1,1.75,.25,1,1,1,2,1,1.75,.25,2.25,3.25};
for(int i=0;i<100;i++)
{a[i]=a1[i];b[i]=b1[i];}}
naru()
{float D4=293.66,F4=369.99,A=440,B=493.88,C=554.37,D=587.33,E=659.25,F=739.99,G=783.99,A5=880;
d=400;
float a1[100]={F4,A,D,A5,E,0,E,D,F,A5,D,0,F4,A,D,A5,E,0,F,G,F,D,0,C,0,D4,A,D,A5,E,0,F4,A,D,A5,E,0,F4,A,D,A5,E,0,F,G,F,D,0,C,0,B,D,C,D,A,B,0,B,D,C,D,G,F,0,E,0,D,0,A5,0,D,0,E,0,C,0};
float b1[100]={1,1,1,1,3.25,.75,1,1,1,1,3.25,.75,1,1,1,1,1.75,.25,1,1,1,1.25,.75,4.25,.75,1,1,1,1,3.25,.75,1,1,1,1,3.25,.75,1,1,1,1,1.75,.25,1,1,1,1.25,.75,4.25,.75,1,1,1,1,2,1.75,.25,1,1,1,1,2,1.75,.25,2.25,.75,2.5,.5,1.25,.75,2.5,.5,2.75,.25,7.25,2.75};
for(int i=0;i<100;i++)
{a[i]=a1[i];b[i]=b1[i];}}
spid()
{float G=392,A2=466.16,D=587.33,C=523.25,D5=622.25,G5=783.99,F5=698.46;
d=200;
float a1[43]={G,A2,D,0,C,A2,G,0,G,A2,D,0,D,C,A2,G,0,C,D5,G5,0,F5,D5,C,0,G,A2,D,0,D,C,A2,G,D5,D,0,G,0,G,A2,C,A2,G};
float b1[43]={2,1,4.5,.5,2,1,4.5,.5,2,2,1.75,.25,2,2,1,4.5,.5,2,1,4.5,.5,2,1,4.5,.5,2,2,1.75,.25,2,2,1,3,2,8,1,.75,.25,1,1,2,1,9};
for(int i=0;i<43;i++)
{a[i]=a1[i];b[i]=b1[i];}}
crit()
{float C=523.25,D=587.33,DS=622.25,F=698.46,G=783.99,GS=830.61,AS=932.33;
//C=261.63,D=293.66,DS=311.13,F=349.23,G=392,GS=415.30,AS=466.16;
 d=400;
float a1[50]={G,0,G,0,G,0,AS,0,GS,0,G,0,G,0,G,0,AS,0,GS,0,D,0,D,0,D,0,F,0,DS,0,C,0,C,0,D,0,D,0,DS,0,DS,0,F,0,DS,0};
float b1[50]={1.5,.5,1.5,.5,1.5,.5,.75,.25,.75,.25,1.5,.5,1.5,.5,1.5,.5,.75,.25,.75,.25,1.5,.5,1.5,.5,1.5,.5,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25};
for(int i=0;i<50;i++)
{a[i]=a1[i];b[i]=b1[i];}}
emin()
{float F3=174.61,G3=196,A3=220,AS3=233.08,C=261.63,D=293.66,F=349.23,G=392,A=440,AS=466.16;
//float F3=349.23,G3=392,A3=440,AS3=466.16,C=523.25,D=587.33,F=698.46,G=783.99,A=880,AS=932.33;
d=300;
float a1[50]={D,AS,A,G,D,0,D,0,D,C,D,F,D,0,D,0,D,C,D,C,AS3,0,AS3,0,AS3,A3,F3,G3,0};
float b1[50]={1,1,1,1,1,1,.75,1.25,1,1,1,1,1,1,.75,1.25,1,1,1,1,1,1,.75,1.25,1,1,1,1.5,3.5};
for(int i=0;i<50;i++)
{a[i]=a1[i];b[i]=b1[i];}}
empt()
{float C=523.25,D=587.33,E=659.25,F=698.46,G=783.99,A=880,B=987.77,C6=1046.50;
 d=400;
float a1[35]={F,A,C6,A,F,A,C6,A,E,G,B,G,E,G,B,G,D,F,A,F,D,F,A,F,C,E,G,E,0};
float b1[35]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1.5,3.5};
for(int i=0;i<35;i++)
{a[i]=a1[i];b[i]=b1[i];}}
happ()
{float C4=261.63,DS4=311.13,F4=349.23,C=523.25,DS=622.25,F=698.46,G=783.99,GS=783.99,AS=932.33,C6=1046.50;
 d=200;
float a1[90]={F,DS,F,G,DS,C,0,C,0,C,F,DS,F,0,F,DS,F,C,DS,F,0,F,DS,F,G,DS,C,0,C,0,C,F,DS,F,0,F,DS,F,C4,DS4,F4,C6,AS,GS,F,G,DS,C,0,C,0,C,F,DS,F,0,F,DS,F,C4,DS4,F4,F,DS,F,G,DS,C,0,C,0,C,F,0,F,DS,F,DS,F,0};
float b1[90]={1,1,3,2,2,1.75,.25,.75,.25,2,1,1,1.75,.25,2,1,4,2,2,1.75,.25,1,1,3,2,2,1.75,.25,.75,.25,2,1,1,1.75,.25,2,1,4,2,2,2,1,1,1,2,2,2,1.75,.25,.75,.25,2,1,1,1.75,.25,2,1,4,2,2,2,1,1,3,2,2,1.75,.25,.75,.25,2,1.75,.25,1,1,2,1,2.5,1.5};
for(int i=0;i<90;i++)
{a[i]=a1[i];b[i]=b1[i];}}
bree()
{float C=261.63,D=293.66,E=329.63,F=349.23,G=392,A=440,B=493.88,C5=523.25,E5=659.25;
//float C=523.25,D=587.33,E=659.25,F=698.46,G=783.99,A=880,B=987.77,C5=1046.50,E5=1318.51;
 d=250;
float a1[50]={C5,B,G,E,0,E,A,G,A,E,0,E,D,C,D,0,B,C5,E5,B,G,E,0,E,A,G,A,E,0,E,D,C,D,E,F,G,A,B};
float b1[50]={6,2,3,2.8,.2,1,.5,.5,3,.8,.2,1,1,1,6.25,1.75,1,5,1,2,3,2.8,.2,1,.5,.5,3,.8,.2,1,1,1,2,2,2,1,1,1};
for(int i=0;i<50;i++)
{a[i]=a1[i];b[i]=b1[i];}}
fall()
{float a1[40]={523.25,440,659.25,440,523.25,440,659.25,440,493.88,392,587.33,392,493.88,392,587.33,392,440,349.23,523.25,349.23,440,349.23,523.25,349.23,392,329.63,493.88,329.63,392,329.63,493.88,329.63};
for(int i=0;i<40;i++)
a[i]=a1[i];}
arig()
{float D4=293.66,F=349.23,G=392,A=440,C=523.25,D=587.33,E=659.25;
//D4=587.33,F=698.46,G=783.99,A=880,C=1046.50,D=1174.66,E=1318.51;
 d=300;
float a1[90]={F,G,A,G,A,C,A,C,D,0,D,0,D,0,E,D,C,D,C,A,C,A,G,0,G,0,G,0,F,G,A,G,A,C,A,C,D,0,D,0,D,0,E,D,C,D,C,A,C,A,G,0,G,0,G,0,A,G,F,0,F,0,F,0,A,G,F,0,F,0,G,0,F,G,A,G,A,C,A,G,F,D4,F,0};
float b1[90]={1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,3,1,1.75,.25};
for(int i=0;i<90;i++)
{a[i]=a1[i];b[i]=b1[i];}}
moza()
{float D4=293.66,E4=329.63,FS4=369.99,G4=392,A4=440,B4=493.88,C5=523.25,D5=587.33,E5=659.25,FS5=739.99,G5=783.99,A5=880,B5=987.77,C6=1046.5,D6=1174.66;
 d=220;
float a1[150]={G4,D4,G4,D4,G4,D4,G4,B4,D5,0,C5,A4,C5,A4,C5,A4,FS4,A4,D4,0,G5,0,G5,B5,A5,G5,A5,G5,A5,G5,FS5,A5,C6,FS5,G5,0,G5,B5,A5,G5,A5,G5,A5,G5,FS5,A5,C6,FS5,G5,0,G5,0,G5,FS5,E5,FS5,G5,0,G5,B5,A5,G5,A5,B5,0,B5,D6,C6,B5,C6,D6,0,D5,0,E5,0,D5,C5,0,C5,0,C5,B4,0,B4,0,B4,A4,0,A4,G4,FS4,E4,FS4,G4,0,G4,A4,FS4,G4,0,D5,0,E5,0,D5,C5,0,C5,0,C5,B4,0,B4,0,B4,A4,0,A4,G4,FS4,E4,FS4,G4,0,G4,A4,FS4,G4,0};
float b1[150]={3,1,3,1,1,1,1,1,3.5,.5,3,1,3,1,1,1,1,1,3.5,.5,1.75,.25,3,1,1,1,.5,.5,.5,.5,3,1,1,1,1.75,.25,3,1,1,1,.5,.5,.5,.5,3,1,1,1,.8,.2,.8,.2,.5,.5,.5,.5,.8,.2,1,.5,.5,.5,.5,.8,.2,1,.5,.5,.5,.5,3.25,.75,3.25,.75,3.25,.75,1,.8,.2,1.75,.25,1,.8,.2,1.75,.25,1,.8,.2,2,1,1,1,1,.8,.2,1,1,1,3.25,.75,3.25,.75,3.25,.75,1,.8,.2,1.75,.25,1,.8,.2,1.75,.25,1,.8,.2,2,1,1,1,1,.8,.2,1,1,1,3.25,.75};
for(int i=0;i<150;i++)
{a[i]=a1[i];b[i]=b1[i];}}
xmas()
{float G3=196,A3=220,B3=246.94,C=261.63,D=293.66,E=329.63,F=349.23,G=392,A=440,B=493.88,C5=523.25,E5=659.25;
 d=300;
float a1[210]={E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G,E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G,G3,E,D,C,G3,0,G3,0,G3,0,G3,E,D,C,A3,0,A3,0,A3,0,A3,F,E,D,B3,G,0,G,F,D,E,0,G3,E,D,C,G3,0,G3,0,G3,0,G3,E,D,C,A3,0,A3,0,A3,0,A3,F,E,D,G,A,G,E,D,C,G,E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G,E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G};
float b1[210]={.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,2,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,2,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,4,.8,.2,1,1.5,.5,3.5,.5,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,4,1,1,1,1,2,2,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,2,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,4};
for(int i=0;i<210;i++)
{a[i]=a1[i];b[i]=b1[i];}}};


music()
{musico *A;
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
setlinestyle(0,0,0);
setfillstyle(1,7);
setcolor(5);
bar3d(x-315,x-315,y+400,y+235,0,0);
setfillstyle(0,0);
bar3d(x-300,x-300,y+380,y+220,0,0);
setcolor(14);
settextstyle(0,0,6);
outtextxy(x-190,y-200,"M");
outtextxy(x+35,y-200,"B");
setcolor(12);
settextstyle(0,0,5);
outtextxy(x-137,y-200,"U");
outtextxy(x-95,y-200,"S");
outtextxy(x-60,y-200,"I");
outtextxy(x-25,y-200,"C");
outtextxy(x+85,y-200,"O");
outtextxy(x+125,y-200,"X");
setcolor(14);
setlinestyle(0,0,3);
line(x-150,y-160,x+10,y-160);
line(x+50,y-160,x+160,y-160);
char a[2],b[2],c[3];
a[0]=175;
a[1]='\0';
b[0]=174;
b[1]='\0';
c[0]=16;
c[1]=33;

c[2]='\0';

int z=0,qq=50;
for(int i=0;i<=500;i++)
{
setcolor(10);
arc(x-200,y-60,z+i,qq+i,70);
arc(x-200,y-60,z+i,qq+i,77);
delay(5);

if(i<190)
{setcolor(0);
arc(x-200,y-60,z+i,qq+i,70);
arc(x-200,y-60,z+i,qq+i,77);
}}
for(i=80;i>=0;i--)
{
int p[6];
p[0]=x-230;
p[1]=y-110;
p[2]=x-230;
p[3]=y-10;
p[4]=x-145-i;
p[5]=y-60;
setcolor(5);
setfillstyle(1,5);
fillpoly(3,p);
delay(10);
if(i>0)
{setcolor(0);
setfillstyle(1,0);
fillpoly(3,p);
}
}
settextstyle(0,0,2);
outtextxy(x-120,y-120,"Now Playing-");
setcolor(7);
rectangle(x-110,y-100,x+280,y-60);
setcolor(9);
rectangle(x-110,y-50,x+280,y+20);
setfillstyle(4,12);
bar(x-105,y-45,x+275,y+15);
setcolor(3);
setfillstyle(2,0);
pieslice(x-60,y-15,0,360,25);
pieslice(x,y-15,0,360,25);
pieslice(x+170,y-15,0,360,25);
pieslice(x+230,y-15,0,360,25);
setcolor(0);
line(x-60,y-15,x-37,y-15);
line(x,y-15,x+23,y-15);
line(x+150,y-15,x+193,y-15);
line(x+210,y-15,x+253,y-15);
setcolor(3);
settextstyle(10,0,2);
outtextxy(x+223,y-40,"D");
outtextxy(x-77,y-38,"W");
outtextxy(x-8,y-40,"S");
outtextxy(x+160,y-40,"A");
bar(x+35,y-40,x+135,y+10);
setlinestyle(0,0,3);
rectangle(x+35,y-40,x+135,y+10);
settextstyle(10,0,3);
setcolor(12);
outtextxy(x+50,y-45,"P");
setcolor(11);
outtextxy(x+59,y-45," lay");

setcolor(14);
setlinestyle(0,0,1);
settextstyle(8,0,1);
rectangle(x-280,y+40,x+280,y+200);
setlinestyle(0,0,1);
rectangle(x-280,y+40,x-97,y+70);
outtextxy(x-255,y+40,"JAN GAN MAN");
outtextxy(x-65,y+40,"Saare Jahan");
rectangle(x-97,y+40,x+86,y+70);
rectangle(x+86,y+40,x+280,y+70);
outtextxy(x+126,y+40,"NARUTONE");
rectangle(x-280,y+70,x-97,y+100);
outtextxy(x-245,y+70,"Spider Man");
rectangle(x-97,y+70,x+86,y+100);
outtextxy(x-49,y+70,"CriTiCaL");

rectangle(x+86,y+70,x+280,y+100);
outtextxy(x+116,y+70,"Suicide sQuad");
rectangle(x-280,y+100,x-97,y+130);
outtextxy(x-240,y+100,"Emptiness");

rectangle(x-97,y+100,x+86,y+130);
outtextxy(x-40,y+100,"HAPPY");
rectangle(x+86,y+100,x+280,y+130);
outtextxy(x+146,y+100,"Breeze");
rectangle(x-280,y+130,x-97,y+160);
outtextxy(x-250,y+130,"Falling Down");

rectangle(x-97,y+130,x+86,y+160);
outtextxy(x-64,y+130,"Thank-YoU");

rectangle(x+86,y+130,x+280,y+160);
outtextxy(x+142,y+130,"MOZART");

rectangle(x-280,y+160,x-97,y+190);
rectangle(x-97,y+160,x+86,y+190);
outtextxy(x-37,y+160,"X-MAS");

rectangle(x+86,y+160,x+280,y+190);

rectangle(x+86,y+160,x+280,y+190);
settextstyle(5,0,2);
setcolor(4);
setlinestyle(0,0,3);
circle(x+260,y-135,25);
setcolor(15);
outtextxy(x+240,y-155,"Back");



int x1=x-280,y1=y+40,x2=x-97,y2=y+70,q=0,P,B=0;
i=0;
setcolor(4);
while(!kbhit())
{com:
char v=getch();
setfillstyle(1,0);
if(v=='d')
{
setcolor(14);
rectangle(x1,y1,x2,y2);
if(x2==x-280+549)
{x1=x1-549;x2=x2-549;
i-=3;}
setcolor(4);
setlinestyle(0,0,2);
setcolor(4);
rectangle(x1+=183,y1,x2+=183,y2);
i++;
}
else if(v=='a')
{
setcolor(14);
rectangle(x1,y1,x2,y2);
if(x2==x-280+183)
{x1=x1+549;x2=x2+549;
i+=3;}
setcolor(4);
setlinestyle(0,0,2);
setcolor(4);
rectangle(x1-=183,y1,x2-=183,y2);
i--;
}
else if(v=='s')
{
setcolor(14);
rectangle(x1,y1,x2,y2);
if(y2==y+70+120)
{y1=y1-150;y2=y2-150;
i-=15;
}
setcolor(4);
setlinestyle(0,0,2);
setcolor(4);

rectangle(x1,y1+=30,x2,y2+=30);
i+=3;
}
else if(v=='w')
{
setcolor(14);
rectangle(x1,y1,x2,y2);
if(y2==y+70)
{y1=y1+150;y2=y2+150;
i+=15;
}
setcolor(4);
setlinestyle(0,0,2);
setcolor(4);

rectangle(x1,y1-=30,x2,y2-=30);
i-=3;
}
else if (v=='m')q=0;
else if(v=='h')
{exit(0);
}
else if(v==8 && B==0)
{rectangle(x+86,y+160,x+280,y+190);
settextstyle(5,0,2);
setcolor(14);
setlinestyle(0,0,3);
circle(x+260,y-135,25);
setcolor(10);
outtextxy(x+240,y-155,"Back"); B=8;}
else if((v==8 || v==27) && B==8)
{rectangle(x+86,y+160,x+280,y+190);
settextstyle(5,0,2);
setcolor(4);
setlinestyle(0,0,3);
circle(x+260,y-135,25);
setcolor(15);
outtextxy(x+240,y-155,"Back"); B=0;}

else if((v==8 || v==27) && B==8)
{nosound();return -1;}

else if(v=='p'){P=i;q=0;}
if(v=='p' || q>0)
{
switch(P)
{case 0:
{settextstyle(10,0,2);
setcolor(12);
outtextxy(x-20,y-105,"Jan");
setcolor(15);
outtextxy(x-20,y-105,"     G n");
setcolor(9);
outtextxy(x-15,y-105,"      a");
setcolor(2);
outtextxy(x-20,y-105,"          Man");
A->jan();
for(int io=q;io<207;io++)
{sound(A->a[io]);
delay(A->b[io]*A->d);
nosound();
if(kbhit())
{q=io+1;
setcolor(0);
outtextxy(x-20,y-105,"Jan");
outtextxy(x-20,y-105,"     G n");
outtextxy(x-15,y-105,"      a");
outtextxy(x-20,y-105,"          Man");
goto com;}}
setcolor(0);
outtextxy(x-20,y-105,"Jan");
outtextxy(x-20,y-105,"     G n");
outtextxy(x-15,y-105,"      a");
outtextxy(x-20,y-105,"          Man");
delete A;}q=0;break;
case 1:
{settextstyle(5,0,3);
setcolor(11);
outtextxy(x-30,y-100,"Saare Jahan Se Achha");
A->sare();
for(int io=q;io<99;io++)
{sound(A->a[io]);
delay(A->b[io]*A->d);
nosound();
if(kbhit())
{settextstyle(5,0,3);q=io+1;
setcolor(0);
outtextxy(x-30,y-100,"Saare Jahan Se Achha");
goto com;}}
settextstyle(5,0,3);
setcolor(0);
outtextxy(x-30,y-100,"Saare Jahan Se Achha");
delete A;}q=0;break;
case 2:
{settextstyle(1,0,4);
setcolor(2);
outtextxy(x,y-100,"NA-RU-TO");
A->naru();
for(int io=q;io<76;io++)
{sound(A->a[io]);
delay(A->b[io]*A->d);
nosound();
if(kbhit())
{q=io+1;settextstyle(1,0,4);
setcolor(0);
outtextxy(x,y-100,"NA-RU-TO");
goto com;}}
settextstyle(1,0,4);
setcolor(0);
outtextxy(x,y-100,"NA-RU-TO");

delete A;}q=0;break;
case 3:
{settextstyle(0,0,3);
setcolor(4);
outtextxy(x-30,y-90,"Spider Man");
A->spid();
for(int i3=q;i3<43;i3++)
{sound(A->a[i3]);
delay(A->b[i3]*A->d);
nosound();
if(kbhit())
{q=i3+1;settextstyle(0,0,3);
setcolor(0);
outtextxy(x-30,y-90,"Spider Man");
goto com;
}}
settextstyle(0,0,3);
setcolor(0);
outtextxy(x-30,y-90,"Spider Man");


delete A;}q=0;break;
case 4:
{settextstyle(9,0,3);
setcolor(12);
outtextxy(x-10,y-105,"CriticaL");
A->crit();
for(int i4=q;i4<46;i4++)
{sound(A->a[i4]);
delay(A->b[i4]*A->d);
nosound();
if(kbhit())
{q=i4+1;settextstyle(9,0,3);
setcolor(0);
outtextxy(x-10,y-105,"CriticaL");

goto com;
}}
settextstyle(9,0,3);
setcolor(0);
outtextxy(x-10,y-105,"CriticaL");

delete A;}q=0;break;
case 5:
{settextstyle(6,0,4);
setcolor(4);
outtextxy(x+25,y-105,"EMINEM");
A->emin();
for(int i5=q;i5<29;i5++)
{sound(A->a[i5]);
delay(A->b[i5]*A->d);
nosound();
if(kbhit())
{q=i5+1;settextstyle(6,0,4);
setcolor(0);
outtextxy(x+25,y-105,"EMINEM");
goto com;}
}

/*for(i5=0;i5<29;i5++)
{sound(a[i5]);
delay(b[i5]*d);
nosound();
if(kbhit()){
settextstyle(6,0,4);
setcolor(0);
outtextxy(x+25,y-105,"EMINEM");
goto com;
}}*/
settextstyle(6,0,4);
setcolor(0);
outtextxy(x+25,y-105,"EMINEM");


delete A;}q=0;break;
case 6:
{settextstyle(7,0,3);
setcolor(7);
outtextxy(x+20,y-97,"Emptiness");
A->empt();
for(int i6=q;i6<33;i6++)
{sound(A->a[i6]);
delay(A->b[i6]*A->d);
nosound();
if(kbhit()){q=i6+1;
settextstyle(7,0,3);
setcolor(0);
outtextxy(x+20,y-97,"Emptiness");

goto com;
}
}
settextstyle(7,0,3);
setcolor(0);
outtextxy(x+20,y-97,"Emptiness");

delete A;}q=0;break;
case 7:
{settextstyle(1,0,4);
setcolor(10);
outtextxy(x+40,y-100,"H   Y");
setcolor(12);
outtextxy(x+30,y-100,"  app");
A->happ();
for(int i7=q;i7<81;i7++)
{sound(A->a[i7]);
delay(A->b[i7]*A->d);
nosound();
if(kbhit()){q=i7+1;
settextstyle(1,0,4);
setcolor(0);
outtextxy(x+40,y-100,"H   Y");
outtextxy(x+30,y-100,"  app");
goto com;
}}
settextstyle(1,0,4);
setcolor(0);
outtextxy(x+40,y-100,"H   Y");
outtextxy(x+30,y-100,"  app");

delete A;}q=0;break;
case 8:
{settextstyle(7,0,3);
setcolor(11);
outtextxy(x+10,y-95,"B r e e z e");
A->bree();
for(int i8=q;i8<38;i8++)
{sound(A->a[i8]);
delay(A->b[i8]*A->d);
nosound();
if(kbhit())
{q=i8+1;settextstyle(7,0,3);
setcolor(0);
outtextxy(x+10,y-95,"B r e e z e");
goto com;}
}
/*for(i8=0;i8<38;i8++)
{sound(a[i8]);
delay(b[i8]*d);
nosound();
if(kbhit()){settextstyle(7,0,3);
setcolor(0);
outtextxy(x+10,y-95,"B r e e z e");
goto com;}
}*/settextstyle(7,0,3);
setcolor(0);
outtextxy(x+10,y-95,"B r e e z e");
delete A;}q=0;break;
case 9:
{settextstyle(3,0,2);
setcolor(14);
outtextxy(x+10,y-100,"Falling");
setcolor(4);
outtextxy(x+10,y-85,"       Down");
A->fall();
for(int i9=q;i9<32;i9++)
{sound(A->a[i9]);
delay(350);
nosound();
if(kbhit()){q=i9+1;
settextstyle(3,0,2);
setcolor(0);
outtextxy(x+10,y-100,"Falling");
outtextxy(x+10,y-85,"       Down");
goto com;}
}
settextstyle(3,0,2);
setcolor(0);
outtextxy(x+10,y-100,"Falling");
outtextxy(x+10,y-85,"       Down");

delete A;}q=0;break;
case 10:
{settextstyle(10,0,2);
setcolor(10);
outtextxy(x+10,y-110,"Arigato");
A->arig();
for(int i10=q;i10<81;i10++)
{sound(A->a[i10]);
delay(A->b[i10]*A->d);
nosound();
if(kbhit())
{q=i10+1;settextstyle(10,0,2);
setcolor(0);
outtextxy(x+10,y-110,"Arigato");
goto com;
}}
settextstyle(10,0,2);
setcolor(0);
outtextxy(x+10,y-110,"Arigato");
delete A;}q=0;break;
case 11:
{settextstyle(7,0,2);
setcolor(9);
outtextxy(x-47,y-95,"Eine Kleine Nachtmusik");


A->moza();
for(int i=q;i<130;i++)
{sound(A->a[i]);
delay(A->b[i]*A->d);
nosound();
if(kbhit()){q=i+1;
settextstyle(7,0,2);
setcolor(0);
outtextxy(x-47,y-95,"Eine Kleine Nachtmusik");

goto com;}
}settextstyle(7,0,2);
setcolor(0);
outtextxy(x-47,y-95,"Eine Kleine Nachtmusik");
delete A;}q=0;break;
case 13:
{settextstyle(4,0,4);
setcolor(4);
outtextxy(x-45,y-103,"M     C");
setcolor(15);
outtextxy(x-47,y-103,"  erry   ristmas");
A->xmas();
for(int i13=q;i13<207;i13++)
{sound(A->a[i13]*2);
delay(A->b[i13]*A->d);
nosound();
if(kbhit())
{q=i13+1;settextstyle(4,0,4);
setcolor(0);
outtextxy(x-45,y-103,"M     C");
outtextxy(x-47,y-103,"  erry   ristmas");
goto com;
}}
settextstyle(4,0,4);
setcolor(0);
outtextxy(x-45,y-103,"M     C");
outtextxy(x-47,y-103,"  erry   ristmas");
delete A;}q=0;break;
}
}}


return -1;
}
