#include<ctype.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>


class stack
{float st[20],top;
public:
stack()
{top=-1;}
void push()
{int i;
cout<<"Number of stocks to enter-";cin>>i;
 while(i!=0)
 {if(top==19){cout<<"\n\tStock unavailable";return;}
  top++;cout<<"Enter stock-";cin>>st[top];i--;}d:}

void pop1()
{if(top==-1)
 {cout<<"\n\t\tSORRY,NO STOCK TO DELETE ;(";return;}

 cout<<"\n\tVanished stock-"<<st[top--];
}
void popa()
{int c=top+1;
 top=-1;
  cout<<"\n\t"<<c<<" Data Deleted :(";}
void disp()
{int c=top,y=wherey()+1;
 if(top==-1)
 {cout<<"\n\t\tSORRY,NO STOCK TO DISPLAY:(";return;}
cout<<"\t\tSTOCK\n\t\t\b~~~~~~~\n";

while(c!=-1)
cout<<st[c--]<<"\t";}
};


void main()
{int k,i;stack ob[4];
menu:clrscr();
 gotoxy(27,1);cout<<"STACK THROUGH ARRAY(STOCK MARKET-BSE)";
 gotoxy(26,2);cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
 gotoxy(1,3);cout<<"--------------------------------------------------------------------------------";
 gotoxy(5,5);
cout<<"\t1.TATA\n\t2.Reliance\n\t3.Kotak\n\t4.Micro\n\t5.EXIT\n";
cout<<"K-";cin>>i; if(i==5)exit(0);i--;
gotoxy(1,3);cout<<"--------------------------------------------------------------------------------";
cout<<"\n\t1.Enter Stock\n\t2.Display Stock\n\t3.Delete Stock\n\t4.Main Menu\n\t5.EXIT";
yo:cout<<"\n K-";cin>>k;
switch(k)
{case 1:ob[i].push();break;
 case 2:ob[i].disp();break;
 case 3:{cout<<"\t1.One\n\t2.All";int o;ag:cout<<"\nK'-";cin>>o;switch(o){case 1:ob[i].pop1();break;case 2:ob[i].popa();break;default:goto ag;}}break;
 case 4:goto menu;break;
 case 5:exit(0);break;
 default:goto yo;
}goto yo;getch();}