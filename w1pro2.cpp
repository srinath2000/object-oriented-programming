//program to find the compound interest using function with arguments and return interest.
#include<iostream>
#include<math.h>
using namespace std;
float comp(float p,float r,float t,float n)
{
float ci;
	ci=p*pow((1+r/100),n*t);
	return ci;
	}
int main()
{
	float p,r,t,a,n;
	cout<<"Enter Principle, Rate ,no of years and  Time : ";
	cin>>p>>r>>n>>t;
     a=comp(p,r,t,n);
cout<<" Compound Interest is  :"<<a;
return 0;
}
