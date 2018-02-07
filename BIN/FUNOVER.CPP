#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int sum(int a[])
{int i,s=0;
for(i=0;i<5;i++)
s+=a[i];
return s;}
int sum(int a[],char ch)
{int i,s=0;
if(ch=='e')
{for(i=0;i<5;i++)
if(a[i]%2==0)
s+=a[i];}
else
for(i=0;i<5;i++)
{if(a[i]%2!=0)
s+=a[i];
}return s;
}
void main()
{clrscr();
int i,a[5],n,q,r;char p;
cout<<"Enter elements in array-"<<endl;
for(i=0;i<5;i++)
{cin>>n;
a[i]=n;}
q=sum(a);cout<<"sum="<<q<<endl;
cout<<"Enter 'e' for even and else for odd"<<endl;
cin>>p;
cout<<"SUM=";
r=sum(a,p);
cout<<r;
getch();
}