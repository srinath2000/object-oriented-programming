//program to find if a number is palindrome or not
#include<iostream>
using namespace std;
main(int)
{int n,sum=0,rev,rem;
cout<<"Enter the number: ";
cin>>n;
rev=n;
while(n>0)
{
rem=n%10;
sum=rem+(sum*10);
n=n/10;
}
if(sum==rev)
{
cout<<"The number is palindrome   ";

}
else
{
cout<<"The number is not palindrome   ";
}


}
