//votes
#include<iostream>
using namespace std;
class vote
{
public:
    int countvotes;
    static int totalvotes;
    vote()
    {
        countvotes=0;
    }
    void voting();
};
int vote::totalvotes=0;
void vote::voting()
{
    countvotes++;
    totalvotes++;
}
int main()
{
    vote v[5];
    int ch;
    int discardedvote=0;
    char st[5][5],s;
    cout<<"Enter the names of 5 candidates:-\n";
    for(int i=0;i<5;i++)
    {
        cout<<"Enter name of candidate no."<<i+1<<": ";
        cin>>st[i];
    }
    s='y';
    do{
        cout<<"*** CANDIDATE LIST ****\n";
         for(int i=0;i<5;i++)
            cout<<i+1<<"."<<st[i]<<endl;
        cout<<"Enter an option:";
        cin>>ch;
        if(ch>=1&&ch<=5)
            v[ch-1].voting();
	else
		discardedvote++;
        cout<<"Do you want to continue(y/n):";
        cin>>s;
    }while(s!='n');
    cout<<"*** VOTING RESULT ***\n";
    for(int i=0;i<5;i++)
        cout<<i+1<<"."<<st[i]<<" : "<<v[i].countvotes<<endl;
  cout<<"Total votes:"<<vote::totalvotes<<endl;
 cout<<"discardedvote :"<<discardedvote<<endl;
}
