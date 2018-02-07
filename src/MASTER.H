/*#include<fstream.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<graphics.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>   */
fstream M;
class hscore1
{public:char n[8][5][12];int s[8][5];};
void mas()
{int x=getmaxx()/2,y=getmaxy()/2;
setlinestyle(0,0,1);
setfillstyle(1,7);
setcolor(5);
bar3d(x-315,x-315,y+400,y+235,0,0);
setfillstyle(0,0);
bar3d(x-305,x-305,y+390,y+225,0,0);
setcolor(11);
int p=x-20,q=y+10;
setfillstyle(8,11);

setlinestyle(0,0,3);
int poly[30];
poly[0]=p-100;
poly[1]=q-30;
poly[2]=p-60;
poly[3]=q;
poly[4]=p-20;
poly[5]=q-30;
poly[6]=p+20;
poly[7]=q;
poly[8]=p+60;
poly[9]=q-30;
poly[10]=p+100;
poly[11]=q;
poly[12]=p+140;
poly[13]=q-30;
poly[28]=p-100;
poly[29]=q-30;
poly[26]=p-100;
poly[27]=q-60;
poly[24]=p-60;
poly[25]=q-90;
poly[22]=p-20;
poly[23]=q-60;
poly[20]=p+20;
poly[21]=q-90;
poly[18]=p+60;
poly[19]=q-60;
poly[16]=p+100;
poly[17]=q-90;
poly[14]=p+140;
poly[15]=q-60;
for(int i=0;i<16;i++)
{fillpoly(i,poly);
delay(150);
if(i==15)
{setcolor(0);
setfillstyle(1,0);
bar(x-100,y-100,x+100,y+50);
setfillstyle(8,11);
setcolor(11);
setlinestyle(0,0,3);
fillpoly(i,poly);
}
}

setfillstyle(1,0);
bar(p-95,q-51,p-2,q-36);
bar(p+15,q-51,p+137,q-36);
setcolor(4);
settextstyle(0,0,2);
outtextxy(p-97,q-50,"MASTER CONTROLS");
delay(500);
setlinestyle(0,0,1);

int poly2[18];
poly2[0]=x-295;
poly2[1]=y-15;
poly2[2]=x-130;
poly2[3]=y-15;
poly2[4]=x-80;
poly2[5]=y+20;
poly2[6]=x+80;
poly2[7]=y+20;
poly2[8]=x+130;
poly2[9]=y-15;
poly2[10]=x+300;
poly2[11]=y-15;
poly2[12]=x+300;
poly2[13]=y+215;
poly2[14]=x-295;
poly2[15]=y+215;
poly2[16]=x-295;
poly2[17]=y-15;
setcolor(2);
setfillstyle(1,2);
fillpoly(9,poly2);

setfillstyle(1,0);
int poly3[18];
poly3[0]=x-290;
poly3[1]=y-10;
poly3[2]=x-130;
poly3[3]=y-10;
poly3[4]=x-80;
poly3[5]=y+25;
poly3[6]=x+80;
poly3[7]=y+25;
poly3[8]=x+130;
poly3[9]=y-10;
poly3[10]=x+295;
poly3[11]=y-10;
poly3[12]=x+295;
poly3[13]=y+210;
poly3[14]=x-290;
poly3[15]=y+210;
poly3[16]=x-290;
poly3[17]=y-10;
fillpoly(9,poly3);
setcolor(1);
rectangle(x+130,y-220,x+300,y-20);
rectangle(x+135,y-215,x+295,y-25);
setcolor(5);
rectangle(x-125,y-220,x+125,y-85);
rectangle(x-120,y-215,x+120,y-90);
setcolor(10);
int poly4[18];
poly4[0]=x-290;
poly4[1]=y-10;
poly4[2]=x-130;
poly4[3]=y-10;
poly4[4]=x-80;
poly4[5]=y+25;
poly4[6]=x-290;
poly4[7]=y+25;

setfillstyle(5,6);
fillpoly(4,poly4);
int poly5[18];
poly5[0]=x+80;
poly5[1]=y+25;
poly5[2]=x+130;
poly5[3]=y-10;
poly5[4]=x+295;
poly5[5]=y-10;
poly5[6]=x+295;
poly5[7]=y+25;

setfillstyle(4,6);
fillpoly(4,poly5);
setcolor(13);
line(x-289,y+60,x+294,y+60);
setcolor(12);
line(x-289,y+90,x+294,y+90);
line(x-289,y+120,x+294,y+120);
line(x-289,y+150,x+294,y+150);
line(x-289,y+180,x+294,y+180);
//line(x-289,y+150,x+294,y+150);
//line(x-289,y+170,x+294,y+170);
delay(200);
setcolor(14);
rectangle(x-295,y-220,x-130,y-20);
rectangle(x-290,y-215,x-135,y-25);
setcolor(10);
settextstyle(0,0,1);
outtextxy(x-280,y-200,"User Data");
outtextxy(x-280,y-170,"Modify");
outtextxy(x-280,y-140,"Highscore");
outtextxy(x-280,y-110,"Add User");
outtextxy(x-280,y-80,"Game Room");
setfillstyle(2,4);
delay(200);
setcolor(15);
setlinestyle(0,0,1);
bar(x-200,y-50,x-140,y-30);
outtextxy(x-197,y-43,"Log Out");
int y1=y+30;
setcolor(9);
settextstyle(0,0,3);
outtextxy(x+145,y-205,"MODIFY");
/*setcolor(14);
settextstyle(0,0,1);
outtextxy(x+150,y1-200,"> Kotoamatsukami");
outtextxy(x+150,y1-170,"> Rasengan");
outtextxy(x+150,y1-140,"> Chidori");
outtextxy(x+150,y1-110,"> Kamui");
outtextxy(x+150,y1-80,"> Amateratsu");
*/setcolor(3);
settextstyle(0,0,2);
outtextxy(x-40,y-205,"GAMES");
int y2=y+10;
delay(200);
setcolor(7);
settextstyle(0,0,1);
outtextxy(x-100,y2-185,"Tic-Tac-Toe");
outtextxy(x-100,y2-165,"Quiz Up");
outtextxy(x-100,y2-145,"Boo Man");
outtextxy(x-100,y2-125,"Sudoku");
outtextxy(x+40,y2-185,"Jumpy");
outtextxy(x+40,y2-165,"Soundo");
outtextxy(x+40,y2-145,"Duoo");
outtextxy(x+40,y2-125,"Match IT");
}
 dob1(char a1[])
 {int d,m,y,a[15];
  for(d=0;d<11;d++)
  a[d]=a1[d]-48;
  d=a[0]*10+a[1],m=a[3]*10+a[4],y=a[6]*1000+a[7]*100+a[8]*10+a[9];
  if(d>31 || d<1)return 1;
  if(m>12 || m<1)return 1;
  if(y>2016 || y<1960)return 1;
  return 0;}

