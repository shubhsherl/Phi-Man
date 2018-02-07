#include<stdlib.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
int it=0;
void disptp()
{int x=23,y=1;
 clrscr();gotoxy(x,y);cout<<"VINAY TRAVEL & TOURISM";
 gotoxy(x-1,++y);cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
 gotoxy(3,y+1);cout<<"__________________________________________________________________________";
 gotoxy(x=6,y+=2);cout<<"Tno.";gotoxy(x+=9,y);cout<<"NAME";
 gotoxy(x+=10,y);cout<<"From";gotoxy(x+=12,y);cout<<"To";
 gotoxy(x+=10,y);cout<<"Adults";gotoxy(x+=9,y);cout<<"Kids";gotoxy(x+=8,y);cout<<"Date";gotoxy(x+=10,y);cout<<"Fare";
 gotoxy(3,5);cout<<"--------------------------------------------------------------------------";

}

class tour
{int nok,noa,km,d,m,y; float fare;char Tc[5],nm[15],frm[10],to[10];
public:
tour()
{nok=noa=km=d=m=y=0;fare=0;
strcpy(Tc,"T-0");strcpy(nm,"\0");strcpy(to,"\0");strcpy(frm,"\0");}

void Assign()
{float fa;
if(km>=1000)fa=500;
else if(km<1000 && km>=500)fa=300;
else if(km<500)fa=200;
fare=noa*fa+nok*(fa/2);}

Entertour()
{
 cout<<"\n\tTour Code- T-0"<<++it;char ti[3];itoa(it,ti,10);strcat(Tc,ti);
  cout<<"\n\tName-";gets(nm);
  cout<<"\tFrom-";gets(frm);
 cout<<"\tTo-";gets(to);
  cout<<"\tTotal Distance-" ;cin>>km;Assign();
  cout<<"\tNumber of Adults-";cin>>noa;
 cout<<"\tNumber of Kids-";cin>>nok;
dat:  cout<<"\tDate(dd-mm-yy)-";cin>>d>>m>>y;if(d>31 || m>13 ||y>2010 ||y<1990){cout<<"\n\t\t**ERROR**\n\tEnter Valid Date";goto dat;}
 Assign();
}


Showtour(int i)
{
int x=5,Y=6+i,g;
if(strlen(nm)>=9)g=2;else g=12-strlen(nm);
 gotoxy(x=5,Y);puts(Tc);gotoxy(x+=8,Y);puts(nm);
 gotoxy(x+=g+strlen(nm),Y);puts(frm);
if(strlen(frm)>=9)g=2;else g=12-strlen(frm);
 gotoxy(x+=g+strlen(frm),Y);puts(to);
if(strlen(to)>=9)g=2;else g=12-strlen(to);
 gotoxy(x+=g+strlen(to),Y);cout<<noa;gotoxy(x+=4,Y);cout<<nok;gotoxy(x+=4,Y);cout<<d<<"/"<<m<<"/"<<y;gotoxy(x+=12,Y);cout<<fare;

}
 code(char g[])
{return strcmp(Tc,g);}

};

void main()
{tour T[10];int k,C=0,i=0,n;char ef[2][7]={{"Enter"},{"Insert"}};
menu: clrscr();
 gotoxy(23,1);cout<<"VINAY TRAVEL & TOURISM";
 gotoxy(22,2);cout<<"~~~~~~~~~~~~~~~~~~~~~~~";
menu1: cout<<"\n\n\n\t1."<<ef[C]<<" Tour\n\t2.Display Tour\n\t3.Delete Tour\n\t4.EXIT\n";
//if(C)cout<<"\t5.Insert Tour\n";
cout<<" K-";cin>>k;
if(C)if(k==1){n++;}
if(k==4)exit(0);
if(k==1)
 {clrscr(); gotoxy(30,2);cout<<"TOURIST RECORD ENTRY";
	    gotoxy(29,3);cout<<"---------------------";
if(C==0){cout<<"\n\tEnter Number of Entry:-";cin>>n;}

for(i,C=1;i<n;i++)
T[i].Entertour();clrscr();
goto menu;}

if(k==2)
{dis:
 disptp();
 for( int i=0;i<n;i++)
 T[i].Showtour(i); goto menu1; }
if(k==3)
  {
  int no;
  cout<<"\n\t Enter T-no() to delete- T-0";cin>>no;
  char g[5]="T-0\0",h[3];itoa(no,h,10);strcat(g,h);
  for(int i=0;i<n;i++)
  {if(T[i].code(g)==0)
   {for(;i<n;i++)
   T[i]=T[i+1];n--;if(n==0)goto menu1;goto dis;}}
  goto dis;
  }





  getch();
}







