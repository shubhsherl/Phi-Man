#include<ctype.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>


class queue
{float st[20],r,f;
public:
stack()
{r=f=19;}
void push()
{int i;
cout<<"Number of stocks to enter-";cin>>i;
 while(i!=0)
 {if(r==19)r=0;else r++;
 if(r==f){cout<<"\n\tStock unavailable";if(f==0)r=19;else r--;return;}
  cout<<"Enter stock-";cin>>st[r];i--; }d:}

void pop1()
{if(r==f)
 {cout<<"\n\t\tSORRY,NO STOCK TO DELETE ;(";return;}
 if(f==19)f=0;else f++;
 cout<<"\n\tVanished stock-"<<st[f];
}
void popa()
{int c;if(r>f)c=r-f;else c=20-f+r;
 r=f;
  cout<<"\n\t"<<c<<" Data Deleted :(";}
void disp()
{int c;
 if(r==f)
 {cout<<"\n\t\tSORRY,NO STOCK TO DISPLAY:(";return;}
cout<<"\t\tSTOCK\n\t\t\b~~~~~~~\n";
if(f==19)c=0;else c=f+1;
for(;;)
{cout<<st[c]<<"\t";if(c==r)break;c++;if(c>19)c=0;}}

};


void main()
{int k,i;queue ob[4];
menu:clrscr();
 gotoxy(27,1);cout<<"QUEUE THROUGH ARRAY(STOCK MARKET-NSE)";
 gotoxy(26,2);cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
 gotoxy(1,3);cout<<"--------------------------------------------------------------------------------";
 gotoxy(5,5);
cout<<"\t1.TATA\n\t2.Birla\n\t3.Flipkart\n\t4.Micro\n\t5.EXIT\n";
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