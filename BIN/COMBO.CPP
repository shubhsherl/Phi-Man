#include<fstream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<ctype.h>

#include<quizup.h>
#include<gover.h>
#include<datafile.h>
#include<login.h>
#include<homepage.h>
#include<master.h>
#include<titato.h>
//#include<sudoku.h>
//#include<soundo.h>
//#include<duoo.h>
//#include<booman.h>
//#include<jumpy.h>
//#include<match.h>
//#include<musicbox.h>

void t1()
{int x,y,i;
x=getmaxx()/2;
y=getmaxy()/2;
setlinestyle(0,0,3);
for(i=0;i<360;i++)
{setcolor(15);
line(x+i,y-300,x+i,y+300);
line(x-i,y-300,x-i,y+300);
delay(5);
setcolor(0);
line(x+i,y-300,x+i,y+300);
line(x-i,y-300,x-i,y+300);
}
}
void t2()
{
int x,y,i;
x=getmaxx()/2;
y=getmaxy()/2;  setlinestyle(0,0,3);
for(i=0;i<360;i++)
{
setcolor(15);
line(x-360,y-i,x+360,y-i);
line(x-360,y+i,x+360,y+i);
delay(5);
setcolor(0);
line(x-360,y-i,x+360,y-i);
line(x-360,y+i,x+360,y+i);
}
}
void t3()
{int x,y,i;
x=getmaxx()/2;
y=getmaxy()/2;  setlinestyle(0,0,3);
for(i=360;i>=0;i--)
{setcolor(15);
line(x+i,y-300,x+i,y+300);
line(x-i,y-300,x-i,y+300);
delay(5);
setcolor(0);
line(x+i,y-300,x+i,y+300);
line(x-i,y-300,x-i,y+300);
}
}
void t4()
{int x,y,i;
x=getmaxx()/2;
y=getmaxy()/2;
setlinestyle(0,0,3);
for(i=360;i>=0;i--)
{
setcolor(15);
line(x-360,y-i,x+360,y-i);
line(x-360,y+i,x+360,y+i);
delay(5);
setcolor(0);
line(x-360,y-i,x+360,y-i);
line(x-360,y+i,x+360,y+i);
}
}
void t5()
{int x,y;float i;
x=getmaxx()/2;
y=getmaxy()/2;
setlinestyle(0,0,3);
setcolor(15);
setfillstyle(1,0);
for(i=0;i<350;i+=4)
{
fillellipse(x,y,1.5*i,i);
}
}