class user_1
{public:
int n,p,gn,ipa[8];char na[15],un[15],pa[15],db[11];
}Q;
void dispa(int e)
{int x=getmaxx()/2,y=getmaxy()/2;
user_1 f;char U[50],l[15];settextstyle(0,0,1);
setfillstyle(0,0);bar(x-289,y+31,x+294,y+211);
setcolor(13);
line(x-289,y+60,x+294,y+60);
setcolor(12);
line(x-289,y+90,x+294,y+90);
line(x-289,y+120,x+294,y+120);
line(x-289,y+150,x+294,y+150);
line(x-289,y+180,x+294,y+180);

setcolor(3);
outtextxy(x-285,y+50,"S.n.     Name      Username    Coins   Game Level   Password    DOB");
M.seekg(sizeof(f),ios::beg);setcolor(11);
for(int i=1;i<=e && i<=5;i++)
{U[0]='\0';strcat(U," ");
M.read((char*)&f,sizeof(f));
itoa(f.n,l,10);
strcat(U,l);for(int E=13;E>10;E--)strcat(U," ");strcat(U,f.na);for(E=15;E>strlen(f.na);E--)strcat(U," ");strcat(U,f.un);for(E=15;E>strlen(f.un);E--)strcat(U," ");itoa(f.p,l,10);strcat(U,l);
for(E=14;E>11;E--)strcat(U," ");itoa(f.gn,l,10);strcat(U,l);for(E=14;E>10;E--)strcat(U," ");strcat(U,f.pa);for(E=15;E>strlen(f.pa);E--)strcat(U," ");strcat(U,f.db);
outtextxy(x-285,y+50+i*30,U); }
}
void deleta(int &e)
{fstream Ud;user_1 y;char on[]={"temp.dat"},nn[]={"samp1.dat"};
 Ud.open("temp.dat",ios::out|ios::in|ios::binary);
 M.seekg(0,ios::beg);Ud.seekg(0,ios::beg);
 for(int i=0;i<e;i++)
 {M.read((char*)&y,sizeof(y));
  Ud.write((char*)&y,sizeof(y));}M.close();
  remove("samp1.dat");Ud.close();
  rename(on,nn);
 M.open("samp1.dat",ios::out|ios::in|ios::binary);e--;


}
void deletesc(user_1 f)
{hscore1 H;int t[6]={0,0,0,0,0,0};char T[6][10]={{"Tony"},{"Virat"},{"Denn"},{"Ston"},{"Tron"},{"Trek"}};
fstream sc;sc.open("score.dat",ios::in|ios::out|ios::binary);
sc.seekg(0,ios::beg);
 sc.read((char*)&H,sizeof(H));sc.seekg(0,ios::beg);
  for(int q=0;q<8;q++)
  for(int i=0;i<8;i++)
   for(int r=0;r<5;r++)
  if(strcmpi(H.n[i][r],f.na)==0 &&  f.ipa[i]==H.s[i][r])
   {for(int y=0;y<6;y++)
   for(int e=0;e<5;e++)
   if(strcmpi(H.n[i][e],T[y])==0)t[y]++;
  for(y=0;y<6;y++)
  if(t[y]==0)
  {strcpy(H.n[i][r],T[y]);H.s[i][r]=(H.s[i][r-1]+H.s[i][r+1])/2;}
   }
sc.write((char*)&H,sizeof(H));
}


