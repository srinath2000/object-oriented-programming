//program to perform row wise sort in a matrix
#include <iostream>

using namespace std;

#define MAX_SIZE 10

int sort(int mat[MAX_SIZE][MAX_SIZE],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
	{
	for(int k=0;k<n;k++)

        for(j=0;j<n-1;j++)
        {
            if(mat[i][j]>mat[i][j+1])
            {
                temp=mat[i][j];
                mat[i][j]=mat[i][j+1];
                mat[i][j+1]=temp;
            }
        }
}
cout<<"Sorted list\n";
  for(i=0;i<n;i++)
	{
	cout<<"\n";
		for(j=0;j<n;j++)
    		{
        		cout<<mat[i][j];
        		cout<<"\t";
    }
}
}
int main()
{
     int mat[10][10] ;

        int n=3;

        for(int i=0;i<n;i++)
	{
          for(int j=0;j<n;j++)
            cin>>mat[i][j];
        }


    cout << "Original Matrix:\n";

    sort(mat, n);

   return 0;


}
