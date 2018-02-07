/*#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include<stdio.h>
#include<dos.h>
#include<time.h>
*/
void layq(char U[],int P)
{int x,y;
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
outtextxy(x-285,y-205,"   QUIZ-UP");
delay(15);
if(i>0)
setcolor(0);
outtextxy(x-285,y-205,"   QUIZ-UP");

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
//outtextxy(x+157,y-35,"Lives");
//delay(150);
outtextxy(x+157,y-35,"High Score");
char PP[5];itoa(P,PP,10);
outtextxy(x+257,y-35,PP);
delay(150);
setcolor(11);
settextstyle(0,0,3);
outtextxy(x+155,y+10,"LEVEL");
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
outtextxy(x+265,y+90,"f");
outtextxy(x+265,y+115,"h");
outtextxy(x+265,y+140,"g");
outtextxy(x+265,y+165,"j");
outtextxy(x+265,y+190,"q");
settextstyle(0,0,2);
setcolor(11);
outtextxy(x-285,y+105,U);
settextstyle(0,0,1);
setcolor(5);
outtextxy(x-285,y+135,"Instructions-");
bar(x-155,y-140,x+30,y+40);
setcolor(11);
setlinestyle(0,0,3);
rectangle(x-155,y-140,x+30,y+40);
//bar(x-150,y-140,x+20,y+50);
}

int var(clock_t &S,int &T,int &i5)
{
char f1[10],t[2]={112,'\0'};int f,j,x=getmaxx()/2,y=getmaxy()/2;
for(j=0;j<4;j++)
 {bk:
  while(!kbhit())
   {float F3=174.61,G3=196,A3=220,AS3=233.08,C=261.63,D=293.66,F=349.23,G=392,A=440,AS=466.16;
//float F3=349.23,G3=392,A3=440,AS3=466.16,C=523.25,D=587.33,F=698.46,G=783.99,A=880,AS=932.33;
int d=300;

float a[50]={D,AS,A,G,D,0,D,0,D,C,D,F,D,0,D,0,D,C,D,C,AS3,0,AS3,0,AS3,A3,F3,G3,0};
float b[50]={1,1,1,1,1,1,.75,1.25,1,1,1,1,1,1,.75,1.25,1,1,1,1,1,1,.75,1.25,1,1,1,1.5,3.5};

sound(a[i5]);
delay(b[i5++]*d);
nosound();
if(i5==29)
i5=0;
   clock_t e=clock();int r;char U[5];
   r=(e -S)/18;

if(r==60){T++;S=e;r=0;}
setcolor(3);
setfillstyle(0,0);
bar(x+230,y-60,x+270,y-45);
settextstyle(0,0,1);itoa(T,U,10);outtextxy(x+238,y-55,U);outtextxy(x+248,y-55,":");itoa(r,U,10);outtextxy(x+256,y-55,U);
settextstyle(5,0,2);
    }t[0]=getch();
 if(t[0]==8 && j==0){j=-1;continue;}
 else if(t[0]==8){t[0]=f1[--j];moverel(-14,0);setcolor(0);outtext(t);moverel(-14,0);goto bk;}
 if(t[0]==13 && j>0){f1[j]='\0';break;}if(t[0]<48||t[0]>57)goto bk;if(t[0]!=13 &&t[0]!=8 && y!=3){setcolor(12);outtext(t);f1[j]=t[0];}}
setcolor(3);
f=atoi(f1);
return f;
}

