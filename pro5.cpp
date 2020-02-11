//program to sort an array of integers in ascending order
#include<iostream>
using namespace std;
int sort(int a[],int n)
{
int i,j,k,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
cout<<"sorted list is :";
for(k=0;k<n;k++)
{
cout<<a[k]<<" ";
}
}
int main()
{
int a[100],n,i;
cout<<"Enter the number of elements :";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,n);

}
