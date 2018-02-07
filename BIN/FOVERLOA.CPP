#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void tp()
{int x=30,y=1;
 clrscr();gotoxy(x,y);cout<<"SUM OF ARRAY ELEMENTS";
 gotoxy(x-1,++y);cout<<"~~~~~~~~~~~~~~~~~~~~~~";
 gotoxy(3,y+1);cout<<"__________________________________________________________________________";
}

int sum(int a[],int n)
{ int s=0;
  for(int i=0;i<n;i++)
  s+=a[i];
  return s;}
int sum(int a[],int n,char c)
{  int s=0,i;
   for(i=0;i<n;i++)
   if(c=='E'&& a[i]%2==0)s+=a[i];
   else if(c!='E' && a[i]%2)s+=a[i];
   return s;}
 void main()
 { clrscr(); tp();
  int a[20];int n,h,s;
   cout<<"\n\tEnter size of array-";
   cin>>n;
   cout<<"\n\tEnter elements-";
   for(int i=0;i<n;i++)
   cin>>a[i];
   cout<<"\n1.Sum of Elements\n2.Sum of Even Elements\n3.Sum of odd Elements\n4.EXIT\n";
   up:cin>>h;if(h==4)exit(0);
   if(h==1)s=sum(a,n);
   if(h>1)s=sum(a,n,67+h);
   cout<<"Sum of ";h-1?(h-2?cout<<"odd":cout<<"even"):cout<<"";cout<<" Elements="<<s;cout<<"\n";
   goto up;
   getch();
   }