void main()
{ user F;user_ f;F.n=0;int t,m,c=0,s=0; top: c=0;
f=login(F.n);
if(f.n==-2)
{t1();F=datafile();
if(F.n==-4){t3();
goto top;}
else{t5(); t=hpage(F.n,F.p,F.gn,F.ipa,F.na,F.un,c);
strcpy(f.na,F.na);strcpy(f.un,F.un);strcpy(f.pa,F.pa);f.n=F.n,f.p=F.p,f.gn=F.gn;}
for(int I=0;I<8;I++)f.ipa[I]=F.ipa[I];
}
else if(f.n==0)
{mas:m=master();
 if(m==5){F.n=-4;goto top;}
 if(m==4)t=hpage(f.n,f.p,f.gn,f.ipa,f.na,f.un,c);
}
else if(f.n==-11)
{cleardevice();
x=getmaxx()/2;
y=getmaxy()/2+320;
for(int j=0; j<=100; j++)
   {putpixel(random(getmaxx()),random(getmaxy()),15);
   delay(1);
   }
setlinestyle(0,0,3);
for(int i=0;i<=420;i+=5)
{setcolor(14);
ellipse(x-80,y-i,0,360,60,30);
line(x-100,y+70-i,x-65,y-70-i);
settextstyle(0,0,6);
outtextxy(x,y-10-i,"HI");
settextstyle(0,0,2);
setcolor(2);
outtextxy(x,y+60-i,"Gaming REDEFINED");
setcolor(15);
settextstyle(7,0,5);
outtextxy(x-80,y+80-i,"Credits");
if(i<420)
{setcolor(0);
ellipse(x-80,y-i,0,360,60,30);
line(x-100,y+70-i,x-65,y-70-i);
settextstyle(0,0,6);
outtextxy(x,y-10-i,"HI");
settextstyle(0,0,2);
//setcolor(2);
outtextxy(x,y+60-i,"Gaming REDEFINED");
//setcolor(15);
settextstyle(7,0,5);
outtextxy(x-80,y+80-i,"Credits");
}
}
for(j=0; j<=1000; j++)
   {putpixel(random(getmaxx()),random(getmaxy()),15);
   delay(1);
   }
setcolor(12);
setlinestyle(0,0,1);
setfillstyle(1,0);
for(i=160;i>=0;i--)
{bar3d(210,290,410,450-i,10,1);}
//rectangle(220,290,420,450);
settextstyle(5,0,1);
setcolor(10);
outtextxy(x-78,y-320+50,"Programmed By");
outtextxy(x-50,y-320+138,"Guided By");

settextstyle(5,0,1);

setcolor(14);
outtextxy(x-60,y-320+70,"Aayush Singh");
outtextxy(x-68,y-320+90,"Shubham Singh");
outtextxy(x-78,y-320+110,"Aditya Kumar Das");
outtextxy(x-95,y-320+160,"Mrs. Archana Agrawal");
int i13=0;
while(!kbhit())
{if(i13==210)i13=0;
float G3=196,A3=220,B3=246.94,C=261.63,D=293.66,E=329.63,F=349.23,G=392,A=440,B=493.88,C5=523.25,E5=659.25;
float a1[210]={E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G,E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G,G3,E,D,C,G3,0,G3,0,G3,0,G3,E,D,C,A3,0,A3,0,A3,0,A3,F,E,D,B3,G,0,G,F,D,E,0,G3,E,D,C,G3,0,G3,0,G3,0,G3,E,D,C,A3,0,A3,0,A3,0,A3,F,E,D,G,A,G,E,D,C,G,E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G,E,0,E,0,E,0,E,0,E,0,E,0,E,G,C,D,E,0,F,0,F,0,F,E,0,E,0,E,D,0,D,0,D,E,D,G};
float b1[210]={.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,2,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,2,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,4,.8,.2,1,1.5,.5,3.5,.5,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,2.75,.25,.3,.2,.3,.2,1,1,1,1,4,1,1,1,1,2,2,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,2,.8,.2,.8,.2,1.8,.2,.8,.2,.8,.2,1.8,.2,1,1,1.5,.5,3.25,.75,.8,.2,.8,.2,2,.8,.2,.8,.2,2,.8,.2,.8,.2,1,1,2,4};
sound(a1[i13]*2);
delay(b1[i13++]*300);
nosound();


}exit(0);}
else {t5();t=hpage(f.n,f.p,f.gn,f.ipa,f.na,f.un,c);}



sw:
switch(t)
{//case -19:t4();c=music();break;
case -7:goto mas;
case -1:F.n=-4;goto top;
case 1:c=tic3(f.un,f.p,f.ipa[0],s);break;
case 2:c=quiz(f.un,f.p,f.ipa[1],s);break;
//case 3:c=boo(f.un,f.p,f.ipa[2],s);break;
//case 4:c=sudo(f.un,f.p,f.ipa[3],s);break;
//case 5:c=jump(f.un,f.p,f.ipa[4],s);break;
//case 6:c=soun(f.un,f.p,f.ipa[5],s);break;
//case 7:c=duoo(f.un,f.p,f.ipa[6],s);break;
//case 8:c=matc(f.un,f.p,f.ipa[6],s);break;
}

if(t>0){t3();c=gover(s,t-1,f.na);}

if(c==-1){t4();t=hpage(f.n,f.p,f.gn,f.ipa,f.na,f.un,c);goto sw;}
else if(c==-2)goto sw;
}