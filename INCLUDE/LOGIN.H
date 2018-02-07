/*#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<graphics.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>  */
#define C(xm,y)   moveto(xm,y)
int xm,ym,im,em=0;
fstream udm;
 class user_
{public:
int n,p,gn,ipa[8];char na[15],un[15],pa[15],db[11];};
void wel()
{int xm=getmaxx()/2,ym=getmaxy()/2;
settextstyle(10,0,5);
setcolor(4);
outtextxy(xm-260,ym-100,"ARE");
delay(500);
outtextxy(xm-120,ym-100,"YOU");
delay(500);
outtextxy(xm+30,ym-100,"READY");
delay(500);
settextstyle(9,0,5);
outtextxy(xm+255,ym-90,"?");
settextstyle(0,0,1);
setcolor(15);
outtextxy(xm-90,ym+50,"Press any key to begin");getch();
for(int im=20;im>=0;im--)
{xm=getmaxx()/2;
ym=getmaxy()/2;
settextstyle(0,0,6);
outtextxy(xm-170-im*10,ym-15,"W");
outtextxy(xm-120-im*10,ym-15+im*10,"E");
outtextxy(xm-70-im*10,ym-15-im*10,"L");
settextstyle(0,0,im+6);
outtextxy(xm-20-im*5,ym-15-im*5,"C");
settextstyle(0,0,6);
outtextxy(xm+30+im*10,ym-15-im*10,"O");
outtextxy(xm+80+im*10,ym-15+im*10,"M");
outtextxy(xm+130+im*10,ym-15,"E");
delay(20);
if(im>0)
cleardevice();
}
delay(1000);
for(im=0;im<20;im++)
{settextstyle(0,0,6);
outtextxy(xm-170-im*10,ym-15,"W");
outtextxy(xm-120-im*10,ym-15+im*10,"E");
outtextxy(xm-70-im*10,ym-15-im*10,"L");
settextstyle(0,0,6-im/4);
outtextxy(xm-20,ym-15,"C");
settextstyle(0,0,6);
outtextxy(xm+30+im*10,ym-15-im*10,"O");
outtextxy(xm+80+im*10,ym-15+im*10,"M");
outtextxy(xm+130+im*10,ym-15,"E");
delay(60);
cleardevice();
}}
void rect()
{int xm,ym;
xm=getmaxx()/2;
ym=getmaxy()/2;
setcolor(3);
rectangle(xm-310,xm+140,ym+390,ym-220);
rectangle(xm-305,xm+135,ym+385,ym-215);
setlinestyle(2,0,3);
rectangle(xm-310,xm+140,ym+390,ym-220);
rectangle(xm-305,xm+135,ym+385,ym-215);
setlinestyle(0,0,1);
}
logly(int E)
{
if(E==0)wel();
delay(100);
settextstyle(0,0,6);
if(E==0)im=10;else im=-1;
for(im;im>=0;im--)
{rectangle(xm-310,xm+140,ym+390,ym-220);
rectangle(xm-305,xm+135,ym+385,ym-215);
outtextxy(xm,ym-10-im*10,"H");
outtextxy(xm+48,ym-10+im*10,"I");
delay(100);
if(im>0)
cleardevice();
}int r=0;
if(E==0)
{for(r;r<361;r+=2)
{sound(130.81+r);
delay(20);
nosound();
ellipse(xm-80,ym,0,r,60,30);
}}

if(E==0){line(xm-100,ym+70,xm-65,ym-70);
for(r;r>=130;r-=2)
{sound(r);
delay(5);
nosound();
sound(r+260);
delay(5);
nosound();
}}
delay(200);
r=360;
if(E==0)im=0;else im=9;
for(im;im<10;im++)
{rectangle(xm-310,xm+140,ym+390,ym-220);
rectangle(xm-305,xm+135,ym+385,ym-215);
setlinestyle(2,0,3);
ellipse(xm-80,ym-im*10,0,r,60,30);
line(xm-100,ym+70-im*10,xm-65,ym-70-im*10);
settextstyle(0,0,6);
outtextxy(xm,ym-10-im*10,"HI");
delay(100);
if(im<9)
cleardevice();
}
setlinestyle(0,0,1);
rectangle(xm-310,xm+140,ym+390,ym-220);
rectangle(xm-305,xm+135,ym+385,ym-215);
for(int j=0; j<=1000; j++)
   {putpixel(random(getmaxx()),random(getmaxy()),15);
   delay(1);
   }

settextstyle(0,0,2);

settextstyle(6,0,3);
if(E==0)im=20;else im=0;
for(im;im>=0;im--)
{
setcolor(10);
outtextxy(xm-10+im*10,ym-20,"Re-Discover GAMING");
delay(100);
if(im>0)
{setcolor(0);
outtextxy(xm-10+im*10,ym-20,"Re-Discover GAMING");
} }
rect();
setcolor(14);
setfillstyle(0,0);
if(E==0)im=20;else im=0;
for(im;im>=0;im--)
{bar3d(xm-130+im*10,xm+90,ym+150,ym+30,10,1);
delay(100);
}
settextstyle(0,0,1);
if(E==0)im=10;else im=0;
for(im;im>=0;im--)
{
setcolor(15);
outtextxy(xm-120+im*10,ym+45,"Username-");
delay(10);
if(im>0)
{setcolor(0);
outtextxy(xm-120+im*10,ym+45,"Username-");
} }
if(E==0)im=10;else im=0;
for(im;im>=0;im--)
{
setcolor(15);
outtextxy(xm-120+im*10,ym+85,"Password-");
delay(10);
if(im>0)
{setcolor(0);
outtextxy(xm-120+im*10,ym+85,"Password-");
} }
rectangle(xm-120,xm-2,ym+135,ym+58);
delay(100);
rectangle(xm-120,xm+40,ym+135,ym+98);
outtextxy(xm-120,ym+140,"         NEW USER");
outtextxy(xm-120,ym+143,"         ________");
rectangle(xm+30,xm+75,ym+135,ym+130);
rectangle(xm+30,xm+75,ym+135,ym+130);
setcolor(15);
setfillstyle(9,4);
settextstyle(0,0,2);
bar3d(xm+190,ym+170,xm+280,ym+200,7,1);
outtextxy(xm+205,ym+178,"EXIT");
}

