//program to check if middle digit is numerically equal to sum of other digits
#include<iostream>
using namespace std;
int check(int a[])
{int i;
if(a[1]==a[0]+a[2])
cout<<"yes";
else
cout<<"no";

}
int main()
{
int a[10],i;
cout<<"Enter the three numbers :";
for(i=0;i<3;i++)
cin>>a[i];
check(a);

}
