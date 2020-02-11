//swap
#include<iostream>
using namespace std;
void swap_value(int,int);
void swap_address(int *,int *);
void swap_reference(int&, int&);
int main()
{
    int a,b,ch;
    char s;
    do{
    s='y';
	cout<<"**** SWAPPING ****\nEnter the first no.(a):";
	cin>>a;
	cout<<"\nEnter the second no.(b):";
	cin>>b;
    cout<<"Before swapping:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"\n**** ```MENU``` ****\n1. Using Pass by value\n2.Using Pass by address\n3. Using Pass by reference\n \tEnter an option   :";
    cin>>ch;
    switch(ch)
    {
    case 1:
        swap_value(a,b);
        break;
    case 2:
        swap_address(&a,&b);
        break;
    case 3:
        swap_reference(a,b);
        break;
    default:
        cout<<"!!!Invalid Input!!!";
    }
    cout<<"\nDo you wish to continue?(y/n):";
    cin>>s;
    }while(s=='y');
}
void swap_value(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
	cout<<"\nAfter swapping: a = "<<a<<" b = "<<b;
}
void swap_address(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
    cout<<"\nAfter swapping: a = "<<*a<<" b = "<<*b;
}
void swap_reference(int& a,int& b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nAfter swapping: a = "<<a<<" b = "<<b;
}
