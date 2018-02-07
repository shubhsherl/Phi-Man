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
void insertion()
{node *temp;
temp=new node;
if(temp==NULL)
{cout<<"Insufficient Memory";
exit(0);
}
cout<<"Enter value of a and String";
cin>>temp->a;
gets(temp->string);
temp->next=NULL;
if(front==NULL)
{front=rear=temp;
rear->next=front;}
else
{rear->next=temp;
rear=temp;
rear->next=front;
}}
void remove()
{node *temp;
if(front==NULL)
{cout<<"Queue Underflow";
return;
}
temp=front;
front=front->next;
cout<<"\na="<<temp->a<<"\nstring="<<temp->string;
delete temp;
rear->next=front;
if(front==NULL)
delete rear;
}

void display()
{node *ptr;
if(front==NULL)
{cout<<"Queue Underflow";
return;
}
ptr=front;
do
{cout<<"a="<<ptr->a<<"String="<<ptr->string;
ptr=ptr->next;}
while(ptr!=rear);
}
};
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
ob.insertion();break;
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