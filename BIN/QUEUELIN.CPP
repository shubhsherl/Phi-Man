#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

struct node
{int a;
char string[20];
node *next;
};
class queue
{node *front, *rear;
public:
queue()
{front=rear=NULL;}
void insert()
{node *ptr;ptr=new node;
if(ptr==NULL)
{cout<<"Insufficient Memory";
exit(0);}
cout<<"Enter the value of a";
cin>>ptr->a;
cout<<"Enter the value of string";
gets(ptr->string);
ptr->next=NULL;
if(front==NULL)
front=rear=ptr;
else
{rear->next=ptr;
rear=ptr;
}}
void remove()
{node *ptr;
ptr=front;
front=front->next;
cout<<"\na="<<ptr->a<<"\nstring="<<ptr->string;
delete ptr;
if(front==NULL)
delete rear;
}
void display()
{node *ptr;
ptr=front;
if(ptr==NULL)
{cout<<"Queue Empty";
return;}
while(ptr!=NULL)
{cout<<"a="<<ptr->a<<"string="<<ptr->string<<'\n';
ptr=ptr->next;}}
~queue()
{node *ptr;
while(front!=NULL)
{ptr=front;
front=front->next;
cout<<"\nDestruct";}
delete rear;
}};
void main()
{clrscr();
queue ob;
int p;
char n='y';
while(n=='y')
{cout<<"1-INSERT\n2-DISPLAY\n3-REMOVE\n4-EXIT";
cin>>p;
switch(p)
{case 1:
ob.insert();break;
case 2:
ob.display();break;
case 3:
ob.remove();break;
case 4:
exit(0);break;
}
cout<<"Do you want more operation ?";
cin>>n;
}}