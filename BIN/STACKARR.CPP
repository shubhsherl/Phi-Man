#include<ctype.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>

struct node
{char na[10],no[11];node  *next;};

class stack
{node  *top;
public:
stack()
{top='\0';}
void push()
{node *ptr;
 ptr=new node;
 if(ptr=='\0')
 {cout<<"\n\t\tSORRY,MEMORY UNAVAILABLE ;(";exit(0);}
cout<<"\n\tEnter name-";gets(ptr->na);
cout<<"\tEnter Mob no.-";gets(ptr->no);
ptr->next=top;
top=ptr;
}
void pop1()
{node *ptr;
 if(top=='\0')
 {cout<<"\n\t\tSORRY,NO DATA TO DELETE ;(";return;}
ptr=top;top=top->next;
cout<<"\n\tDeleted name-";cout<<ptr->na;
cout<<"\tDeleted Mob no.-";cout<<ptr->no;
delete ptr;
}
void popa()
{int c=0;node *ptr;
 while(top!='\0')
 {ptr=top;top=top->next;c++;delete ptr;}
  cout<<"\n\t"<<c<<" Data Deleted :(";}
void search()
{node *ptr,*tp;ptr= new node;int c=0;
if(ptr=='\0')
 {cout<<"\n\t\tSORRY,MEMORY UNAVAILABLE ;(";exit(0);}
 if(top=='\0')
 {cout<<"\n\t\tSORRY,NO DATA TO SEARCH :(";return;}
cout<<"\n\tEnter Mob no.-";gets(ptr->no);
 tp=top;
 while(top!='\0')
 {if(strcmp(ptr->no,top->no)==0){c++;break;}top=top->next;}
  if(c==0)cout<<"\n\tData not Found :(";
  else
  {cout<<"\n\tName-";cout<<top->na;
   cout<<"\tMob no.-";cout<<top->no;}
   top=tp;   }
 void disp()
{node *ptr;int c=0,y=wherey()+1;
 if(top=='\0')
 {cout<<"\n\t\tSORRY,NO DATA TO DISPLAY:(";return;}
 ptr=top;
cout<<"\t\t\t\tRECORD";
cout<<"\n----------------------------------------------------------------------";
cout<<"\n\tSno.\tNAME\tMob No.";
cout<<"\n----------------------------------------------------------------------";

while(ptr!='\0')
{cout<<"\n\t"<<++c<<".\t";cout<<ptr->na;
cout<<"\t"<<ptr->no;
ptr=ptr->next;}}

~stack()
{int c=0;node *ptr;
 while(top!='\0')
 {ptr=top;top=top->next;c++;delete ptr;}
  cout<<'\n\t'<<c<<"Data Destructed";}




};


void main()
{int k,i;stack ob[4];
menu:clrscr();
 gotoxy(27,1);cout<<"STACK THROUGH LINKLIST(Contact no.)";
 gotoxy(26,2);cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
 gotoxy(1,3);cout<<"--------------------------------------------------------------------------------";
 gotoxy(5,5);
cout<<"\t1.Family\n\t2.Colleague\n\t3.Friends\n\t4.Coustomer\n\t5.EXIT\n";
cout<<"K-";cin>>i; if(i==5)exit(0);i--;
gotoxy(1,3);cout<<"--------------------------------------------------------------------------------";
cout<<"\t1.Enter Record\n\t2.Display Record\n\t3.Search Record\n\t4.Delete Record\n\t5.Main Menu\n\t6.EXIT";
yo:cout<<"\n K-";cin>>k;
switch(k)
{case 1:ob[i].push();break;
 case 2:ob[i].disp();break;
 case 3:ob[i].search();break;
 case 4:{cout<<"\t1.One\n\t2.All";int o;ag:cout<<"\nK'-";cin>>o;switch(o){case 1:ob[i].pop1();break;case 2:ob[i].popa();break;default:goto ag;}}break;
 case 5:goto menu;break;
 case 6:exit(0);break;
 default:goto yo;
}goto yo;getch();}