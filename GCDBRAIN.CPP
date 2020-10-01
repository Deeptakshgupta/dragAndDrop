//Calculating GCD using recursion in very easy way
#include<iostream.h>
#include<conio.h>
int gcd(int a,int b)
{
if(b==0)
return(a);
else
return(gcd(b,a%b));
}
void main()
{
clrscr();
int a,b;
cout<<"Enter two number whose gcd is to be found:";
cin>>a>>b;
cout<<"GCD is :"<<gcd(a,b);
getch();
}