edito(char n[],char u[],char p[],int e,char d[]="1")
{int i=0,x=getmaxx()/2,y=getmaxy()/2;user_1 f;f.n=0;unsigned long T=M.tellg();
char t[2]={2,'\0'},un1[15];strcpy(un1,u);
setcolor(5);outtextxy(x-285,y+50,"         Name");
rectangle(x-265,y+30,x-140,y+45);
moveto(x-262,y+35);
for(int j=0;j<15;j++)
 {bk3:t[0]=getch();
 if(t[0]==8 && getx()==x-262)j=-1;
 if(t[0]==8 && getx()!=x-262){t[0]=n[--j];moverel(-8,0);setcolor(0);outtext(t);moverel(-8,0);goto bk3;}
 else if(t[0]==13 && j>0){n[j]='\0';break;}
 else  {setcolor(12);if(t[0]!=13 && t[0]!=8)outtext(t);n[j]=t[0];}}
setcolor(3);outtextxy(x-285,y+50,"         Name");
us:i=0;setcolor(5);outtextxy(x-285,y+50,"                   Username");
setfillstyle(0,0);setcolor(12);bar(x-135,y+30,x-5,y+45);rectangle(x-135,y+30,x-5,y+45);
moveto(x-132,y+35);
for( j=0;j<15;j++)
 {bk2:t[0]=getch();if(t[0]==32)goto bk2; if(t[0]==8 && getx()==x-132)j=-1;
t[0]=tolower(t[0]); if(t[0]==8 && getx()!=x-132){t[0]=u[--j];moverel(-8,0);setcolor(0);outtext(t);moverel(-8,0);goto bk2;}
 else if(t[0]==13 && j>0){u[j]='\0';break;}
 else  {setcolor(12);if(t[0]!=13 && t[0]!=8)outtext(t);u[j]=t[0];}}
M.seekg(0,ios::beg);
 while( f.n!=e)
 {M.read((char*)&f,sizeof(f));
 if(strcmp(f.un,u)==0 && strcmp(un1,u)!=0)
   {i++;break;}}f.n=0;M.seekg(T,ios::beg);
 if(i==1){setcolor(14);outtextxy(x,y+35,"User Already exist");getch();setcolor(0);outtextxy(x,y+35,"User Already exist");goto us;}
setcolor(3);outtextxy(x-285,y+50,"                   Username");
setcolor(5);outtextxy(x-285,y+50,"                                                    Password");

rectangle(x+5,y+30,x+130,y+45);
moveto(x+8,y+35);
for( j=0;j<15;j++)
 {bk1:t[0]=getch(); if(t[0]==8 && getx()==x+8)j=-1;
 if(t[0]==8 && getx()!=x+8){t[0]=p[--j];moverel(-8,0);setcolor(0);outtext(t);moverel(-8,0);goto bk1;}
 else if(t[0]==13 && j>0){p[j]='\0';break;}
 else  {setcolor(12);if(t[0]!=13 && t[0]!=8)outtext(t);p[j]=t[0];}}
setcolor(3);outtextxy(x-285,y+50,"                                                    Password");

if(d[0]=='0')
{setcolor(5);outtextxy(x-285,y+50,"                                                                DOB");

up0:setcolor(5);bar(x+145,y+30,x+270,y+45);rectangle(x+145,y+30,x+270,y+45);moveto(x+148,y+35);
outtextxy(x+148,y+35,"  /  /");
 for( j=0;j<11;j++)
 { if(j==2||j==5){moverel(8,0);continue;}if(j==10){d[j]='\0';continue;}
  bk4:t[0]=getch();
  if(t[0]==8 && getx()==148+x)j=-1;if(t[0]==8 && getx()!=x+148){if(j==3 || j==6){j--;moverel(-8,0);}t[0]=d[--j];moverel(-8,0);setcolor(0);outtext(t);moverel(-8,0);goto bk4;}
 if(!(t[0]<58 && t[0]>46))goto bk4;
 if(t[0]!=13 &&t[0]!=8) {setcolor(12);outtext(t);d[j]=t[0];}}
 if(dob1(d)){moveto(x+190,y-50);setcolor(4);outtext("Invaild Date");getch();
 moveto(x+190,y-50);setcolor(0);outtext("Invalid Date");
 goto up0;}setcolor(3);outtextxy(x-285,y+50,"                                                                DOB");

}
setfillstyle(0,0);bar(x+5,y+30,x+130,y+45);bar(x+145,y+30,x+270,y+45);bar(x-265,y+30,x-140,y+45);bar(x-135,y+30,x-5,y+45);


}

