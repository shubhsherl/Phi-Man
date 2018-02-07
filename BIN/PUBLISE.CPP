#include<stdlib.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
int it[2];
void disptp()
{int x=23,y=1;
 clrscr();gotoxy(x,y);cout<<"BHARTI PUBLISHERS & CASSETTES";
 gotoxy(x-1,++y);cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
 gotoxy(3,y+1);cout<<"__________________________________________________________________________";}

void rectp(int i)
{int x,y=wherey();
gotoxy(30,y);i?cout<<"TAPE RECORD":cout<<"BOOK RECORD";
gotoxy(3,y+1);cout<<"--------------------------------------------------------------------------";
gotoxy(x=16,y+=2);cout<<"Sno.";gotoxy(x+=9,y);cout<<"TITLE";
 gotoxy(x+=10,y);cout<<"Price";gotoxy(x+=12,y);i?cout<<"Playtime":cout<<"No of Pages";
gotoxy(3,y+1);cout<<"--------------------------------------------------------------------------";
}

class publication
{int sn; char ti[15];float pr;
 public:
 publication()
 {ti[0]='\0';pr=0;sn=0;
 }
 getp(int i)
 {cout<<"\nS.no.-";cout<<++it[i];sn=it[i];
  cout<<"\tTitle-";gets(ti);
  cout<<"\tPrice-";cin>>pr;}
 putp()
 {int x=17,y=wherey()+1,g;
 gotoxy(x,y);cout<<sn;
 gotoxy(x+=7,y);puts(ti);
if(strlen(ti)>=9)g=2;else g=12-strlen(ti);
 gotoxy(x+=g+strlen(ti),y);cout<<pr;gotoxy(x+=17,y);
 }  redsn(){sn--;}
};
class book:public publication
{int pg;
 public:
 book():publication()
 {pg=0;}
 getb()
 {getp(0);
 cout<<"\tNo.of Pages-";cin>>pg;
 }
 putb()
 {putp(); cout<<pg;}

};
class tape:public publication
{float pt;
 public:
 tape():publication()
 {pt=0;}
 gett()
 {getp(1);
 cout<<"\tPlay time(min)-";cin>>pt;}
 putt()
 {putp(); cout<<pt;}


};


void main()

{book B[10];tape T[10];int k;int C[2]={0,0},i[2]={0,0},n[2]={0,0};char ef[2][7]={{"Enter"},{"Insert"}};
menu:disptp();
cout<<"\n\t1."<<ef[C[0]]<<" Book\t2.Display Book\t3.Delete Book";
gotoxy(3,5);cout<<"--------------------------------------------------------------------------";
cout<<"\n\t4."<<ef[C[1]]<<" Tape\t5.Display Tape\t6.Delete Tape\t7.EXIT";
gotoxy(3,7);cout<<"--------------------------------------------------------------------------";
menu1:cout<<"\nK-";cin>>k;
if(C[0])if(k==1){n[0]++;}
if(C[1])if(k==4){n[1]++;}
if(k==7)exit(0);

if(k==1)
 {clrscr(); gotoxy(30,2);cout<<"BOOK RECORD ENTRY";
	    gotoxy(29,3);cout<<"------------------";
if(C[0]==0){cout<<"\n\tEnter Number of Entry:-";cin>>n[0];}
for(i[0],C[0]=1;i[0]<n[0];i[0]++)
B[i[0]].getb();clrscr();
goto menu;}

if(k==4)
 {clrscr(); gotoxy(30,2);cout<<"TAPE RECORD ENTRY";
	    gotoxy(29,3);cout<<"------------------";
if(C[1]==0){cout<<"\n\tEnter Number of Entry:-";cin>>n[1];}
for(i[1],C[1]=1;i[1]<n[1];i[1]++)
T[i[1]].gett();clrscr();
goto menu;}

if(k==2)
{if(n[0]==0){cout<<"No record";getch();goto menu;}
 rectp(0);
 for( i[0]=0;i[0]<n[0];i[0]++)
 B[i[0]].putb(); goto menu1; }
if(k==5)
{ if(n[1]==0){cout<<"No record";getch();goto menu;}
 rectp(1);
 for(  i[1]=0;i[1]<n[1];i[1]++)
 T[i[1]].putt(); goto menu1; }

if(k==3)
  {
  int no;
  cout<<"\n\t Enter S.no to delete-";cin>>no;
  if(no<n[0])
  for(int i=no-1;i<n[0];i++)
   {B[i]=B[i+1];B[i].redsn();}it[0]--;n[0]--;if(n[0]==0)C[0]=0;goto menu;}

if(k==6)
  {
  int no;
  cout<<"\n\t Enter S.no to delete-";cin>>no;
  if(no<n[1])
  for(int i=no-1;i<n[1];i++)
   {T[i]=T[i+1];T[i].redsn();}it[1]--;n[1]--;if(n[1]==0)C[1]=0;goto menu;}






}

