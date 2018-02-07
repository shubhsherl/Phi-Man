#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include<stdio.h>
#include<dos.h>
void main()
{int gd=DETECT,gm,x,y;
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

int z=0,q=50;
for(int iq=0;iq<=500;iq++)
{
setcolor(10);
arc(x-200,y-60,z+iq,q+iq,70);
arc(x-200,y-60,z+iq,q+iq,77);
delay(5);

if(iq<190)
{setcolor(0);
arc(x-200,y-60,z+iq,q+iq,70);
arc(x-200,y-60,z+iq,q+iq,77);
}}
for(iq=80;iq>=0;iq--)
{
int p[6];
p[0]=x-230;
p[1]=y-110;
p[2]=x-230;
p[3]=y-10;
p[4]=x-145-iq;
p[5]=y-60;
setcolor(5);
setfillstyle(1,5);
fillpoly(3,p);
delay(10);
if(iq>0)
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
settextstyle(5,0,2);
setcolor(4);
setlinestyle(0,0,3);
circle(x+260,y-135,25);
setcolor(15);
outtextxy(x+240,y-155,"Back");
int x1=x-280,y1=y+40,x2=x-97,y2=y+70;
int i=0;
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
if(v=='a')
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
if(v=='s')
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
if(v=='w')
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

if(v=='h')
{exit(0);
}
if(v=='p')
{switch(i)
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
float B3=246.94,C=261.63,D=293.66,E=329.63,F=349.23,G=392,A=440,B=493.88,C5=523.25,E5=659.25;
//float C=523.25,D=587.33,E=659.25,F=698.46,G=783.99,A=880,B=987.77,C5=1046.50,E5=1318.51;
int d=300;
float a[250]={C,D,E,0,E,0,E,0,E,0,E,0,E,0,E,0,E,0,E,D,E,F,0,E,0,E,0,E,D,0,D,0,D,B3,D,C,0,C,G,0,G,0,G,0,G,0,G,0,G,0,G,0,G,0,G,F,A,G,0,F,0,F,0,F,E,0,E,0,E,D,F,E,0,E,0,E,0,E,0,E,0,E,D,G,0,G,0,G,F,0,F,0,F,0,E,0,E,0,E,D,0,D,0,D,B3,D,C,0,C,D,E,0,E,0,E,0,E,D,E,F,0,E,F,G,0,G,0,G,F,0,F,D,F,E,0,E,0,E,D,0,D,0,D,0,D,B3,D,C,0,C,0,C,G,0,G,0,G,0,G,0,G,0,G,0,G,0,G,F,A,G,F,0,F,0,F,E,0,E,0,E,D,F,E,C5,B,C5,B,A,B,A,G,A,C,0,C,D,0,D,E,0,E,D,E,F};
float b[250]={1,1,.8,.2,.8,.2,.8,.2,.8,.2,.8,.2,.8,.2,1.5,.5,.8,.2,1,1,1,1.3,.7,1.75,.25,.8,.2,1,1.75,.25,.8,.2,1,1,1,3.25,.25,2,1.75,.25,.8,.2,1.75,.25,.8,.2,.8,.2,.8,.2,1.75,.25,.8,.2,1,1,1,1.8,.2,1.75,.25,.8,.2,1,1.75,.25,.8,.2,1,1,1,3.25,.75,1.75,.25,.8,.2,.8,.2,1.75,.25,1,1,.8,.2,.8,.2,1,.8,.2,1.8,.2,1.8,.2,1.75,.25,.8,.2,1,1.75,.25,.8,.2,1,1,1,2,2,1,1,.8,.2,.8,.2,1.8,.2,2,1,1,4.25,1.75,1,1,.8,.2,.8,.2,2,.8,.2,1,1,1,2,2,1.8,.2,2,.8,.2,.8,.2,.8,.2,1,1,1,2,2,.8,.2,1,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,.8,.2,1,1,1,2,1.8,.2,.8,.2,1,1.8,.2,.8,.2,1,1,1,4,1,1,6,1,1,6,1,1,8,.8,.2,1,.8,.2,1,.8,.2,1,1,1,4.25};
for(int io=0;io<207;io++)
{sound(a[io]);
delay(b[io]*d);
nosound();
if(kbhit())
{setcolor(0);
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
}break;
case 1:
{settextstyle(5,0,3);
setcolor(11);
outtextxy(x-30,y-100,"Saare Jahan Se Achha");
float G3=196,A3=220,B3=246.94,C=261.63,D=293.66,DS=311.13,E=329.63,F=349.23,G=392,A=440;
int d1=300;
float a[100]={DS,0,DS,D,C,D,B3,C,0,C,0,G3,A3,C,D,E,F,E,0,E,D,F,E,D,C,DS,0,DS,D,C,D,B3,C,0,C,0,E,F,G,0,G,0,G,E,F,A,G,0,E,F,G,F,E,D,C,0,C,0,C,0,C,B3,A3,G3,DS,0,DS,D,C,D,B3,C,0,C,0,G3,A3,C,D,E,F,E,0,E,D,F,E,D,C,DS,0,DS,D,C,D,B3,C,0,C};
float b[100]={1.75,.25,1,1,1,2,1,1.75,.25,2.25,3.25,1,1,2,1,2,1,1.75,.25,1,1,1,1,1,1,1.75,.25,1,1,1,2,1,1.75,.25,2.25,3.25,1,1,1.8,.2,.8,.2,2,1,1,1,4.25,1.75,1,1,2,1,2,1,1.8,.2,.8,.2,.8,.2,1,1,1,1,1.75,.25,1,1,1,2,1,1.75,.25,2.25,3.25,1,1,2,1,2,1,1.75,.25,1,1,1,1,1,1,1.75,.25,1,1,1,2,1,1.75,.25,2.25,3.25};
for(int i1=0;i1<99;i1++)
{sound(a[i1]);
delay(b[i1]*d1);
nosound();
if(kbhit())
{settextstyle(5,0,3);
setcolor(0);
outtextxy(x-30,y-100,"Saare Jahan Se Achha");
goto com;}}
settextstyle(5,0,3);
setcolor(0);
outtextxy(x-30,y-100,"Saare Jahan Se Achha");
}break;
case 2:
{settextstyle(1,0,4);
setcolor(2);
outtextxy(x,y-100,"NA-RU-TO");
float D4=293.66,F4=369.99,A=440,B=493.88,C=554.37,D=587.33,E=659.25,F=739.99,G=783.99,A5=880;
int d=400;
float a[100]={F4,A,D,A5,E,0,E,D,F,A5,D,0,F4,A,D,A5,E,0,F,G,F,D,0,C,0,D4,A,D,A5,E,0,F4,A,D,A5,E,0,F4,A,D,A5,E,0,F,G,F,D,0,C,0,B,D,C,D,A,B,0,B,D,C,D,G,F,0,E,0,D,0,A5,0,D,0,E,0,C,0};
float b[100]={1,1,1,1,3.25,.75,1,1,1,1,3.25,.75,1,1,1,1,1.75,.25,1,1,1,1.25,.75,4.25,.75,1,1,1,1,3.25,.75,1,1,1,1,3.25,.75,1,1,1,1,1.75,.25,1,1,1,1.25,.75,4.25,.75,1,1,1,1,2,1.75,.25,1,1,1,1,2,1.75,.25,2.25,.75,2.5,.5,1.25,.75,2.5,.5,2.75,.25,7.25,2.75};
for(int i2=0;i2<76;i2++)
{sound(a[i2]);
delay(b[i2]*d);
nosound();
if(kbhit())
{settextstyle(1,0,4);
setcolor(0);
outtextxy(x,y-100,"NA-RU-TO");
goto com;}}
settextstyle(1,0,4);
setcolor(0);
outtextxy(x,y-100,"NA-RU-TO");

}break;
case 3:
{settextstyle(0,0,3);
setcolor(4);
outtextxy(x-30,y-90,"Spider Man");
float G=392,A2=466.16,D=587.33,C=523.25,D5=622.25,G5=783.99,F5=698.46;
int d3=200;
float a[100]={G,A2,D,0,C,A2,G,0,G,A2,D,0,D,C,A2,G,0,C,D5,G5,0,F5,D5,C,0,G,A2,D,0,D,C,A2,G,D5,D,0,G,0,G,A2,C,A2,G};
float b[100]={2,1,4.5,.5,2,1,4.5,.5,2,2,1.75,.25,2,2,1,4.5,.5,2,1,4.5,.5,2,1,4.5,.5,2,2,1.75,.25,2,2,1,3,2,8,1,.75,.25,1,1,2,1,9};
for(int i3=0;i3<43;i3++)
{sound(a[i3]);
delay(b[i3]*d3);
nosound();
if(kbhit())
{settextstyle(0,0,3);
setcolor(0);
outtextxy(x-30,y-90,"Spider Man");
goto com;
}}
settextstyle(0,0,3);
setcolor(0);
outtextxy(x-30,y-90,"Spider Man");


}break;
case 4:
{settextstyle(9,0,3);
setcolor(12);
outtextxy(x-10,y-105,"CriticaL");

float C=523.25,D=587.33,DS=622.25,F=698.46,G=783.99,GS=830.61,AS=932.33;
//C=261.63,D=293.66,DS=311.13,F=349.23,G=392,GS=415.30,AS=466.16;
int d=400;

float a[50]={G,0,G,0,G,0,AS,0,GS,0,G,0,G,0,G,0,AS,0,GS,0,D,0,D,0,D,0,F,0,DS,0,C,0,C,0,D,0,D,0,DS,0,DS,0,F,0,DS,0};
float b[50]={1.5,.5,1.5,.5,1.5,.5,.75,.25,.75,.25,1.5,.5,1.5,.5,1.5,.5,.75,.25,.75,.25,1.5,.5,1.5,.5,1.5,.5,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25,.75,.25};
for(int i4=0;i4<46;i4++)
{sound(a[i4]);
delay(b[i4]*d);
nosound();
if(kbhit())
{settextstyle(9,0,3);
setcolor(0);
outtextxy(x-10,y-105,"CriticaL");

goto com;
}}
settextstyle(9,0,3);
setcolor(0);
outtextxy(x-10,y-105,"CriticaL");

}break;
case 5:
{settextstyle(6,0,4);
setcolor(4);
outtextxy(x+25,y-105,"EMINEM");
float F3=174.61,G3=196,A3=220,AS3=233.08,C=261.63,D=293.66,F=349.23,G=392,A=440,AS=466.16;
//float F3=349.23,G3=392,A3=440,AS3=466.16,C=523.25,D=587.33,F=698.46,G=783.99,A=880,AS=932.33;
int d=300;

float a[50]={D,AS,A,G,D,0,D,0,D,C,D,F,D,0,D,0,D,C,D,C,AS3,0,AS3,0,AS3,A3,F3,G3,0};
float b[50]={1,1,1,1,1,1,.75,1.25,1,1,1,1,1,1,.75,1.25,1,1,1,1,1,1,.75,1.25,1,1,1,1.5,3.5};
for(int i5=0;i5<29;i5++)
{sound(a[i5]);
delay(b[i5]*d);
nosound();
if(kbhit())
{settextstyle(6,0,4);
setcolor(0);
outtextxy(x+25,y-105,"EMINEM");
goto com;}
}

for(i5=0;i5<29;i5++)
{sound(a[i5]);
delay(b[i5]*d);
nosound();
if(kbhit()){
settextstyle(6,0,4);
setcolor(0);
outtextxy(x+25,y-105,"EMINEM");
goto com;
}}
settextstyle(6,0,4);
setcolor(0);
outtextxy(x+25,y-105,"EMINEM");


}break;
case 6:
{settextstyle(7,0,3);
setcolor(7);
outtextxy(x+20,y-97,"Emptiness");

float C=523.25,D=587.33,E=659.25,F=698.46,G=783.99,A=880,B=987.77,C6=1046.50;
int d=400;
float a[35]={F,A,C6,A,F,A,C6,A,E,G,B,G,E,G,B,G,D,F,A,F,D,F,A,F,C,E,G,E,0};
float b[35]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1.5,3.5};
for(int i6=0;i6<33;i6++)
{sound(a[i6]);
delay(b[i6]*d);
nosound();
if(kbhit()){
settextstyle(7,0,3);
setcolor(0);
outtextxy(x+20,y-97,"Emptiness");

goto com;
}
}
settextstyle(7,0,3);
setcolor(0);
outtextxy(x+20,y-97,"Emptiness");

}break;
case 7:
{settextstyle(1,0,4);
setcolor(10);
outtextxy(x+40,y-100,"H   Y");
setcolor(12);
outtextxy(x+30,y-100,"  app");

float C4=261.63,DS4=311.13,F4=349.23,C=523.25,DS=622.25,F=698.46,G=783.99,GS=783.99,AS=932.33,C6=1046.50;
int d=200;

float a[90]={F,DS,F,G,DS,C,0,C,0,C,F,DS,F,0,F,DS,F,C,DS,F,0,F,DS,F,G,DS,C,0,C,0,C,F,DS,F,0,F,DS,F,C4,DS4,F4,C6,AS,GS,F,G,DS,C,0,C,0,C,F,DS,F,0,F,DS,F,C4,DS4,F4,F,DS,F,G,DS,C,0,C,0,C,F,0,F,DS,F,DS,F,0};
float b[90]={1,1,3,2,2,1.75,.25,.75,.25,2,1,1,1.75,.25,2,1,4,2,2,1.75,.25,1,1,3,2,2,1.75,.25,.75,.25,2,1,1,1.75,.25,2,1,4,2,2,2,1,1,1,2,2,2,1.75,.25,.75,.25,2,1,1,1.75,.25,2,1,4,2,2,2,1,1,3,2,2,1.75,.25,.75,.25,2,1.75,.25,1,1,2,1,2.5,1.5};
for(int i7=0;i7<81;i7++)
{sound(a[i7]);
delay(b[i7]*d);
nosound();
if(kbhit()){
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

}break;
case 8:
{settextstyle(7,0,3);
setcolor(11);
outtextxy(x+10,y-95,"B r e e z e");

float C=261.63,D=293.66,E=329.63,F=349.23,G=392,A=440,B=493.88,C5=523.25,E5=659.25;
//float C=523.25,D=587.33,E=659.25,F=698.46,G=783.99,A=880,B=987.77,C5=1046.50,E5=1318.51;
int d=250;

float a[50]={C5,B,G,E,0,E,A,G,A,E,0,E,D,C,D,0,B,C5,E5,B,G,E,0,E,A,G,A,E,0,E,D,C,D,E,F,G,A,B};
float b[50]={6,2,3,2.8,.2,1,.5,.5,3,.8,.2,1,1,1,6.25,1.75,1,5,1,2,3,2.8,.2,1,.5,.5,3,.8,.2,1,1,1,2,2,2,1,1,1};
for(int i8=0;i8<38;i8++)
{sound(a[i8]);
delay(b[i8]*d);
nosound();
if(kbhit())
{settextstyle(7,0,3);
setcolor(0);
outtextxy(x+10,y-95,"B r e e z e");
goto com;}
}
for(i8=0;i8<38;i8++)
{sound(a[i8]);
delay(b[i8]*d);
nosound();
if(kbhit()){settextstyle(7,0,3);
setcolor(0);
outtextxy(x+10,y-95,"B r e e z e");
goto com;}
}settextstyle(7,0,3);
setcolor(0);
outtextxy(x+10,y-95,"B r e e z e");

}break;
case 9:
{settextstyle(3,0,2);
setcolor(14);
outtextxy(x+10,y-100,"Falling");
setcolor(4);
outtextxy(x+10,y-85,"       Down");

float a[40]={523.25,440,659.25,440,523.25,440,659.25,440,493.88,392,587.33,392,493.88,392,587.33,392,440,349.23,523.25,349.23,440,349.23,523.25,349.23,392,329.63,493.88,329.63,392,329.63,493.88,329.63};
for(int i9=0;i9<32;i9++)
{sound(a[i9]);
delay(350);
nosound();
if(kbhit()){
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

}break;
case 10:
{settextstyle(10,0,2);
setcolor(10);
outtextxy(x+10,y-110,"Arigato");
float D4=293.66,F=349.23,G=392,A=440,C=523.25,D=587.33,E=659.25;
//D4=587.33,F=698.46,G=783.99,A=880,C=1046.50,D=1174.66,E=1318.51;
int d=300;
float a[90]={F,G,A,G,A,C,A,C,D,0,D,0,D,0,E,D,C,D,C,A,C,A,G,0,G,0,G,0,F,G,A,G,A,C,A,C,D,0,D,0,D,0,E,D,C,D,C,A,C,A,G,0,G,0,G,0,A,G,F,0,F,0,F,0,A,G,F,0,F,0,G,0,F,G,A,G,A,C,A,G,F,D4,F,0};
float b[90]={1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,3,1,1.75,.25};
for(int i10=0;i10<81;i10++)
{sound(a[i10]);
delay(b[i10]*d);
nosound();
if(kbhit())
{settextstyle(10,0,2);
setcolor(0);
outtextxy(x+10,y-110,"Arigato");
goto com;
}}
settextstyle(10,0,2);
setcolor(0);
outtextxy(x+10,y-110,"Arigato");
}break;
case 11:
{settextstyle(7,0,2);
setcolor(9);
outtextxy(x-47,y-95,"Eine Kleine Nachtmusik");


float D4=293.66,E4=329.63,FS4=369.99,G4=392,A4=440,B4=493.88,C5=523.25,D5=587.33,E5=659.25,FS5=739.99,G5=783.99,A5=880,B5=987.77,C6=1046.5,D6=1174.66;
int d=220;
float a[150]={G4,D4,G4,D4,G4,D4,G4,B4,D5,0,C5,A4,C5,A4,C5,A4,FS4,A4,D4,0,G5,0,G5,B5,A5,G5,A5,G5,A5,G5,FS5,A5,C6,FS5,G5,0,G5,B5,A5,G5,A5,G5,A5,G5,FS5,A5,C6,FS5,G5,0,G5,0,G5,FS5,E5,FS5,G5,0,G5,B5,A5,G5,A5,B5,0,B5,D6,C6,B5,C6,D6,0,D5,0,E5,0,D5,C5,0,C5,0,C5,B4,0,B4,0,B4,A4,0,A4,G4,FS4,E4,FS4,G4,0,G4,A4,FS4,G4,0,D5,0,E5,0,D5,C5,0,C5,0,C5,B4,0,B4,0,B4,A4,0,A4,G4,FS4,E4,FS4,G4,0,G4,A4,FS4,G4,0};
float b[150]={3,1,3,1,1,1,1,1,3.5,.5,3,1,3,1,1,1,1,1,3.5,.5,1.75,.25,3,1,1,1,.5,.5,.5,.5,3,1,1,1,1.75,.25,3,1,1,1,.5,.5,.5,.5,3,1,1,1,.8,.2,.8,.2,.5,.5,.5,.5,.8,.2,1,.5,.5,.5,.5,.8,.2,1,.5,.5,.5,.5,3.25,.75,3.25,.75,3.25,.75,1,.8,.2,1.75,.25,1,.8,.2,1.75,.25,1,.8,.2,2,1,1,1,1,.8,.2,1,1,1,3.25,.75,3.25,.75,3.25,.75,1,.8,.2,1.75,.25,1,.8,.2,1.75,.25,1,.8,.2,2,1,1,1,1,.8,.2,1,1,1,3.25,.75};

for(int i=0;i<130;i++)
{sound(a[i]);
delay(b[i]*d);
nosound();
if(kbhit()){
settextstyle(7,0,2);
setcolor(0);
outtextxy(x-47,y-95,"Eine Kleine Nachtmusik");

goto com;}
}settextstyle(7,0,2);
setcolor(0);
outtextxy(x-47,y-95,"Eine Kleine Nachtmusik");
}break;
case 13:
{settextstyle(4,0,4);
setcolor(4);
outtextxy(x-45,y-103,"M     C");
setcolor(15);
outtextxy(x-47,y-103,"  erry   ristmas");

float G3=196,A3=220,B3=246.94,C=261.63,D=293.66,E=329.63,F=349.23,G=392,A=440,B=493.88,C5=523.25,E5=659.25;
int d=300;
float a[210]={E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G,E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G,G3,E,D,C,G3,0,G3,0,G3,0,G3,E,D,C,A3,0,A3,0,A3,0,A3,F,E,D,B3,G,0,G,F,D,E,0,G3,E,D,C,G3,0,G3,0,G3,0,G3,E,D,C,A3,0,A3,0,A3,0,A3,F,E,D,G,A,G,E,D,C,G,E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G,E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G};
float b[210]={.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,2,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,2,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,4,.8,.2,1,1.5,.5,3.5,.5,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,4,1,1,1,1,2,2,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,2,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,4};
for(int i13=0;i13<207;i13++)
{sound(a[i13]*2);
delay(b[i13]*d);
nosound();
if(kbhit())
{settextstyle(4,0,4);
setcolor(0);
outtextxy(x-45,y-103,"M     C");
outtextxy(x-47,y-103,"  erry   ristmas");
goto com;
}}
settextstyle(4,0,4);
setcolor(0);
outtextxy(x-45,y-103,"M     C");
outtextxy(x-47,y-103,"  erry   ristmas");
}break;
}
}}


getch();
}