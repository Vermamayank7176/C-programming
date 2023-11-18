#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[10][10],*ptr ,*ptr1,n,sum=0,i,j;
    cout<<"Enter the size of the matrix: ";
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"The array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<"\n";
    }
   
     for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            ptr=&array[i][j];
            if (i=j){
            sum=sum+(*ptr);
            }
        }
    }
    cout <<"The sum of digonal elements is: "<<sum;

}