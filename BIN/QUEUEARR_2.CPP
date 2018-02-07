#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

class queue
{int d[5],rear,front;
public:
queue()
{rear=front=4;}
void insert()
{char ch='y';
while(ch!='n')
{if(rear==4)
rear=0;
else
rear++;
if(rear==front)
{cout<<"Queue overflow";
return;}
cout<<"Enter value of data";
cin>>d[rear];
cout<<"Do you want to enter more data ?";}
void remove()
{if(front==rear)
{cout<<"Queue underflow";
return;}
if(front==4)
front=0;
else
front++;
cout<<d[front];
}
void display()
{int i;
if(front==4)
i=0;
else i=front+1;
for(;;)
{cout<<d[i]<<' ';
if(i==rear)
break;
i++;
if(i>4)
i=0;
}}};
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