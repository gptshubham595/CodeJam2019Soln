#include<all.h>
#include<conio.h>
int add(int , int);
void main()
{                    clrscr();
int n,n1;
cout<<"2 nos.";
cin>>n>>n1;
int total=add(n,n1);
cout<<"total="<<total;
getch();
}
int add(int a ,int b)
{    int t=a+b;
return t;
}