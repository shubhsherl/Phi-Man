/*#include<fstream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<graphics.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>*/
class hscore
{public:char n[8][5][12];int s[8][5];
 hscore()
 {for(int r=0;r<5;r++)
  {s[0][r]=15-r*2;s[1][r]=20-r*2;s[2][r]=30-r*5;s[3][r]=50-r*5;s[4][r]=500-r*10;
  s[5][r]=60-r*6;s[6][r]=50-r*5;s[7][r]=100-r*5;}
  for(int i=0;i<8;i++)
  {strcpy(n[i][0],"Steve");
   strcpy(n[i][1],"Elon");
   strcpy(n[i][2],"Ratan");
   strcpy(n[i][3],"Albert");
   strcpy(n[i][4],"Messi");
   }
}
};

void hrect()
{int x,y;
x=getmaxx()/2;
y=getmaxy()/2;
setcolor(2);
rectangle(x-310,x+140,y+390,y-220);
rectangle(x-305,x+135,y+385,y-215);
setlinestyle(2,0,3);
setcolor(12);
rectangle(x-310,x+140,y+390,y-220);
rectangle(x-305,x+135,y+385,y-215);
setlinestyle(0,0,1);
setcolor(15);
}
void hlogo()
{setcolor(8);
setlinestyle(0,0,3);
rectangle(615,105,505,40);
setcolor(7);
setlinestyle(2,0,3);
rectangle(615,105,505,40);

setcolor(10);
setlinestyle(0,0,2);
setfillstyle(10,2);
fillellipse(560,70,40,20);
line(545,100,580,40);
//settextstyle(0,0,3);

//outtextxy(560,80,"H");
//outtextxy(585,80,"I");
settextstyle(0,0,1);
setcolor(15);
}
void gr(int c)
{int i=100;if(c)i=0;
for(i;i>=0;i-=2)
{
setcolor(10);
settextstyle(0,0,8);
outtextxy(30+i,80-i,"G");
outtextxy(240-i,80-i,"R");
delay(8);
if(i>0)
{setcolor(0);
settextstyle(0,0,8);
outtextxy(30+i,80-i,"G");
outtextxy(240-i,80-i,"R");}
hrect();
}i=100;if(c)i=0;
for(i;i>=0;i-=2)
{setcolor(3);
settextstyle(0,0,5);
outtextxy(95,100-i,"A");
outtextxy(140+i,100-i,"M");
outtextxy(185+2*i,100-i,"E");
settextstyle(0,0,5);
outtextxy(305+i,100-i,"O");
outtextxy(345+2*i,100-i,"O");
outtextxy(390+i,100-i,"M");
delay(10);
if(i>0)
{setcolor(0);
outtextxy(95,100-i,"A");
outtextxy(140+i,100-i,"M");
outtextxy(185+2*i,100-i,"E");
settextstyle(0,0,5);
outtextxy(305+i,100-i,"O");
outtextxy(345+2*i,100-i,"O");
outtextxy(390+i,100-i,"M");

}
hrect();
setcolor(10);
settextstyle(0,0,8);
outtextxy(30,80,"G");
outtextxy(240,80,"R");
hlogo();
}
}
void menu()
{setfillstyle(1,0);
for(int i=0;i<450;i+=150)
{setcolor(i-150+4);
fillellipse(180+i,280,90,65);
fillellipse(180+i,280,85,60);
//delay(300);
}
for(i=0;i<500;i+=100)
{setcolor(i-100+1);
fillellipse(130+i,210,70,45);
fillellipse(130+i,210,65,40);
//delay(300);
}

setcolor(2);
setlinestyle(0,0,3);
rectangle(30,360,610,440);
}

