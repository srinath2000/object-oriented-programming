//program to print fibonocci series
#include<iostream>
using namespace std;
int main()
{

int a, b,c,n,i;
cout<<"Enter limit  :";
cin>>n;
a=0;
b=1;
cout<<a;
cout<<b;
for(i=0;i<n-2;i++)
{
c=a+b;
cout<<c;
a=b;
b=c;

}
}
