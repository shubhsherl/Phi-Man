#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int n;
struct stu
{int sn,cl,d,m,y;double pr,ma[5];char sc,gn,nm[20],fm[20],mm[20];};

void disptp()
{int x=23,y=1;
 clrscr();gotoxy(x,y);cout<<"JAGAT TARAN GOLDEN JUBILEE SCHOOL";
 gotoxy(x-1,++y);cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
 gotoxy(3,y+1);cout<<"__________________________________________________________________________";
 gotoxy(x=4,y+=2);cout<<"Sno.";gotoxy(x+=6,y);cout<<"NAME";
 gotoxy(x+=10,y);cout<<"Class";gotoxy(x+=9,y);cout<<"F-NAME";
 gotoxy(x+=10,y);cout<<"M-NAME";gotoxy(x+=9,y);cout<<"GEND.";gotoxy(x+=8,y);cout<<"DOB";gotoxy(x+=7,y);cout<<"MARKS";
 gotoxy(x+=8,y);cout<<"Perc.(%)";
 gotoxy(3,5);cout<<"--------------------------------------------------------------------------";

}
 void disprec(stu R,int i)
{int x=5,y=6+i,g;
if(strlen(R.nm)>=9)g=2;else g=12-strlen(R.nm);
 gotoxy(x=5,y);cout<<i+1;gotoxy(x+=3,y);puts(R.nm);
 gotoxy(x+=g+strlen(R.nm),y);cout<<R.cl<<" "<<R.sc;gotoxy(x+=6,y);puts(R.fm);
if(strlen(R.fm)>=9)g=2;else g=12-strlen(R.fm);
 gotoxy(x+=g+strlen(R.fm),y);puts(R.mm);
if(strlen(R.mm)>=9)g=2;else g=12-strlen(R.mm);
 gotoxy(x+=g+strlen(R.mm),y);cout<<R.gn;gotoxy(x+=4,y);cout<<R.d<<"/"<<R.m<<"/"<<R.y;gotoxy(x+=12,y);cout<<R.pr*5;
 gotoxy(x+=6,y);cout<<R.pr<<"%";
}



void nsort(stu R[],int s)
{ stu t;
  for(int i=0;i<n;i++)
  {for(int j=i;j<n;j++)
  { t=R[j];
    if((s-1?(strcmpi(R[i].nm,R[j].nm)<0):(strcmpi(R[i].nm,R[j].nm)>0)))
    {R[j]=R[i];R[i]=t;}}    }}


void csort(stu R[],int s)
{ stu t; int i=1,j;
 while(i<n)
 {t=R[i];j=i-1;
  while((s-1?t.cl>R[j].cl:t.cl<R[j].cl) && j>=0)
  {R[j+1]=R[j];j--;}R[j+1]=t;i++;}}

void msort(stu R[],int s)
{ stu t;
  for(int i=0;i<n;i++)
  {for(int j=i;j<n;j++)
  { t=R[j];
    if(s-1?R[i].pr<R[j].pr:R[i].pr>R[j].pr)
    {R[j]=R[i];R[i]=t;}} }}

void asort(stu R[],int s)
{ stu t;
  for(int i=0;i<n;i++)
  for(int j=i;j<n;j++)
  {if(s-1?(R[i].y>R[j].y):(R[i].y<R[j].y) )
    {t=R[i];R[i]=R[j];R[j]=t;}
  else if(R[i].y==R[j].y)
   { if(s-1?(R[i].m>R[j].m):(R[i].m<R[j].m) )
    {t=R[i];R[i]=R[j];R[j]=t;}
   else if(R[i].m==R[j].m)
   { if(s-1?(R[i].d>R[j].d):(R[i].d<R[j].d) )
    {t=R[i];R[i]=R[j];R[j]=t;}}}}
}