void info(int t,int m,int E)
{char p[2],q[2],r[2],s[2],z[2],u[2],v[2];
p[0]=2,p[1]='\0',u[0]=220,u[1]='\0',v[0]=14,v[1]='\0';
s[0]=1,s[1]='\0',z[0]=240,z[1]='\0',q[0]=30,q[1]='\0',r[0]=222,r[1]='\0';
int x=getmaxx()/2,y=getmaxy()/2;
if(t==2 || t==-5)
{setcolor(4);
settextstyle(0,0,3);
outtextxy(x-140,y-40,"123");
setcolor(15);
settextstyle(0,0,1);
outtextxy(x-110,y-10,"Quiz Up");}
if(t==3 || t==-5)
{
setcolor(10);
settextstyle(0,0,3);
outtextxy(x-40,y-40,p);
setcolor(10);
settextstyle(0,0,3);
outtextxy(x-10,y-37,q);
setcolor(15);
settextstyle(0,0,1);
outtextxy(x-10,y-10,"Go Man");
setlinestyle(0,0,3);
setcolor(10);
settextstyle(0,0,3);
circle(x+27,y-30,10);

if(3>m)
{setcolor(7);
setlinestyle(0,0,3);setfillstyle(1,7);
ellipse(x+5,y-31,0,180,13,23);
ellipse(x+5,y-31,0,180,11,20);
bar(x-10,y-33,x+20,y-3);
setcolor(0);
setfillstyle(1,0);
pieslice(x+5,y-15,0,360,2);
bar(x+7,y-13,x+3,y-8);
}}
if(t==1 || t==-5)
{setlinestyle(0,0,3);
setcolor(12);
settextstyle(0,0,3);
line(x-225,y-55,x-225,y-10);
line(x-205,y-55,x-205,y-10);
line(x-240,y-40,x-190,y-40);
line(x-240,y-25,x-190,y-25);
setcolor(4);
settextstyle(0,0,4);
outtextxy(x-200,y-20,"T");
setcolor(15);
settextstyle(0,0,1);
outtextxy(x-175,y-20,"ic");
outtextxy(x-175,y-12,"ac");
outtextxy(x-175,y-4,"oe");
}
if(t==5 || t==-5)
{
setcolor(12);
settextstyle(0,0,3);
outtextxy(x+170,y-55,s);
settextstyle(0,0,3);
setcolor(14);
outtextxy(x+190,y-37,q);
setcolor(2);
outtextxy(x+220,y-37,q);
outtextxy(x+220,y-52,q);
setcolor(15);
settextstyle(0,0,1);
outtextxy(x+205,y-10,"JumpY");
if(5>m)
{setcolor(7);
setlinestyle(0,0,3);setfillstyle(1,7);
ellipse(x+205,y-31,0,180,13,23);
ellipse(x+205,y-31,0,180,11,20);
bar(x+190,y-33,x+220,y-3);
setcolor(0);
setfillstyle(1,0);
pieslice(x+205,y-15,0,360,2);
bar(x+207,y-13,x+203,y-8);
}}
if(t==4 || t==-5)
{
setcolor(9);
settextstyle(0,0,6);
outtextxy(x+70,y-48,z);
settextstyle(0,1,6);
outtextxy(x+115,y-57,z);
setcolor(15);
settextstyle(0,0,1);
outtextxy(x+119,y-57,"S");
outtextxy(x+119,y-47,"U");
outtextxy(x+119,y-37,"D");
outtextxy(x+119,y-27,"O");
outtextxy(x+119,y-17,"K");
outtextxy(x+119,y-7,"U");
if(4>m)
{setcolor(7);
setlinestyle(0,0,3);setfillstyle(1,7);
ellipse(x+105,y-31,0,180,13,23);
ellipse(x+105,y-31,0,180,11,20);
bar(x+90,y-33,x+120,y-3);
setcolor(0);
setfillstyle(1,0);
pieslice(x+105,y-15,0,360,2);
bar(x+107,y-13,x+103,y-8);
}}
if(t==6 || t==-5)
{
setcolor(2);
settextstyle(0,0,3);
outtextxy(x-200,y+10,u);
setcolor(1);
outtextxy(x-170,y+10,u);
setcolor(4);
outtextxy(x-200,y+28,u);
setcolor(14);
outtextxy(x-170,y+28,u);
settextstyle(0,0,4);
setcolor(9);
outtextxy(x-125,y+25,v);
setcolor(15);
settextstyle(0,0,2);
outtextxy(x-185,y+70,"SOUNDO");
if(6>m)
{setlinestyle(0,0,3);setcolor(7);
setfillstyle(1,7);
ellipse(x-150,y+46,0,180,16,27);
ellipse(x-150,y+46,0,180,14,24);
bar(x-168,y+44,x-133,y+79);
setcolor(0);
setfillstyle(1,0);
pieslice(x-151,y+64,0,360,2);
bar(x-153,y+64,x-149,y+71);
}}
if(t==7 || t==-5)
{ setcolor(15);
setlinestyle(0,0,1);
circle(x-20,y+50,30);
setcolor(4);
setlinestyle(0,0,3);
setfillstyle(1,4);
pieslice(x,y+30,0,360,7);
setcolor(1);
setfillstyle(1,1);
pieslice(x-40,y+70,0,360,7);
setcolor(14);
settextstyle(0,0,2);
outtextxy(x+40,y+25,"D");
outtextxy(x+40,y+45,"U");
setcolor(4);
outtextxy(x+50,y+65,"O");
setcolor(1);
outtextxy(x+30,y+65,"O");
if(7>m)
{setcolor(7);
setfillstyle(1,7);
ellipse(x,y+46,0,180,16,27);
ellipse(x,y+46,0,180,14,24);
bar(x-18,y+44,x+17,y+79);
setcolor(0);
setfillstyle(1,0);
pieslice(x-1,y+64,0,360,2);
bar(x-3,y+64,x+1,y+71);
} }
if(t==8  || t==-5)
{int x1=x,y1=y+10;
setlinestyle(0,0,3);settextstyle(0,0,2);
setcolor(14);
rectangle(x1+100,y1+20,x1+120,y1+60);
outtextxy(x1+103,y1+33,"M");
setcolor(11);
rectangle(x1+125,y1+20,x1+145,y1+60);
outtextxy(x1+128,y1+33,"A");
setcolor(12);
rectangle(x1+150,y1+20,x1+170,y1+60);
outtextxy(x1+153,y1+33,"T");
setcolor(13);
rectangle(x1+175,y1+20,x1+195,y1+60);
outtextxy(x1+178,y1+33,"C");
setcolor(6);
rectangle(x1+200,y1+20,x1+220,y1+60);
outtextxy(x1+203,y1+33,"H");

if(8>m)
{
setcolor(7);
setfillstyle(1,7);
ellipse(x+160,y+46,0,180,16,27);
ellipse(x+160,y+46,0,180,14,24);
bar(x+142,y+44,x+177,y+79);
setcolor(0);
setfillstyle(1,0);
pieslice(x+159,y+64,0,360,2);
bar(x+157,y+64,x+161,y+71);
}}
setcolor(13);
settextstyle(0,0,3);
circle(x+260,y-103,25);
outtextxy(x+247,y-113,v);
if(!E)
{setcolor(3);
settextstyle(1,0,1);
circle(x-260,y+80,25);
outtextxy(x-280,y+67,"Back");
}

}