dispasc(int i, hscore1 H)
 {int x=getmaxx()/2,y=getmaxy()/2;setfillstyle(0,0);bar(x-289,y+31,x+294,y+211);
setcolor(13);
line(x-289,y+60,x+294,y+60);
setcolor(12);
line(x-289,y+90,x+294,y+90);
line(x-289,y+120,x+294,y+120);
line(x-289,y+150,x+294,y+150);
line(x-289,y+180,x+294,y+180);
setcolor(3);
 outtextxy(x-125,y+50,"Top Scorers          Score");
 for(int g=0;g<5;g++)
 {setcolor(4);outtextxy(x-125,y+80+g*30,H.n[i][g]);char n[5];itoa(H.s[i][g],n,10);
  setcolor(14);outtextxy(x+45,y+80+g*30,n);}}


modi(int &e)
{int x=getmaxx()/2,y=getmaxy()/2,y1=y+30,i;
user_1 f;char U[50],l[5],v,L[5];settextstyle(0,0,1);
setcolor(9);
settextstyle(0,0,3);
outtextxy(x+145,y-205,"MODIFY");
setcolor(14);
settextstyle(0,0,1);
outtextxy(x+150,y1-200,"Edit");
outtextxy(x+150,y1-170,"Delete");
outtextxy(x+150,y1-140,"Bonus");
outtextxy(x+150,y1-110,"Score");
outtextxy(x+150,y1-80,"Poke");

setcolor(3);
dp:dispa(e);M.seekg(sizeof(f),ios::beg);setcolor(11);
for(i=1;i<=e;i++)
{setcolor(13);
line(x-289,y+60,x+294,y+60);
setcolor(12);
line(x-289,y+90,x+294,y+90);
line(x-289,y+120,x+294,y+120);
line(x-289,y+150,x+294,y+150);
line(x-289,y+180,x+294,y+180);setcolor(6);
setfillstyle(1,7);
bar(x-289,y+30+i*30,x+294,y+60+i*30);setcolor(6);
U[0]='\0';strcat(U," ");
M.read((char*)&f,sizeof(f));
itoa(f.n,l,10);
strcat(U,l);for(int E=13;E>10;E--)strcat(U," ");strcat(U,f.na);for(E=15;E>strlen(f.na);E--)strcat(U," ");strcat(U,f.un);for(E=15;E>strlen(f.un);E--)strcat(U," ");itoa(f.p,L,10);strcat(U,L);
for(E=14;E>11;E--)strcat(U," ");itoa(f.gn,l,10);strcat(U,l);for(E=14;E>10;E--)strcat(U," ");strcat(U,f.pa);for(E=15;E>strlen(f.pa);E--)strcat(U," ");strcat(U,f.db);
outtextxy(x-285,y+50+i*30,U);
dd:v=getch();v=tolower(v);
if(v=='s' && i!=e)
{sound(293*2.5);delay(50);nosound();sound(392*2.5);delay(50);nosound();setfillstyle(1,0);bar(x-289,y+30+i*30,x+294,y+60+i*30);setcolor(11);outtextxy(x-285,y+50+i*30,U);}
else if(v=='w')
{sound(293*2.5);delay(50);nosound();sound(392*2.5);delay(50);nosound();setfillstyle(1,0);bar(x-289,y+30+i*30,x+294,y+60+i*30);setcolor(11);outtextxy(x-285,y+50+i*30,U);i!=1?i-=2:i=0;M.seekg((i+1)*sizeof(f),ios::beg);}
else if(v=='a')
{setfillstyle(1,0);bar(x-289,y+30+i*30,x+294,y+60+i*30);setcolor(11);outtextxy(x-285,y+50+i*30,U);
setcolor(13);
line(x-289,y+60,x+294,y+60);
setcolor(12);
line(x-289,y+90,x+294,y+90);
line(x-289,y+120,x+294,y+120);
line(x-289,y+150,x+294,y+150);
line(x-289,y+180,x+294,y+180);setcolor(6);
return -2;}


else if(v==13 || v=='d')
{int y1=y+30,t=0,p;
char op[][20]={{"Edit"},{"Delete"},{"Bonus"},{"Score"},{"Poke"}};
char v;
setcolor(0);
settextstyle(0,0,1);
outtextxy(x+150,y1-200,op[t]);
setcolor(14);
settextstyle(0,0,2);
outtextxy(x+150,y1-200,op[t]);
up:
v=getch();v=tolower(v);
if(v=='s')
{sound(293*2);delay(50);nosound();sound(392*2);delay(50);nosound();
setcolor(0);
settextstyle(0,0,2);
outtextxy(x+150,y1-200+t*30,op[t]);
setcolor(14);
settextstyle(0,0,1);
outtextxy(x+150,y1-200+t*30,op[t]);
t++;if(t==5)t=0;
setcolor(0);
settextstyle(0,0,1);
outtextxy(x+150,y1-200+t*30,op[t]);
setcolor(14);
settextstyle(0,0,2);
outtextxy(x+150,y1-200+t*30,op[t]);
goto up;}

if(v=='w')
{sound(293*2);delay(50);nosound();sound(392*2);delay(50);nosound();
setcolor(0);
settextstyle(0,0,2);
outtextxy(x+150,y1-200+t*30,op[t]);
setcolor(14);
settextstyle(0,0,1);
outtextxy(x+150,y1-200+t*30,op[t]);
t--;if(t==-1)t=4;
setcolor(0);
settextstyle(0,0,1);
outtextxy(x+150,y1-200+t*30,op[t]);
setcolor(14);
settextstyle(0,0,2);
outtextxy(x+150,y1-200+t*30,op[t]);
goto up;}
if(v==13 || v=='d')
{setcolor(0);
settextstyle(0,0,2);
outtextxy(x+150,y1-200+t*30,op[t]);
setcolor(14);
settextstyle(0,0,1);
outtextxy(x+150,y1-200+t*30,op[t]);
switch(t)
{case 0:edito(f.na,f.un,f.pa,e);f.n=U[1]-48,f.gn=atoi(l),f.p=atoi(L);M.seekg((i)*sizeof(f),ios::beg);M.write((char*)&f,sizeof(f));setfillstyle(1,0);bar(x+215,y1-145,x+270,y1-125);  goto dp;
 case 1:user_1 F;setcolor(5);settextstyle(0,0,1);outtextxy(x+190,y1-90,"Sure? Y/N");
 char QW=getch();if(QW=='Y'||QW=='y')
 {M.seekg((i)*sizeof(f),ios::beg);M.read((char*)&F,sizeof(F));deletesc(F);
 for(int k=i;k<e;k++)
 {M.seekg((k+1)*sizeof(f),ios::beg);M.read((char*)&F,sizeof(F));F.n--;
 M.seekg((k)*sizeof(f),ios::beg);M.write((char*)&F,sizeof(F));}deleta(e);}setcolor(0);settextstyle(0,0,1);outtextxy(x+190,y1-90,"Sure? Y/N");
setfillstyle(0,0);bar(x-289,y+31,x+294,y+210);goto dp;
 case 2:{char d[2]={2,'\0'},no[6];moveto(x+220,y1-135);setcolor(12);rectangle(x+215,y1-145,x+270,y1-125);
 for(int j=0;j<4;j++)
 {bk3:d[0]=getch();if(d[0]==8 && getx()==x+220)j=-1;
 if(d[0]==8 && getx()!=x+220){d[0]=no[--j];moverel(-8,0);setcolor(0);outtext(d);moverel(-8,0);goto bk3;}
 else if(d[0]==13 && j>0){no[j]='\0';break;}
 else  {setcolor(12);if(d[0]!=13 && d[0]!=8)outtext(d);no[j]=d[0];}}
p=atoi(no);f.p=p+atoi(L);f.n=U[1]-48;f.gn=atoi(l);M.seekg((i)*sizeof(f),ios::beg);M.write((char*)&f,sizeof(f));setfillstyle(1,0);bar(x+215,y1-145,x+270,y1-125);bar(x-289,y+30+i*30,x+294,y+60+i*30);setcolor(11);outtextxy(x-285,y+50+i*30,U);setfillstyle(0,0);bar(x-289,y+31,x+294,y+210);goto dp;}
 case 3:
 int c[8],i=0;char G[8][20]={{"Tic-Tac-Toe"},{"Quiz Up"},{"Boo Man"},{"Sudoku"},{"Jumpy"},{"Soundo"},{"Duoo"},{"Match IT"}};
yyd:
setfillstyle(1,7);
bar(x-110+i*20,y-185+(i*9),x-110+strlen(G[i])*10+i*20,y-160+(i*9));
setcolor(0);outtextxy(x-100,y-175,G[i]);
yy:sound(293*1.5);delay(50);nosound();sound(392*1.5);delay(50);nosound();sound(293*1.5);delay(50);nosound();sound(392*1.5);delay(50);nosound();char AA[5];itoa(f.ipa[i],AA,10);setfillstyle(0,0);bar(x+247,y1-115,x+298,y1-100);setcolor(5);settextstyle(0,0,1);outtextxy(x+250,y1-110,AA);setfillstyle(0,7);
char b=getch();b=tolower(b);
if(i<=3)
{setfillstyle(0,0);
bar(x-110,y-185+i*20,x-110+strlen(G[i])*10,y-160+i*20);
setcolor(7);outtextxy(x-100,y-175+i*20,G[i]);}
else if(i>3)
{setfillstyle(0,0);
bar(x+30,y-185+(i-4)*20,x+30+strlen(G[i])*10,y-160+(i-4)*20);
setcolor(7);outtextxy(x+40,y-175+(i-4)*20,G[i]);
}
if(b=='s')i==7?i=0:i++;
 if(b=='w')i==0?i=7:i--;
 if(b=='d'){if(i<=3)i+=4;else i-=4;}
  if(b=='a'){if(i>3)i-=4;else i+=4;}

if(i<=3)
{setfillstyle(1,7);
bar(x-110,y-185+i*20,x-110+strlen(G[i])*10,y-160+i*20);
setcolor(0);outtextxy(x-100,y-175+i*20,G[i]);}
else if(i>3)
{setfillstyle(1,7);
bar(x+30,y-185+(i-4)*20,x+30+strlen(G[i])*10,y-160+(i-4)*20);
setcolor(0);outtextxy(x+40,y-175+(i-4)*20,G[i]);
}

if(b==8 || b==27)
{if(i<=3)
{setfillstyle(0,0);
bar(x-110,y-185+i*20,x-110+strlen(G[i])*10,y-160+i*20);
setcolor(7);outtextxy(x-100,y-175+i*20,G[i]);}
else if(i>4)
{setfillstyle(0,0);
bar(x+30,y-185+(i-4)*20,x+30+strlen(G[i])*10,y-160+(i-4)*20);
setcolor(7);outtextxy(x+40,y-175+(i-4)*20,G[i]);
}setfillstyle(0,0);bar(x-289,y+31,x+294,y+211);
setfillstyle(0,0);bar(x+247,y1-115,x+298,y1-100);goto dp;}
else goto yy;






 break;
 case 4:settextstyle(0,0,1);
setfillstyle(1,0);bar(x-289,y+30+i*30,x+294,y+60+i*30);setcolor(11);outtextxy(x-285,y+50+i*30,U);
setcolor(13);
line(x-289,y+60,x+294,y+60);
setcolor(12);
line(x-289,y+90,x+294,y+90);
line(x-289,y+120,x+294,y+120);
line(x-289,y+150,x+294,y+150);
line(x-289,y+180,x+294,y+180);outtextxy(x-288,y+50+i*30,"*");
return -2;}
}


}
else goto dd;
}

}

 navi1()
{int x=getmaxx()/2,y=getmaxy()/2,t=0;
char op[][20]={{"User Data"},{"Modify"},{"Highscore"},{"Add User"},{"Game Room"}};
char v;
setcolor(0);
settextstyle(0,0,1);
outtextxy(x-280,y-200,op[t]);
setcolor(10);
settextstyle(0,0,2);
outtextxy(x-280,y-200,op[t]);

up:
v=getch();v=tolower(v);
if(v=='s')
{sound(293);delay(50);nosound();sound(392);delay(50);nosound();
if(t==5)
{setfillstyle(2,4);
settextstyle(0,0,1);setcolor(15);
setlinestyle(0,0,1);
bar(x-200,y-50,x-140,y-30);
outtextxy(x-197,y-43,"Log Out");
}
else {setcolor(0);
settextstyle(0,0,2);
outtextxy(x-280,y-200+t*30,op[t]);
setcolor(10);
settextstyle(0,0,1);
outtextxy(x-280,y-200+t*30,op[t]);}
t++;if(t==6)t=0;
if(t==5)
{setfillstyle(2,9);
setcolor(14);
settextstyle(0,0,1);setlinestyle(0,0,1);
bar(x-200,y-50,x-140,y-30);
outtextxy(x-197,y-43,"Log Out");
}
else {setcolor(0);
settextstyle(0,0,1);
outtextxy(x-280,y-200+t*30,op[t]);
setcolor(10);
settextstyle(0,0,2);
outtextxy(x-280,y-200+t*30,op[t]); }
goto up;}

if(v=='w')
{sound(293);delay(50);nosound();sound(392);delay(50);nosound();
if(t==5)
{setfillstyle(2,4);
setcolor(15);
settextstyle(0,0,1);setlinestyle(0,0,1);
bar(x-200,y-50,x-140,y-30);
outtextxy(x-197,y-43,"Log Out");
}
else {setcolor(0);
settextstyle(0,0,2);
outtextxy(x-280,y-200+t*30,op[t]);
setcolor(10);
settextstyle(0,0,1);
outtextxy(x-280,y-200+t*30,op[t]);  }
t--;if(t==-1)t=5;
if(t==5)
{setfillstyle(2,9);
setcolor(14);
settextstyle(0,0,1);setlinestyle(0,0,1);
bar(x-200,y-50,x-140,y-30);
outtextxy(x-197,y-43,"Log Out");
}
else {setcolor(0);
settextstyle(0,0,1);
outtextxy(x-280,y-200+t*30,op[t]);
setcolor(10);
settextstyle(0,0,2);
outtextxy(x-280,y-200+t*30,op[t]);}
goto up;}
if(v==13 || v=='d')
{setcolor(0);
settextstyle(0,0,2);

outtextxy(x-280,y-200+t*30,op[t]);
setcolor(10);
settextstyle(0,0,1);
outtextxy(x-280,y-200+t*30,op[t]);return t;   }
else goto up;}

