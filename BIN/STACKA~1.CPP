#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

class stack
{int a[5];
int top;
public:
stack()
{top=-1;}
void push()
{char ch='y';
int x;
while(ch!='n')
{cout<<"Enter an Element";
cin>>x;
top++;
if(top==5)
{cout<<"Stack Overflow";
return;}
a[top]=x;
cout<<"Do you want more Elements ?";
ch=getch();
}}
void pop()
{if(top==-1)
{cout<<"Stack Underflow";
return;}
if(top==5)
top--;
cout<<a[top--]<<'\n';}
void display()
{int i;
if(top==-1)
{cout<<"Stack Underflow";
return;}
if(top==5)
top--;
for(i=top;i>=0;i--)
cout<<a[i]<<'\n';
}};
void main()
{clrscr();
stack ob;
int n;char ch='y';
while(ch!='n')
{cout<<"1-PUSH"<<endl<<"2-DISPLAY"<<endl<<"3-POP"<<endl<<"4-EXIT";
cin>>n;
switch(n)
{case 1:
ob.push();break;
case 2:
ob.display();break;
case 3:
ob.pop();break;
case 4:
exit(0);}
cout<<"Do You Want More Operation";
cin>>ch;
}}