void update(int p[],char U[])
{hscore H;
fstream sc;sc.open("score.dat",ios::in|ios::out|ios::binary);
sc.seekg(0,ios::beg);
 sc.read((char*)&H,sizeof(H));sc.seekg(0,ios::beg);

  for(int i=0;i<8;i++)
   for(int r=0;r<5;r++)
  if(p[i]>=H.s[i][r] && strcmpi(H.n[i][r],U)!=0)
   {for(int y=4;y>r;y--)
    {char N[15];int t;
     strcpy(N,H.n[i][y-1]);t=H.s[i][y-1];
     strcpy(H.n[i][y],N);H.s[i][y]=t;}
    strcpy(H.n[i][r],U);H.s[i][r]=p[i];r=5;
    }
sc.write((char*)&H,sizeof(H));
}

class user_h
{public:
int n,p,gn,ipa[8];char na[15],un[15],pa[15],db[11];
};


navi(int &p,int E,int Fs[],int &Po)
{char v;int i=0,t=1,k=0,h,u,x=getmaxx()/2,y=getmaxy()/2,C=0;int i10=0;
up:setcolor(i-100+1);
setfillstyle(10,3);
if(t<=5)k=0;else {k=20;setcolor(i-150+4);}
setlinestyle(0,0,3);
fillellipse(130+i+2.5*k,210+3.5*k,70+k,45+k);
fillellipse(130+i+2.5*k,210+3.5*k,65+k,40+k);
info(t,p,E);
if(t>5)
for(h=i+150,u=t+1;h<450;h+=150,u++)
{setlinestyle(0,0,1);setcolor(h-150+4);setfillstyle(1,0);
fillellipse(180+h,280,90,65);
fillellipse(180+h,280,85,60);
info(u,p,E);}
if(t<=5)h=i+100,u=t+1;
else
h=0,u=1;
for(;h<500;h+=100,u++)
{setlinestyle(0,0,1);setfillstyle(1,0);
setcolor(h-100+1);
fillellipse(130+h,210,70,45);
fillellipse(130+h,210,65,40);
info(u,p,E);
}

up1:if(C==1){setfillstyle(0,0);bar(x+10,y+160,x+70,y+190);setcolor(15);settextstyle(0,0,2);char AA[5];itoa(Fs[t-1],AA,10);outtextxy(x+20,y+170,AA);}


while(!kbhit())
{if(i10==90)i10=0;
float D4=293.66,F=349.23,G=392,A=440,C=523.25,D=587.33,E=659.25;
float a1[90]={F,G,A,G,A,C,A,C,D,0,D,0,D,0,E,D,C,D,C,A,C,A,G,0,G,0,G,0,F,G,A,G,A,C,A,C,D,0,D,0,D,0,E,D,C,D,C,A,C,A,G,0,G,0,G,0,A,G,F,0,F,0,F,0,A,G,F,0,F,0,G,0,F,G,A,G,A,C,A,G,F,D4,F,0};
float b1[90]={1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,1.5,.5,1.5,.5,1.5,.5,1,1,2,1,1,2,1,1,3,1,1.75,.25};
sound(a1[i10]);
delay(b1[i10++]*300);
nosound();
}
v=getch();v=tolower(v);
if(v==9 && t<=5)
{int h=i;//sound(293*3.5);delay(25);nosound();sound(392*3.5);delay(25);nosound();
{setlinestyle(0,0,1);
setcolor(h-100+1);
fillellipse(130+h,210,70,45);
fillellipse(130+h,210,65,40);
info(t,p,E);
}
i+=100;t++;
if(i==500)i=0;
goto up;
}
//if(v=='n' && i>500)i=0;
else if(v==9 && t>5)
{//sound(293*3.5);delay(25);nosound();sound(392*3.5);delay(25);nosound();
setlinestyle(0,0,1);
setcolor(i-150+4);
fillellipse(180+i,280,90,65);
fillellipse(180+i,280,85,60);
info(t,p,E);
i+=150;t++;
if(i==450)i=0,t=1;
goto up;
}
if(v==13 && t<=p)
return t;
else if(v==13 && t>p)
{sound(329);delay(100);nosound();sound(293);delay(100);nosound(); sound(261);delay(100);nosound();
setcolor(14);settextstyle(0,0,2);
outtextxy(80+i+2.5*k,205+3.5*k,"Locked");
if(p+1!=t)
{setfillstyle(0,0);bar(x-70,y+150,x+140,y+190);setcolor(13);settextstyle(0,0,1);outtextxy(x-50,y+170," !Unlock Previous games! ");
getch();bar(x-70,y+160,x+140,y+190);}
else if((t-1)*500>Po)
{setfillstyle(0,0);bar(x-70,y+150,x+140,y+190);setcolor(5);settextstyle(0,0,1);char AA[5];itoa((t-1)*500,AA,10);outtextxy(x-50,y+170,AA);outtextxy(x-50+strlen(AA)*8,y+170," Coins required!!");
getch();bar(x-70,y+160,x+140,y+190);}
else
{settextstyle(0,0,1);
setcolor(10);
bar3d(x-50,y+160,x+20,y+180,7,1);
outtextxy(x-45,y+168,"Unlock");
setcolor(15);outtextxy(x-45,y+168,"_");
setcolor(4);
bar3d(x+30,y+160,x+90,y+180,7,1);
outtextxy(x+35,y+168,"Cancel");setcolor(15);outtextxy(x+35,y+168,"_");
lolo:char t12=getch();t12=tolower(t12);
if(t12=='u')
{user_h Ha;p++;Po-=(t-1)*500;
 fstream sco;sco.open("samp1.dat", ios::out |ios::in|ios::binary);
sco.seekg(E*sizeof(Ha),ios::beg);
sco.read((char*)&Ha,sizeof(Ha));
Ha.p=Po;Ha.gn=p;
sco.seekg(E*sizeof(Ha),ios::beg);
sco.write((char*)&Ha,sizeof(Ha));
sco.close();
char Q[5];itoa(Po,Q,10);setfillstyle(0,0);bar(x-170,y+150,x+140,y+190);setcolor(14);settextstyle(0,0,2);outtextxy(x-170,y+170,Q);}
else if(t12=='c'||t12==27)
{setfillstyle(0,0);bar(x-60,y+150,x+140,y+190);}
else goto lolo;}

goto up;}

if(v==8 && E==0)
{setcolor(2);
settextstyle(1,0,1);
circle(x-260,y+80,25);setcolor(12);
outtextxy(x-280,y+67,"Back");
mm1:char f=getch();
if(f==13){return -7;}
else if(f==27 || f==9 || f==8)
{setcolor(3);
settextstyle(1,0,1);
circle(x-260,y+80,25);
outtextxy(x-280,y+67,"Back");
goto up;}
else goto mm1;}


if(v=='m')
{char qk[]={14,'\0'};
if(C==0)
{setlinestyle(0,0,3);
setfillstyle(9,3);
setcolor(14);
fillellipse(x+260,y-103,25,25);
settextstyle(0,0,3);circle(x+260,y-103,25);setlinestyle(0,0,1);
outtextxy(x+247,y-113,qk);
setlinestyle(0,0,1);C=1;}
/*mm:char f=getch();
if(f==13){return -19;}
else if(f==27 || f==9 || f=='m' || f=='M')*/
else
{setfillstyle(1,0);
setcolor(0);fillellipse(x+260,y-103,25,25);
setcolor(13);
settextstyle(0,0,3);
circle(x+260,y-103,25);
outtextxy(x+247,y-113,qk);
setfillstyle(0,0);bar(x+10,y+160,x+70,y+190);
C=0;}
goto up;
//else goto mm;
}


if(v==27)
{qw:
setfillstyle(1,10);
setcolor(4);
bar3d(x+200,y+170,x+270,y+190,10,1);
settextstyle(0,0,1);
setcolor(14);
outtextxy(x+210,y+177,"Log Out");
int f=getch();
if(f==13){return -1;}
else if(f==27 || f==9 || f=='n' || f=='N')
{setfillstyle(1,8);
setcolor(4);
bar3d(x+200,y+170,x+270,y+190,10,1);
settextstyle(0,0,1);
setcolor(15);
outtextxy(x+210,y+177,"Log Out");
goto up;
}
else goto qw;
}

else goto up1;

}


hpage(int fn,int &fp,int &fgn,int fipa[8],char fna[15],char fun[15],int C)
{//nosound();
hscore H;
fstream sco;sco.open("score.dat", ios::out |ios::in|ios::binary);
sco.seekg(0,ios::end);
if(sco.tellg()==0)
sco.write((char*) &H,sizeof(H));sco.close();
update(fipa,fna);
int gd=DETECT,gm,o,x,y,i=0,maxx,maxy;
initgraph(&gd,&gm,"C:\\turboC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
maxx=2*x;maxy=2*y;
char v,gp[5];itoa(fp,gp,10);
hrect();
hlogo();gr(C);
menu();
info(-5,fgn,fn);
setcolor(14);
settextstyle(0,0,2);
outtextxy(x-270,y+130,fna);
outtextxy(x+20,y+130,fun);
outtextxy(x-270,y+170,"COINS-");
outtextxy(x-170,y+170,gp);
setfillstyle(1,8);
setcolor(4);
bar3d(x+200,y+170,x+270,y+190,10,1);
settextstyle(0,0,1);
setcolor(15);
outtextxy(x+210,y+177,"Log Out");



return navi(fgn,fn,fipa,fp);






//getch();
}