int l1(int n,int d,clock_t &S,int &T,int &i5)
{int i,a,b,j,r,p,q,c,f,s=0;
for(i=0;i<d+n;i++)
{
randomize();
p=rand()%100;
q=rand()%100;
//r=rand()%2;
r=0;
char p1[10],q1[10],f1[10],t[2]={112,'\0'};
switch(r)
{case 0:
{//gotoxy(25,8+2*i);
settextstyle(5,0,2);
outtextxy(200-30,100+i*30,"   +    =");
itoa(p,p1,10);
itoa(q,q1,10);
//cout<<p<<"+"<<q<<"=";
outtextxy(200-30,100+i*30,p1);
outtextxy(280-30,100+i*30,q1);
c=p+q;
moveto(302,100+i*30);
/*for( j=0;j<4;j++)
 {bk:t[0]=getch();
 if(t[0]==8 && j==0){j=-1;continue;}
 else if(t[0]==8){t[0]=f1[--j];moverel(-14,0);setcolor(0);outtext(t);moverel(-14,0);goto bk;}
 if(t[0]==13 && j>0){f1[j]='\0';break;}if(t[0]<48||t[0]>57)goto bk;if(t[0]!=13 &&t[0]!=8){setcolor(12);outtext(t);f1[j]=t[0];}}
f=atoi(f1);*/
//cin>>f;
f=var(S,T,i5);
if(f==c)
s++;
}break;
case 1:
{
if(q>p){a=q;b=p;}else{a=p;b=q;}
//gotoxy(25,8+2*i);
//cout<<a<<"-"<<b<<"=";
settextstyle(5,0,2);
outtextxy(200-30,100+i*30,"   -    =");
itoa(a,p1,10);
itoa(b,q1,10);
//cout<<p<<"+"<<q<<"=";
outtextxy(200-30,100+i*30,p1);
outtextxy(280-30,100+i*30,q1);
c=a-b;
moveto(302,100+i*30);
f=var(S,T,i5);
//cin>>f;
if(f==c)
s++;}
break;
}


}return s;}
int l2(clock_t &S,int &T,int &i5)
{int i,j,r,p,q,c,f,d,s=0;
char p1[10],q1[10],f1[10];
for(i=0;i<5;i++)
{
randomize();
p=rand()%11;
q=rand()%25;
if(i==0||i==2||i==4){r=0;}
else
{randomize();
r=rand()%3;}
switch(r)
{case 0:
{//gotoxy(25,8+2*i);
if(p==0){p+=6;}
else if(q==0){q+=15;}
settextstyle(5,0,2);
outtextxy(200-30,100+i*30,"   X    =");
itoa(p,p1,10);
itoa(q,q1,10);
//cout<<p<<"+"<<q<<"=";
outtextxy(200-30,100+i*30,p1);
outtextxy(280-30,100+i*30,q1);

//cout<<p<<"*"<<q<<"=";
c=p*q;
moveto(302,100+i*30);
f=var(S,T,i5);
//f=atoi(f1);
//cin>>f;
if(f==c)
s++;
}break;
case 1:
{randomize();
p=rand()%100;
q=rand()%100;

//gotoxy(25,8+2*i);
//cout<<p<<"+"<<q<<"=";
settextstyle(5,0,2);
outtextxy(200-30,100+i*30,"   +    =");
itoa(p,p1,10);
itoa(q,q1,10);
//cout<<p<<"+"<<q<<"=";
outtextxy(200-30,100+i*30,p1);
outtextxy(280-30,100+i*30,q1);

c=p+q;
moveto(302,100+i*30);
f=var(S,T,i5);
//f=atoi(f1);
//cin>>f;
if(f==c)
s++;
}break;
case 2:
{randomize();
p=rand()%100;
q=rand()%100;

int a,b;
if(q>p){a=q;b=p;}else{a=p;b=q;}
//gotoxy(25,8+2*i);
//cout<<a<<"-"<<b<<"=";
settextstyle(5,0,2);
outtextxy(200-30,100+i*30,"   -    =");
itoa(a,p1,10);
itoa(b,q1,10);
//cout<<p<<"+"<<q<<"=";
outtextxy(200-30,100+i*30,p1);
outtextxy(280-30,100+i*30,q1);

c=a-b;
moveto(302,100+i*30);
f=var(S,T,i5);
//f=atoi(f1);
//cin>>f;
if(f==c)
s++;}break;
}}
return s;
}
quiz(char U[],int &P, int &S,int &S1)
{clock_t s=clock();int T=0;
int gd=DETECT,gm,x,y,p,q,m,n;
initgraph(&gd,&gm,"C:\\turboC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
//settextstyle(4,0,12);
int i5=0;
outtextxy(x-53,y-250,"Maths Quiz");
//gotoxy(3,8);
//puts("INSTRUCTIONS-\n In this game you have to \n write the answers of \n given maths problems\n each correct answer \n will give you 10 points.");
layq(U,S);
p=30;
q=40;
setfillstyle(1,0);
settextstyle(1,0,4);
//bar3d(x+q*2,x-q,y-p,y-p*5,10,1);
setcolor(14);
outtextxy(x+280,y-3,"1");
setcolor(3);
m=l1(5,0,s,T,i5);
bar(x-155,y-140,x+30,y+40);
setcolor(11);
setlinestyle(0,0,3);
rectangle(x-155,y-140,x+30,y+40);
/*for(int i=0;i<5;i++)
{gotoxy(25,8+2*i);
 cout<<"         ";
 } */
//outtextxy(x+100,y-100,"       ");
//outtextxy(x+280,y-10,"2");
settextstyle(1,0,4);
setcolor(0);
outtextxy(x+280,y-3,"1");

setcolor(14);
outtextxy(x+280,y-3,"2");
setcolor(3);
n=l2(s,T,i5);
/*settextstyle(0,0,3);
outtextxy(x+160,y+130,"YOUR");
outtextxy(x+160,y+160,"SCORE");
*/
//gotoxy(45,9+2*i);
int n6=(m+n)*2;S1=n6;P+=S1;
char t4[5];
itoa(n6,t4,10);
settextstyle(0,0,1);
outtextxy(x+278,y-75,t4);
if(S<S1){S=S1;}
getch();
return -1;
}
