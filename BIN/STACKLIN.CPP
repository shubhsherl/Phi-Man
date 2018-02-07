#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

struct node
{int a;
char string[20];
node *next;
};
class stack
{node *top;
public:
stack()
{top=NULL;
}
void push()
{node *ptr;
ptr=new node;
if(ptr==NULL)
{cout<<"Stack Underflow";
}
cout<<"Enter the value of a";
cin>>ptr->a;
cout<<"Enter the value of string";
gets(ptr->string);
ptr->next=NULL;
if(top==NULL)
top=ptr;
else
{ptr->next=top;
top=ptr;
}}
void pop()
{node *ptr;
if(top==NULL)
{cout<<"Stack Underflow";
return;}
ptr=top;
top=top->next;
cout<<ptr->a<<"  "<<ptr->string;
delete ptr;}
void display()
{node *ptr;
ptr=top;
if(ptr==NULL)
{cout<<"Stack Underflow";
return;}
while(ptr!=NULL)
{cout<<"a="<<ptr->a<<"string="<<ptr->string<<'\n';
ptr=ptr->next;}}
~stack()
{node *ptr;
while(top!=NULL)
{ptr=top;top=top->next;
cout<<"/n Destruct";
delete ptr;}
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