master()
{int gd=DETECT,gm,x,y,j,h;user_1 f;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
x=getmaxx()/2,y=getmaxy()/2;
 M.open("samp1.dat",ios::out | ios::in | ios::binary);
  unsigned long ib=0,lb;
   M.seekg(0,ios::end);
   lb=M.tellp();
   M.seekg(lb-sizeof(f),ios::beg);
   M.read((char*)&f,sizeof(f));
   h=f.n;
mas();
ut:j=navi1();
if(j==0)
{dispa(h);goto ut;}
if(j==1)
{int k=modi(h);if(k==-2)goto ut; }
if(j==2)
{hscore1 H;
fstream sc;sc.open("score.dat",ios::in|ios::out|ios::binary);
 sc.seekg(0,ios::beg);
 sc.read((char*)&H,sizeof(H));
int c[8],i=0;char G[8][20]={{"Tic-Tac-Toe"},{"Quiz Up"},{"Boo Man"},{"Sudoku"},{"Jumpy"},{"Soundo"},{"Duoo"},{"Match IT"}};
yyd:
setfillstyle(1,7);
bar(x-110+i*20,y-185+(i*9),x-110+strlen(G[i])*10+i*20,y-160+(i*9));
setcolor(0);outtextxy(x-100,y-175,G[i]);
yy:sound(293*2);delay(50);nosound();sound(392*2);delay(50);nosound();dispasc(i,H);char b=getch();b=tolower(b);
if(i<=3)
{setfillstyle(0,0);
bar(x-110,y-185+i*20,x-110+strlen(G[i])*10,y-160+i*20);
setcolor(7);outtextxy(x-100,y-175+i*20,G[i]);}
else if(i>3)
{setfillstyle(0,0);
bar(x+30,y-185+(i-4)*20,x+30+strlen(G[i])*10,y-160+(i-4)*20);
setcolor(7);outtextxy(x+40,y-175+(i-4)*20,G[i]);
}
if(b=='s')i==7?i=0:i++;
 if(b=='w')i==0?i=7:i--;
 if(b=='d'){if(i<=3)i+=4;else i-=4;}
  if(b=='a'){if(i>3)i-=4;else i+=4;}

if(i<=3)
{setfillstyle(1,7);
bar(x-110,y-185+i*20,x-110+strlen(G[i])*10,y-160+i*20);
setcolor(0);outtextxy(x-100,y-175+i*20,G[i]);}
else if(i>3)
{setfillstyle(1,7);
bar(x+30,y-185+(i-4)*20,x+30+strlen(G[i])*10,y-160+(i-4)*20);
setcolor(0);outtextxy(x+40,y-175+(i-4)*20,G[i]);
}

if(b==8 || b==27)
{if(i<=3)
{setfillstyle(0,0);
bar(x-110,y-185+i*20,x-110+strlen(G[i])*10,y-160+i*20);
setcolor(7);outtextxy(x-100,y-175+i*20,G[i]);}
else if(i>4)
{setfillstyle(0,0);
bar(x+30,y-185+(i-4)*20,x+30+strlen(G[i])*10,y-160+(i-4)*20);
setcolor(7);outtextxy(x+40,y-175+(i-4)*20,G[i]);
}setfillstyle(0,0);bar(x-289,y+31,x+294,y+211);
setcolor(13);
line(x-289,y+60,x+294,y+60);
setcolor(12);
line(x-289,y+90,x+294,y+90);
line(x-289,y+120,x+294,y+120);
line(x-289,y+150,x+294,y+150);
line(x-289,y+180,x+294,y+180);sc.close();goto ut;}
else goto yy;
}
if(j==3)
{f.db[0]='0',f.n=h+1,f.gn=2,f.p=50;
edito(f.na,f.un,f.pa,h,f.db);
M.seekp(0,ios::end);
M.write((char*)&f,sizeof(f));
h++;dispa(h);goto ut;
}
if(j==4){M.close();return j;}

if(j==5){M.close();return j;}
else goto ut;

}