char so(int &io)
{
while(!kbhit())
{if(io==100)io=0;
float D4=293.66,F4=369.99,A=440,B=493.88,C=554.37,D=587.33,E=659.25,F=739.99,G=783.99,A5=880;
float a1[100]={F4,A,D,A5,E,0,E,D,F,A5,D,0,F4,A,D,A5,E,0,F,G,F,D,0,C,0,D4,A,D,A5,E,0,F4,A,D,A5,E,0,F4,A,D,A5,E,0,F,G,F,D,0,C,0,B,D,C,D,A,B,0,B,D,C,D,G,F,0,E,0,D,0,A5,0,D,0,E,0,C,0};
float b1[100]={1,1,1,1,3.25,.75,1,1,1,1,3.25,.75,1,1,1,1,1.75,.25,1,1,1,1.25,.75,4.25,.75,1,1,1,1,3.25,.75,1,1,1,1,3.25,.75,1,1,1,1,1.75,.25,1,1,1,1.25,.75,4.25,.75,1,1,1,1,2,1.75,.25,1,1,1,1,2,1.75,.25,2.25,.75,2.5,.5,1.25,.75,2.5,.5,2.75,.25,7.25,2.75};
sound(a1[io]);
delay(b1[io++]*300);
nosound();
} char v=getch();
return v;
}

