#include<iostream.h>
#include<conio.h>
#define f(x)       if(q==x)
#include<stdlib.h>
void lsearch(int a[],int n,int x,int pos[],int &t)
{ int i=0,j=0;
  while(i<n)
  { if(a[i]==x)
   pos[j++]=i;i++;}t=j;}
//void bsearch
void bubsort(int a[],int n)
{ int i=0,j=0,t;
  while(i<n)
  { for(j=i;j<n-1;j++)
   { if(a[i]>a[j+1])
    {t=a[i];a[i]=a[j+1];a[j+1]=t;}}i++;}}
void selsort(int a[], int n)
{ int i=0,j,p,s;
 while(i<n)
 {s=a[i];p=i;j=i+1;
  while(j<n)
  {if(a[j]>s)
   {s=a[j];p=j;}j++;}
  a[p]=a[i];a[i]=s;i++;}}
void insort(int a[], int n)
{ int i=1,j,t;
 while(i<n)
 {t=a[i];j=i-1;
  while(t<a[j] && j>=0)
  {a[j+1]=a[j];j--;}a[j+1]=t;i++;}}
void disp(int a[],int n)
{ int i=0;
  while(i<n)
  cout<<a[i++]<<" ";cout<<endl;}
void inarray(int a[],int &n,int x)
 {int i=0,p;
  while(i<n)
  {if(a[i]<x && a[i+1]>=x)
  {p=i+1;break;}if(a[0]>x)p=0;if (a[n-1]<x)p=n;
  i++;}i=n;
  while(i>p)
  {a[i]=a[i-1];i--;}
   a[p]=x; n++;}
void del1array(int a[],int &n,int x)
 { int p=-1,i=0;
  while(i<n)
  { if(a[i]==x)
   {p=i;break;}i++;}
  if(p>=0)
  {i=p;
   while(i<n)
   {a[i]=a[i+1];i++;}n--;}}
void delarray(int a[],int &n,int x)
 { int p=-1,i=0,j;
  while(i<n)
  {if (a[i]==x)
   {p=i;j=p;
   while(j<n)
   {a[j]=a[j+1];j++;}n--;}
   if(a[i]==x)i--;i++;}}
void merg(int a[],int m, int b[],int n,int c[])
{ int x=0,i=0,j=0;
 while(i<m &&j<n)
 {if(a[i]<b[j])
  c[x++]=a[i++];else c[x++]=b[j++];}
  while(i<m)
  c[x++]=a[i++];
  while(j<n)
  c[x++]=b[j++];}
void main()
{ clrscr();
  int q,n,i=0,a[100],m,j=0,b[100],c[110],f;
  pmenu:
 cout<<"                       *MENU* \n";
 cout<<" 1.Enter a[].         2.Enter b[].         3.Display a[] \n\
 4.Display b[].       5.Sort a[].          6.Sort b[].\n\
 7.Insert a[]         8.Insert b[]         9.Delete in a[] \n\
 10.Delete in b[]     11.Search in a[]     12.Search in b[]\n\
 13.Merge a[] & b[]   14.EXIT\n";
 menu:
 cout<<"K-"; cin>>q;
if(q<1 || q>14)goto pmenu;
f(14)
exit(0);
 f(1)
 {cout<<"enter size of a[]"<<endl;cin>>n;
 cout<<"enter the elements of a[]"<<endl;i=0;
 while(i<n)
 cin>>a[i++];goto menu;  }
  f(2)
 {cout<<"enter size of b[]"<<endl;
  cin>>m;
 cout<<"enter the elements of b[]"<<endl;j=0;
 while(j<m)
 cin>>b[j++];goto menu; }
 f(3)
 {disp(a,n);goto menu;}
 f(4)
 {disp(b,m);goto menu;}
 f(5)
 {cout<<"Sort-1.A2D, 2.D2A \n";
  int t;cin>>t;
  if(t==1)bubsort(a,n);
  if(t==2)selsort(a,n);
  goto menu; }
f(6)
 {cout<<"Sort-1.A2D, 2.D2A. \n";
  int t;cin>>t;
  if(t==1)bubsort(b,m);
  if(t==2)selsort(b,m);
  goto menu;}
f(7)
{cout<<"a[] will be sorted.\n";
int x;insort(a,n);
cout<<"Enter the no.\n";
cin>>x;
 inarray(a,n,x);goto menu;}
 f(8)
{cout<<"b[] will be sorted.\n";
int x;insort(b,m);
cout<<"Enter the no.\n";
cin>>x;
 inarray(b,m,x);goto menu;}
f(9)
{int l,i=0,c=0;
 cout<<"Enter the no.\n";
 cin>>l;
 while(i<n)
 {if(a[i]==l)c++;i++;}
 if(c==0)
  cout<<"No such element";
 else if (c==1)
 del1array(a,n,l);
 else if (c>=2)
 {cout<<"1.Delete 1st "<<l<<"\n2. Delete all "<<l;
 int h;cin>>h;if(h==1)del1array(a,n,l);else delarray(a,n,l);}goto menu;}
f(10)
{int l,i=0,c=0;
 cout<<"Enter the no.\n";
 cin>>l;
 while(i<m)
 {if(b[i]==l)c++;i++;}
 if(c==0)
  cout<<"No such element";
 else if (c==1)
 del1array(b,m,l);
 else if (c>=2)
 {cout<<"1.Delete 1st "<<l<<"\n2.Delete all "<<l;
 int h;cin>>h;if(h==1)del1array(b,m,l);else delarray(b,m,l);}goto menu;}
f(11)
{int x,i=0,p[100],t=-1;
 cout<<"Enter no.\n";cin>>x;
 lsearch(a,n,x,p,t);if(t>0){cout<<x<<" is in ";
 while(i<t)
 {int p1=p[i++]+1;cout<<p1;
 p1>3?cout<<"th, ":p1==1?cout<<"st, ":p1==2?cout<<"nd, ":p1==3?cout<<"rd, ":cout<<""; }
 cout<<"\b\b position.\n";}
 else cout<<x<<" not Found\n";goto menu;}
f(12)
{int x,i=0,p[100],t=-1;
 cout<<"Enter no.\n";cin>>x;
 lsearch(b,m,x,p,t);if(t>0){cout<<x<<" is in ";
 while(i<t)
 {int p1=p[i++]+1;cout<<p1;
 p1>3?cout<<"th, ":p1==1?cout<<"st, ":p1==2?cout<<"nd, ":p1==3?cout<<"rd, ":cout<<""; }
 cout<<"\b\b position.\n";}
 else cout<<x<<" not Found\n";goto menu;}
f(13)
{cout<<"This will sort your array.\n";
 insort(a,n);insort(b,m);
 merg(a,n,b,m,c);f=m+n;
 disp(c,f);cout<<endl;
 goto menu;}
 getch();
 }