void main()
{
  stu s[10];int P=0,k,C=0,i=0;
menu: clrscr();
 gotoxy(23,1);cout<<"JAGAT TARAN GOLDEN JUBILEE SCHOOL";
 gotoxy(22,2);cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
menu1: cout<<"\n\n\n\t1.Enter Record\n\t2.Display Record\n\t3.Filter Record\n\t4.EXIT\n";
if(C)cout<<"\t5.Insert Record\n";
cout<<" K-";cin>>k;
if(C)if(k==5){i=n;n++;k=1;}
if(k==4)exit(0);
if(k==1)
 {clrscr(); gotoxy(30,2);cout<<"STUDENT RECORD ENTRY";
  gotoxy(29,3);cout<<"----------------------";
if(C==0){cout<<"\n\tEnter Number of Entry:-";cin>>n;}
  ofstream my("store.txt");
  for(i,C=1;i<n;i++,P=0)
 {


  cout<<"\n\tStudent No- "<<i+1;my<<i+1<<" ";
  cout<<"\n\tName-";gets(s[i].nm);my<<s[i].nm<<" ";
  cout<<"\n\tFather's Name-";gets(s[i].fm);my<<s[i].fm<<" ";
 cout<<"\n\tMother's Name-";gets(s[i].mm); my<<s[i].mm<<" ";
  cout<<"\n\tClass and Section-";cin>>s[i].cl;cin>>s[i].sc;s[i].sc=toupper(s[i].sc);my<<s[i].cl<<" "<<s[i].sc<<" ";
dat:  cout<<"\n\tD.O.B.(dd-mm-yy)-";cin>>s[i].d>>s[i].m>>s[i].y;if(s[i].d>31 || s[i].m>13 || s[i].y>2010 ||s[i].y<1990){cout<<"\n\t\t**ERROR**\n\tEnter Valid Date";goto dat;}my<<s[i].d<<"/"<<s[i].m<<"/"<<s[i].y<<" ";
gen:  cout<<"\n\tGender(M/F)-"; cin>>s[i].gn;s[i].gn=toupper(s[i].gn);if(s[i].gn!='M'&& s[i].gn!='F'){cout<<"\n\t\t**ERROR**\n\tEnter Valid gender";goto gen;}my<<s[i].gn;
char su=67;  cout<<"\n\tMarks in Subjects- ";for(int r=0;r<5;r++){cout<<'\t'<<"\""<<su<<"\"-";cin>>s[i].ma[r];P+=s[i].ma[r];su+=2+r;(r>=2?su+=1:su+=0);my<<s[i].ma[r]<<" ";}my<<'\n';
s[i].pr=P/5; }my.close();clrscr();goto menu; }

if(k==2)
{dis:
 disptp();
 for( int i=0;i<n;i++)
 disprec(s[i],i); goto menu1; }
if(k==3)
{so: clrscr();
  gotoxy(5,7);cout<<"SORT BY:-";
  gotoxy(5,8);cout<<"1. NAME";
  gotoxy(5,9);cout<<"2. Class";
  gotoxy(5,10);cout<<"3. Marks";
  gotoxy(5,11);cout<<"4. Age\n\t";
  gotoxy(5,12);cout<<"5. Back\n\t";
  int o;cout<<"S-";cin>>o;
  switch(o)
  {case 1:
   {int e;sa: gotoxy(17,8);cout<<"1.A-Z\t2.Z-A\t";cout<<"S-";cin>>e;
    if(e==1 ||e==2)nsort(s,e); else {cout<<"\n\t\t**ERROR**\n\tEnter correct Key";goto sa;}
     goto so;}
   case 2:
   {int e;sa1: gotoxy(18,9);cout<<"1.Lower to Upper\t2.Upper to Lower\t";cout<<"S-";cin>>e;
    if(e==1 ||e==2)csort(s,e); else {cout<<"\n\t\t**ERROR**\n\tEnter correct Key";goto sa1;}
     goto so;}
    case 3:
   {int e;sa2:gotoxy(18,10); cout<<"1.Low to High\t2.High to Low\t";cout<<"S-";cin>>e;
    if(e==1 ||e==2)msort(s,e); else {cout<<"\n\t\t**ERROR**\n\tEnter correct Key";goto sa2;}
     goto so;}
    case 4:
   {int e;sa3: gotoxy(16,11);cout<<"1.Younger to Elder\t2.Elder to Younger\t";cout<<"S-";cin>>e;
    if(e==1 ||e==2)asort(s,e); else {cout<<"\n\t\t**ERROR**\n\tEnter correct Key";goto sa3;}
     goto so;}
    case 5:
    goto dis;
   default:{cout<<"\n\t\t**ERROR**\n\tEnter correct Key";goto so;}
   }    }
  getch();
}