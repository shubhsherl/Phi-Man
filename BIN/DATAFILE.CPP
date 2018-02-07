#include<ctype.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>

void main()
{ int y=0,k,l=0,w=0;
ag:
gotoxy(0,0);clrscr();  y=wherey()+1;
  char sto[1000];
 gotoxy(27,y++);cout<<"TURBO STORY ANALYSER ";
 gotoxy(26,y++);cout<<"~~~~~~~~~~~~~~~~~~~~~";
 gotoxy(3,y++);cout<<"--------------------------------------------------------------------------";

 gotoxy(5,y++);
 cout<<"\t1.Get Story\t2.Enter New Story\t3.EXIT\n";
 cout<<"\tK-";cin>>k;
 if(k==1)
 {
   ifstream st("story.txt");
   st.seekg(0,ios::end);unsigned long e=st.tellg();
   if(st.tellg()==0){cout<<"No story is Stored";goto ag;}
  gotoxy(25,y++);cout<<"-:STORYLINES:-";
  gotoxy(24,y++);cout<<"================";
  gotoxy(5,y);st.seekg(0,ios::beg);
  while(st.tellg()!=e)
  {char t;st.get(t);delay(10);if(t!=' ')l++;else w++;
   cout<<t;}w++;st.close();y=wherey()+1;
 gotoxy(1,y++);cout<<"--------------------------------------------------------------------------------";

 }
 if(k==3)exit(0);

 if(k==2)
 {gotoxy(3,y++);cout<<"--------------------------------------------------------------------------";
 gotoxy(25,y++);cout<<"-:ENTER YOUR STORYLINES:-";
 gotoxy(25,y++);cout<<"=========================";
 gotoxy(5,y);
 gets(sto);
 ofstream st("story.txt");
 st<<sto;st.close();y=wherey()+1;
 gotoxy(1,y++);cout<<"--------------------------------------------------------------------------------";
 }
 ag1:
 gotoxy(2,++y);
 cout<<"1.Get Vowels    2.Get No. of Letter   3.Get No. of word   4.Main Menu   5.EXIT\n";
ag2: cout<<"\tK-";cin>>k;
 if(k==5)exit(0);
 else if(k==4)goto ag;
 else if(k==3){gotoxy(5,y+=2);cout<<w;goto ag2;}
 else if(k==2){gotoxy(5,y+=2);cout<<l;goto ag2;}
 else if(k==1)
 { ofstream vo("vowel.txt"); y=wherey()+1;
   ifstream st("story.txt");
   st.seekg(0,ios::end);unsigned long e=st.tellg();
   if(st.tellg()==0){cout<<"No story is Stored";goto ag;}
  gotoxy(25,y++);cout<<"-:VOWELS IN STORYLINE:-";
  gotoxy(24,y++);cout<<"========================";
  gotoxy(5,y);st.seekg(0,ios::beg);vo.seekp(0,ios::beg);
  while(st.tellg()!=e)
  {char t[20],a;st>>t;a=t[0];a=tolower(a);
  if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
  {vo<<t;vo<<" ";cout<<t<<" ";}}st.close();vo.close(); y=wherey()+1;
  gotoxy(1,y++);cout<<"-------------------------------------------------------------------------------";
  goto ag1;
 }


 getch();


}