user_ login1()
{char t[2]={3,'\0'},un[15],pa[15];int io=0;
user_ f;int s=0;


up:C(xm-115,xm-15);setcolor(9);settextstyle(0,0,1);setfillstyle(0,0);setlinestyle(0,0,2);
 bar3d(xm-120,xm-2,ym+135,ym+58,0,0);
 for(int j=0;j<15;j++)
 {bk:t[0]=so(io);if(t[0]==9 || t[0]==27){setcolor(15);setlinestyle(0,0,2);rectangle(xm-120,xm-2,ym+135,ym+58);if(t[0]==27)goto exi;else goto skip;}
 t[0]=tolower(t[0]);if(t[0]==32)goto bk;if(t[0]==8 && getx()==xm-115)j=-1;
 if(t[0]==8 && getx()!=xm-115){t[0]=un[--j];moverel(-8,0);setcolor(0);outtext(t);moverel(-8,0);goto bk;}
 if(t[0]==13 && j>0){un[j]='\0';break;}if(t[0]!=13 &&t[0]!=8){setcolor(12);outtext(t);un[j]=t[0];}}
  setcolor(15);setlinestyle(0,0,2);rectangle(xm-120,xm-2,ym+135,ym+58);

udm.seekg(0,ios::beg);
 while( f.n!=em && s<20)
 {udm.read((char*)&f,sizeof(f));
 if(strcmp(f.un,un)==0)
   {im++;goto skip;}s++;}f.n=0;
C(xm-120,ym+150);setcolor(4);outtext("Invalid Username..");delay(100);
C(xm-120,ym+150);setcolor(0);outtext("Invalid Username..");
goto up;
skip:
C(xm-115,xm+28);setcolor(9);setlinestyle(0,0,2);bar3d(xm-120,xm+40,ym+135,ym+98,0,0);
  for( j=0;j<15;j++)
 {bk1:t[0]=so(io);if(t[0]==9 ||t[0]==27){setcolor(15);setlinestyle(0,0,2);rectangle(xm-120,xm+40,ym+135,ym+98);if(t[0]==27)goto exi;t[0]=87;goto nu;}
 if(t[0]==8 && getx()==xm-115)j=-1;
 if(t[0]==8 && getx()!=xm-115){t[0]=pa[--j];moverel(-8,0);setcolor(0);outtext("*");moverel(-8,0);goto bk1;}
 if(t[0]!=13 &&t[0]!=8) {setcolor(12);outtext("*");pa[j]=t[0];}
  if(t[0]==13 && j>0){pa[j]='\0';break;}}
  setcolor(15);setlinestyle(0,0,2);rectangle(xm-120,xm+40,ym+135,ym+98);
nu:if(t[0]==87){setcolor(9);rectangle(xm+30,xm+75,ym+135,ym+130);
   t[0]=getch();if(t[0]==9 ||t[0]==27){setcolor(15);rectangle(xm+30,xm+75,ym+135,ym+130);if(t[0]==27)goto exi;else goto up;}
   if(t[0]==13)	{user_ t;t.n=-2; return t;}
exi:
rectangle(xm+30,xm+75,ym+135,ym+130);
rectangle(xm+30,xm+75,ym+135,ym+130);
setcolor(14);
setfillstyle(9,11);
settextstyle(0,0,2);
bar3d(xm+190,ym+170,xm+280,ym+200,7,1);
outtextxy(xm+205,ym+178,"EXIT");
nii:char V=so(io);
if(V==9 || V==27)
{rectangle(xm+30,xm+75,ym+135,ym+130);
rectangle(xm+30,xm+75,ym+135,ym+130);
setcolor(15);
setfillstyle(9,4);
settextstyle(0,0,2);
bar3d(xm+190,ym+170,xm+280,ym+200,7,1);
outtextxy(xm+205,ym+178,"EXIT");
setfillstyle(0,0);goto up;}
else if(V==13){f.n=-11;return f;}
else goto nii;
}
 if(strcmp(f.pa,pa)!=0)
{C(xm-120,ym+150);setcolor(4);outtext("Incorrect Password..");delay(100);
C(xm-120,ym+150);setcolor(0);outtext("Incorrect Password..");goto skip;}

return f;

}








user_ login(int E)
{user_ f;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboC3\\BGI");
setbkcolor(0);
xm=getmaxx()/2;
ym=getmaxy()/2;

logly(E);
udm.open("samp1.dat",ios::out | ios::in | ios::binary);
unsigned long ib=0,lb;
   udm.seekg(0,ios::end);
   lb=udm.tellg();
   udm.seekg(lb-sizeof(f),ios::beg);
   udm.read((char*)&f,sizeof(f));
   em=f.n;

f=login1();

udm.close();
return f;
}